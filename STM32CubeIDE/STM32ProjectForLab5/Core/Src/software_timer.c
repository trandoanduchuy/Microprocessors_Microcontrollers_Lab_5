/*
 * software_timer.c
 *
 *  Created on: Feb 1, 2024
 *      Author: Huy
 */
#include "software_timer.h"

int timer1_flag = 0;
int timer1_counter = 0;

void setTimer1(int duration)
{
	timer1_counter = duration/TICK;
	timer1_flag = 0;
}

void timerRun(void)
{
	if(timer1_counter > 0)
	{
		timer1_counter--;
		if(timer1_counter <= 0)
		{
			timer1_flag = 1;
		}
	}
}


