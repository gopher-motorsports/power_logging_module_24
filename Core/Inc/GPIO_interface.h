/*
 * GPIO_interface.h
 *
 *  Created on: Mar 14, 2024
 *      Author: stone
 */

#ifndef INC_GPIO_INTERFACE_H_
#define INC_GPIO_INTERFACE_H_

/** @defgroup GPIO_pins_define GPIO pins define
  * @{
  */
#define NUM_OF_CHANNELS 6
#define MIN_5V_VOLTAGE_V 2.0f
#define MIN_VBAT_VOLTAGE_V 2.0f

// cooling control stuff
#define WHEEL_SPEED_FAN_OFF_THRESH_mph 20.0f
#define TRUST_VALUE_TIME_DELTA_ms 200

typedef struct {
    FLOAT_CAN_STRUCT* parameter;
    GPIO_TypeDef* enable_switch_port;
    uint16_t enable_switch_pin;
    uint8_t enabled;
    float amp_max;
    float ampsec_max;
    float ampsec_sum;
    uint32_t trip_time;
    uint32_t reset_delay_ms;
    uint32_t last_update;
} PLM_POWER_CHANNEL_EXTENSION;

typedef struct  {
		uint8_t pin_0_on = 0b00000001;
		uint8_t pin_0_off = 0b11111110;
		uint8_t pin_1_on = 0b00000010;
		uint8_t pin_1_off = 0b11111101;
		uint8_t pin_2_on = 0b00000100;
		uint8_t pin_2_off = 0b11111011;
		uint8_t pin_3_on = 0b00001000;
		uint8_t pin_3_off = 0b11110111;
		uint8_t pin_4_on = 0b00010000;
		uint8_t pin_4_off = 0b11101111;
		uint8_t pin_5_on = 0b00100000;
		uint8_t pin_5_off = 0b11011111;
		uint8_t pin_6_on = 0b01000000;
		uint8_t pin_6_off = 0b10111111;
} GPIO_data_value;

extern PLM_POWER_CHANNEL_EXTENSION* POWER_CHANNELS[NUM_OF_CHANNELS];

void plm_power_update_channel(PLM_POWER_CHANNEL_EXTENSION* channel);
void plm_cooling_control(void);

#endif /* INC_PLM_POWER_H_ */

