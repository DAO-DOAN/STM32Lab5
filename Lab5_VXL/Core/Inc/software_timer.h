/*
 * software_timer.h
 *
 *  Created on: Dec 11, 2024
 *      Author: Legion 5
 */

#ifndef SRC_SOFTWARE_TIMER_H_
#define SRC_SOFTWARE_TIMER_H_

#include "main.h"

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();

#endif /* SRC_SOFTWARE_TIMER_H_ */
