/*
 * software_timer.h
 *
 *  Created on: Feb 1, 2024
 *      Author: Huy
 */

#define TICK	10

extern int timer1_counter;
extern int timer1_flag;

void setTimer1(int duration);

void timerRun(void);
