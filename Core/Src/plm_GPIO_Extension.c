/*
 * plm_GPIO_Extension.c
 *
 * Includes helper functions that allow easy interfacing with peripherals connected to the
 * GPIO entension chip. The connected peripherals and their corresponding pins are listed below. These
 * are gathered from the Altium schematic.
 *
 * PIN 0 = Status LED
 * PIN 1 = Storage LED
 * PIN 2 = Overcurrent LED
 * PIN 3 = 5 Volt #0 Enable
 * PIN 4 = 5 Volt #1 Enable
 * PIN 5 = 5 Volt #2 Enable
 * PIN 6 = 5 Volt #3 Enable
 *
 * Pins for power channels are defined in the PLM_POWER_CHANNEL structs in plm_power.c
 *  Created on: Mar 15, 2024
 *      Author: joshwashburn
 */

#include "plm_power.h"
#include "main.h"
#include "GPIO_interface.h"

extern I2C_HandleTypeDef hi2c2;
uint8_t current_external_GPIO = 0b00000000;

void GPIO_init() {
	// configure all ports on the GPIO extender as outputs
	pData[0] = CONFIGURATION_REGISTER;
	pData[1] = 0b11111111;
	HAL_I2C_Master_Transmit(&hi2c2, DEVICE_ADDRESS, pData, 2, 50);
}

void GPIO_Extension_On(int value){
	pData[0] = OUTPUT_PORT_REGISTER;
	pData[1] = value|current_external_GPIO;
	HAL_I2C_Master_Transmit(&hi2c2, DEVICE_ADDRESS, pData , 2, 50); // if there is an error, check the timing value, formerly 0x64.
	current_external_GPIO = value|current_external_GPIO;
}

void GPIO_Extension_Off(int value){
	pData[0] = OUTPUT_PORT_REGISTER;
	pData[1] = value&current_external_GPIO;
	HAL_I2C_Master_Transmit(&hi2c2, DEVICE_ADDRESS, pData , 2, 50); // if there is an error, check the timing value, formerly 0x64.
	current_external_GPIO = value&current_external_GPIO;
}

void GPIO_extension_overcurrent_LED(int state) {
	pData[0] = OUTPUT_PORT_REGISTER;
	if (state == 0) {
		pData[1] = (current_external_GPIO&0b11111011);
		current_external_GPIO = current_external_GPIO&0b11111011;
	} else if (state == 1) {
		pData[1] = (current_external_GPIO|0b00000100);
		current_external_GPIO = current_external_GPIO|0b00000100;
	}
	HAL_I2C_Master_Transmit(&hi2c2, (0b01000000<<1), pData , 2, 50); // if there is an error, check the timing value.
}

void GPIO_Extension_toggle(int pin) {
	pData[0] = POLARITY_INVERSION_REGISTER;
	if (pin == 0) {
		pData[1] = 0b00000001;
	} else if (pin == 1) {
		pData[1] = 0b00000010;
	} else if (pin == 2) {
		pData[1] = 0b00000100;
	}
	HAL_I2C_Master_Transmit(&hi2c2, 0b0010000, pData, 2, 50); // if there is an error, check the timing value.
}


//void GPIO_extension_toggle(int pin_number) {
//	if (pin_number == 0) {
//		// I2C command to toggle pin 0
//	}
//	else if (pin_number == 1) {
//		// I2C command to toggle pin 1
//	}
//	else if (pin_number == 2) {
//		//I2C command to toggle pin 2
//	}
//	else if (pin_number == 3) {
//		//I2C command to toggle pin 3
//	}
//	else if (pin_number == 4) {
//		//I2C command to toggle pin 4
//	}
//	else if (pin_number == 5) {
//		//I2C command to toggle pin 5
//	}
//	else if (pin_number == 6) {
//		//I2C command to toggle pin 6
//	}
//}

//void GPIO_extension_write(int pin_number, bool state) {
//	if (pin_number == 0) {
//		if (state == 1) {
//			// I2C command to turn on pin 0
//		} else if(state == 0) {
//			// I2C command to turn off pin 0
//		}
//	}
//	if (pin_number == 1) {
//		if (state == 1) {
//			// I2C command to turn on pin 1
//		} else if(state == 0) {
//			// I2C command to turn off pin 1
//		}
//	}
//	if (pin_number == 2) {
//		if (state == 1) {
//			// I2C command to turn on pin 2
//		} else if(state == 0) {
//			// I2C command to turn off pin 2
//		}
//	}
//	if (pin_number == 3) {
//		if (state == 1) {
//			// I2C command to turn on pin 3
//		} else if(state == 0) {
//			// I2C command to turn off pin 3
//		}
//	}
//	if (pin_number == 4) {
//		if (state == 1) {
//			// I2C command to turn on pin 4
//		} else if(state == 0) {
//			// I2C command to turn off pin 4
//		}
//	}
//	else if (pin_number == 5) {
//		if (state == 1) {
//			// I2C command to turn on pin 5
//		} else if(state == 0) {
//			// I2C command to turn off pin 5
//		}
//	}
//	else if (pin_number == 6) {
//		if (state == 1) {
//			// I2C command to turn on pin 6
//		} else if(state == 0) {
//			// I2C command to turn off pin 6
//		}
//	}
//}
