cmake_minimum_required(VERSION 3.5.1 FATAL_ERROR)
project (real_time_plot)


set(real_time_plot_source_file
	real_time_plot.c
	function.c
	function.h
	search_device.c
	search_device.h
	lsm6dsl_accel.c
	lsm6dsl_accel.h
	lps22hb_temp_pres.c
	lps22hb_temp_pres.h
	lsm303agr_accel.c
	lsm303agr_accel.h
	lsm303agr_magn.c
	lsm303agr_magn.h
	lsm6dsl_gyro.c
	lsm6dsl_gyro.h
	v15310_prox.c
	v15310_prox.h
)
add_executable(real_time_plot ${real_time_plot_source_file})

target_link_libraries(real_time_plot pthread)