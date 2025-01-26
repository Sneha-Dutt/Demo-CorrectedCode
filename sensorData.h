#ifndef SENSOR_DATA_H
#define SENSOR_DATA_H

#include <stdint.h> // For uint16_t

#define BUFFER_SIZE 20

// Reads sensor data into the provided buffer
void read_sensor_data(uint16_t *data);

// Calculates the average value of the sensor data
int calculate_average(uint16_t *data, int size);

// Prints the sensor data
void print_data(uint16_t *data, int size);

// Processes the sensor data by calculating the average and checking thresholds
void process_data(uint16_t *data);

#endif // SENSOR_DATA_H
