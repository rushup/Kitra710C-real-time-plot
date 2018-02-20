/*
 * lps22hb_temp_pres.h
 *
 *  Created on: 23 gen 2018
 *      Author: marco.cossali
 */

#ifndef LPS22HB_TEMP_PRES_H_
#define LPS22HB_TEMP_PRES_H_

void get_name_lps22hb_temp_pres(int);

double get_in_pressure_raw(int);

double get_in_pressure_scale(int);

double get_in_temp_raw(int);

double get_in_temp_scale(int);

int get_sampling_frequency_lps22hb_temp_pres(int);

void set_sampling_frequency_lps22hb_temp_pres(int, int);

void getLIST_sampling_frequency_lps22hb_temp_pres();

#endif /* LPS22HB_TEMP_PRES_H_ */
