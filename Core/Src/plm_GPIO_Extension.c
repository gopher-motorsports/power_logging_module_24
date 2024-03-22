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
 *  Created on: Mar 15, 2024
 *      Author: joshwashburn
 */

#include "GPIO_interface.h"
#include "main.c"

void GPIO_extension_inversion(PLM_POWER_CHANNEL* value){
	uint8_t *pData = &value;
	HAL_I2C_Master_Transmit(hi2c2, 0b0010000, *pData, 0b10, 0x64); // if there is an error, check the timing value.
}



void GPIO_extension_toggle(int pin_number) {
	if (pin_number == 0) {
		// I2C command to toggle pin 0
	}
	else if (pin_number == 1) {
		// I2C command to toggle pin 1
	}
	else if (pin_number == 2) {
		//I2C command to toggle pin 2
	}
	else if (pin_number == 3) {
		//I2C command to toggle pin 3
	}
	else if (pin_number == 4) {
		//I2C command to toggle pin 4
	}
	else if (pin_number == 5) {
		//I2C command to toggle pin 5
	}
	else if (pin_number == 6) {
		//I2C command to toggle pin 6
	}
}

void GPIO_extension_write(int pin_number, bool state) {
	if (pin_number == 0) {
		if (state == 1) {
			// I2C command to turn on pin 0
		} else if(state == 0) {
			// I2C command to turn off pin 0
		}
	}
	if (pin_number == 1) {
		if (state == 1) {
			// I2C command to turn on pin 1
		} else if(state == 0) {
			// I2C command to turn off pin 1
		}
	}
	if (pin_number == 2) {
		if (state == 1) {
			// I2C command to turn on pin 2
		} else if(state == 0) {
			// I2C command to turn off pin 2
		}
	}
	if (pin_number == 3) {
		if (state == 1) {
			// I2C command to turn on pin 3
		} else if(state == 0) {
			// I2C command to turn off pin 3
		}
	}
	if (pin_number == 4) {
		if (state == 1) {
			// I2C command to turn on pin 4
		} else if(state == 0) {
			// I2C command to turn off pin 4
		}
	}
	else if (pin_number == 5) {
		if (state == 1) {
			// I2C command to turn on pin 5
		} else if(state == 0) {
			// I2C command to turn off pin 5
		}
	}
	else if (pin_number == 6) {
		if (state == 1) {
			// I2C command to turn on pin 6
		} else if(state == 0) {
			// I2C command to turn off pin 6
		}
	}
}
