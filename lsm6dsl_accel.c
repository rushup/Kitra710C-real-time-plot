/*
 * lsm6dsl_accel.c
 *
 *  Created on: 23 gen 2018
 *      Author: marco.cossali
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#include "lsm6dsl_accel.h"
#include "search_device.h"

void get_name_lsm6dsl(int n_device){

	FILE *file;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/name", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	printf("Name sensor: %s\n", str);
	fclose(file);
}

double get_in_accel_x_raw_lsm6dsl(int n_device){

	FILE *file;
	double d = 0.0f;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/in_accel_x_raw", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

double get_in_accel_x_scale_lsm6dsl(int n_device){

	FILE *file;
	double d = 0.0f;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/in_accel_x_scale", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

double get_in_accel_y_raw_lsm6dsl(int n_device){

	FILE *file;
	double d = 0.0f;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/in_accel_y_raw", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

double get_in_accel_y_scale_lsm6dsl(int n_device){

	FILE *file;
	double d = 0.0f;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/in_accel_y_scale", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

double get_in_accel_z_raw_lsm6dsl(int n_device){

	FILE *file;
	double d = 0.0f;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/in_accel_z_raw", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

double get_in_accel_z_scale_lsm6dsl(int n_device){

	FILE *file;
	double d = 0.0f;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/in_accel_z_scale", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

int get_sampling_frequency_lsm6dsl(int n_device){

	FILE *file;
	double d = 0;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/sampling_frequency", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

void set_sampling_frequency_lsm6dsl(int n_device, int val_frequenza){

	FILE *file;
	char str[1000];
	char path[100];

	sprintf(str, "%d", val_frequenza);
	sprintf(path, "/sys/bus/iio/devices/iio:device%d/sampling_frequency", n_device);
	file = fopen(path, "w");
	fprintf(file,"%s", str);
	printf("The new frequency value is: %s\n", str);
	fclose(file);
}

void getLIST_sampling_frequency_lsm6dsl(){
	printf("Values:	0 13 26 52 104 208 416\n");
}
