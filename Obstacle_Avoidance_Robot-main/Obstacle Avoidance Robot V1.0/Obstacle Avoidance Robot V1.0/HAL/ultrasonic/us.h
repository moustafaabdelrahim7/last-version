﻿

#ifndef US_H_
#define US_H_

#define F_CPU  8000000ul
#include <util/delay.h>

#include "../../MCAL/dio/dio.h"
#include "../../MCAL/timers/timer.h"
#include "../../HAL/icu/icu.h"
#include "../../HAL/lcd/lcd.h"

#define  ECO_PIN         EXT_INT_2
#define  TRIGGER_PIN      pinb3

void Ultrasonic_init_SW(void);

void Ultrasonic_GetDistance(uint32_t*dis);











#endif /* US_H_ */