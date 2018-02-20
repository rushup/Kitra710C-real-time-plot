/*
 * lsm6dsl_accel.h
 *
 *  Created on: 23 gen 2018
 *      Author: marco.cossali
 */

#ifndef LSM6DSL_ACCEL_H_
#define LSM6DSL_ACCEL_H_

void get_name_lsm6dsl(int);

double get_in_accel_x_raw_lsm6dsl(int);

double get_in_accel_x_scale_lsm6dsl(int);

double get_in_accel_y_raw_lsm6dsl(int);

double get_in_accel_y_scale_lsm6dsl(int);

double get_in_accel_z_raw_lsm6dsl(int);

double get_in_accel_z_scale_lsm6dsl(int);

int get_sampling_frequency_lsm6dsl(int);

void set_sampling_frequency_lsm6dsl(int, int);

void getLIST_sampling_frequency_lsm6dsl();

#endif /* LSM6DSL_ACCEL_H_ */
