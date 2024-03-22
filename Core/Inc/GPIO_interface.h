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
		uint8_t inv_pin_0 = 0b00000001;
		uint8_t inv_pin_1 = 0b00000010;
		uint8_t inv_pin_2 = 0b00000100;
		uint8_t inv_pin_3 = 0b00001000;
		uint8_t inv_pin_4 = 0b00010000;
		uint8_t inv_pin_5 = 0b00100000;
		uint8_t inv_pin_6 = 0b01000000;
} GPIO_data_value;

extern PLM_POWER_CHANNEL_EXTENSION* POWER_CHANNELS[NUM_OF_CHANNELS];

void plm_power_update_channel(PLM_POWER_CHANNEL_EXTENSION* channel);
void plm_cooling_control(void);

#endif /* INC_PLM_POWER_H_ */

