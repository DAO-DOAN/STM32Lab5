/*
 * fsm.h
 *
 *  Created on: Dec 11, 2024
 *      Author: Legion 5
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

#include "main.h"
#include "string.h"
#include<stdio.h>
#include "software_timer.h"

#define MAX_BUFFER_SIZE 30

#define START 0
#define FIRST_CMD 1
#define GOT_S 2
#define GOT_T 3
#define GOT_K 4
#define SEND 5
#define HALT 6

#define SENDING 7
#define STOP_SEND 8

#define RECEIVE_CMD	0
#define ADC_SEND 1

#define START_BIT '!'
#define END_BIT '#'

extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;

extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

extern uint8_t cmd_flag;

extern int stat;
extern int comm_stat;

extern uint32_t ADC_Value;

extern uint8_t pkgSent;

void command_parser_fsm();

void uart_communication_fsm();

#endif /* INC_FSM_H_ */
