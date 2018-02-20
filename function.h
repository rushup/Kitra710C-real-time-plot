/*
 * start_buffer.h
 *
 *  Created on: 26 gen 2018
 *      Author: marco.cossali
 */

#ifndef FUNCTION_H_
#define FUNCTION_H_


int calc_freq(int);

void set_buffer_length(int, int);

void set_buffer_watermark(int, int);

void set_buffer_enable(int, int);

int get_buffer_enable(int);

#endif /* FUNCTION_H_ */
