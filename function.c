/*
 * start_buffer.c
 *
 *  Created on: 26 gen 2018
 *      Author: marco.cossali
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdint.h>
#include <pthread.h>
#include "search_device.h"
#include "function.h"

// Calculate the frequency of acquisition
int calc_freq(int n_device){

	FILE *file;
	char path[100];
	char str[100];
	double d = 0.0f;

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/sampling_frequency", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

// Set the length passed like parametr of buffer
void set_buffer_length(int n_device, int length){

	FILE *file;
	char path[100];
	char str[100];

	sprintf(str, "%d", length);
	sprintf(path, "/sys/bus/iio/devices/iio:device%d/buffer/length", n_device);
	file = fopen(path, "w");
	fprintf(file, "%s", str);
	fclose(file);
}

// Set the watermark passed like parametr of buffer
void set_buffer_watermark(int n_device, int watermark){

	FILE *file;
	char path[100];
	char str[100];

	sprintf(str, "%d", watermark);
	sprintf(path, "/sys/bus/iio/devices/iio:device%d/buffer/watermark", n_device);
	file = fopen(path, "w");
	fprintf(file,"%s", str);
	fclose(file);
}

// Set enable passed like parametr of buffer to 1 or 0
void set_buffer_enable(int n_device, int enable){

	FILE *file;
	char path[100];
	char str[100];

	if(enable == 0 || enable == 1){
		sprintf(str, "%d", enable);
		sprintf(path, "/sys/bus/iio/devices/iio:device%d/buffer/enable", n_device);
		file = fopen(path, "w");
		fprintf(file,"%s", str);
		fclose(file);
	}
	else
		printf("Insert 1 or 0");
}

// Get length of buffer
int get_buffer_enable(int n_device){

	FILE *file;
	double d = 0;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/buffer/enable", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}
