/*
 * lsm303agr_magn.h
 *
 *  Created on: 23 gen 2018
 *      Author: marco.cossali
 */

#ifndef LSM303AGR_MAGN_H_
#define LSM303AGR_MAGN_H_

void get_name_lsm303agr_magn(int);

double get_in_magn_x_raw_lsm303agr_magn(int);

double get_in_magn_x_scale_lsm303agr_magn(int);

double get_in_magn_y_raw_lsm303agr_magn(int);

double get_in_magn_y_scale_lsm303agr_magn(int);

double get_in_magn_z_raw_lsm303agr_magn(int);

double get_in_magn_z_scale_lsm303agr_magn(int);

int get_sampling_frequency_lsm303agr_magn(int);

void set_sampling_frequency_lsm303agr_magn(int, int);

void getLIST_sampling_frequency_lsm303agr_magn();

#endif /* LSM303AGR_MAGN_H_ */
