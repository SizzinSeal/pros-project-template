#include "main.h"

/**
 * Runs at the start of the program.
 *
 * Sensor calibration should be performed in this function. Expect up to 4 seconds delay if
 * calibrating the V5 Inertial Sensor.
 *
 * Stops only when the code has finished executing, regardless of whether the robot is disabled, in
 * the driver control period, or the autonomous control period.
 */
void initialize() {}

/**
 * Runs while the robot is disabled.
 *
 * Stops immediately when the driver control period or autonomous control period starts.
 */
void disabled() {}

/**
 * Runs during the autonomous control period.
 *
 * Stops immediately when the robot is disabled.
 */
void autonomous() {}

/**
 * Runs during driver control control period.
 *
 * Stops immediately when the robot is disabled.
 */
void opcontrol() {}