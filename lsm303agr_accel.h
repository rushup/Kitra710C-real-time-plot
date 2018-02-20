/*
 * lsm303agr_accel.h
 *
 *  Created on: 23 gen 2018
 *      Author: marco.cossali
 */

#ifndef LSM303AGR_ACCEL_H_
#define LSM303AGR_ACCEL_H_

void get_name_lsm303agr(int);

double get_in_accel_x_raw_lsm303agr(int);

double get_in_accel_x_scale_lsm303agr(int);

double get_in_accel_y_raw_lsm303agr(int);

double get_in_accel_y_scale_lsm303agr(int);

double get_in_accel_z_raw_lsm303agr(int);

double get_in_accel_z_scale_lsm303agr(int);

int get_sampling_frequency_lsm303agr(int);

void set_sampling_frequency_lsm303agr(int, int);

void getLIST_sampling_frequency_lsm303agr();

#endif /* LSM303AGR_ACCEL_H_ */
