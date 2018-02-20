/*
 * lps22hb_temp_pres.c
 *
 *  Created on: 23 gen 2018
 *      Author: marco.cossali
 */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

#include "lps22hb_temp_pres.h"
#include "search_device.h"

void get_name_lps22hb_temp_pres(int n_device){

	FILE *file;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/name", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	printf("Name sensor: %s\n", str);
	fclose(file);
}

double get_in_pressure_raw(int n_device){

	FILE *file;
	double d = 0.0f;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/in_pressure_raw", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

double get_in_pressure_scale(int n_device){

	FILE *file;
	double d = 0.0f;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/in_pressure_scale", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

double get_in_temp_raw(int n_device){

	FILE *file;
	double d = 0.0f;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/in_temp_raw", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

double get_in_temp_scale(int n_device){

	FILE *file;
	double d = 0.0f;
	char str[1000];
	char path[100];

	sprintf(path, "/sys/bus/iio/devices/iio:device%d/in_temp_scale", n_device);
	file = fopen(path, "r");
	fscanf(file, "%[^\n]", str);
	sscanf(str, "%lf", &d);
	fclose(file);
	return d;
}

int get_sampling_frequency_lps22hb_temp_pres(int n_device){

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

void set_sampling_frequency_lps22hb_temp_pres(int n_device, int val_frequenza){

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

void getLIST_sampling_frequency_lps22hb_temp_pres(){
	printf("Values: 1 10 25 50 75\n");
}
