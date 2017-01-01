#include "data_emulator.h"
#include "can/canread.h"
#include "util/log.h"
#include "util/timer.h"
#include "signals.h"
#include <stdlib.h>

#define MAX_EMULATED_MESSAGES 1000
#define NUMERICAL_SIGNAL_COUNT 10 // original 11
#define BOOLEAN_SIGNAL_COUNT 3 // original 5
#define STATE_SIGNAL_COUNT 1 // original 2
#define EVENT_SIGNAL_COUNT 1
#define EMULATOR_SEND_FREQUENCY 50 // original 500

using openxc::can::read::publishNumericalMessage;
using openxc::can::read::publishBooleanMessage;
using openxc::can::read::publishStringMessage;
using openxc::pipeline::Pipeline;
/*
// TEST INFOCYCLE VALUES; D - VARIABLE indicates variable has been added

/////// CHANGE NUMERICAL_SIGNAL_COUNT, BOOLEAN_SIGNAL_COUNT, ETC. 
/////// ABOVE TO MATCH THE NUMBER OF MESSAGES
/////// ALSO CHANGE FREQUENCY

// Variables from InfoCycle project, obtained from image of 
// InfoCycle output posted by Ford
// https://media.ford.com/content/fordmedia/fna/us/en/news/2015/01/06/mobility-experiment-info-cycle-palo-alto-california.html

Android Speed
D - Handlebar Position (degrees)
D - AccelerationX (m/s2)
D - AccelerationY (m/s2)
D - AccelerationZ (m/s2)
D - Pedal Speed (r/m)
Pedal Count
D - Ambient Light (%)
D - Temperature (deg C)
Pressure (BMP)
Altitude (m)
D - Humidity (%)
Ultraviolet
Roll (deg)
Pitch (deg)
Yaw (deg)
D - Speed (m/h)
D - Wheel Speed (r/m)
*/
static const char* NUMERICAL_SIGNALS[NUMERICAL_SIGNAL_COUNT] = {
    "handlebar_position",
    "speed",
    "pedal_speed",
    "wheel_speed",
    "accelerationX",
    "accelerationY",
    "accelerationZ",
    "ambient_light",
    "temperature",
    "humidity",
};

static const char* BOOLEAN_SIGNALS[BOOLEAN_SIGNAL_COUNT] = {
    "brake_status",
    "front_light_status",
    "back_light_status",
};

static const char* STATE_SIGNALS[STATE_SIGNAL_COUNT] = {
    "gear_position",
    //"ignition_status",
};

static const char* EMULATED_SIGNAL_STATES[STATE_SIGNAL_COUNT][3] = {
    { "first", "second", "third" },
    //{ "off", "run", "accessory" },
};
/* ORIGINAL 
static const char* NUMERICAL_SIGNALS[NUMERICAL_SIGNAL_COUNT] = {
    "steering_wheel_angle",
    "torque_at_transmission",
    "engine_speed",
    "vehicle_speed",
    "accelerator_pedal_position",
    "odometer",
    "fine_odometer_since_restart",
    "latitude",
    "longitude",
    "fuel_level",
    "fuel_consumed_since_restart",
};

static const char* BOOLEAN_SIGNALS[BOOLEAN_SIGNAL_COUNT] = {
    "parking_brake_status",
    "brake_pedal_status",
    "headlamp_status",
    "high_beam_status",
    "windshield_wiper_status",
};

static const char* STATE_SIGNALS[STATE_SIGNAL_COUNT] = {
    "transmission_gear_position",
    "ignition_status",
};

static const char* EMULATED_SIGNAL_STATES[STATE_SIGNAL_COUNT][3] = {
    { "neutral", "first", "second" },
    { "off", "run", "accessory" },
};
*/

static int messageCount = 0;
static bool unlimitedEmulatedMessages = true;

void openxc::emulator::restart() {
    messageCount = 0;
}

void openxc::emulator::generateFakeMeasurements(Pipeline* pipeline) {
    static int emulatorRateLimiter = 0;
    if(unlimitedEmulatedMessages || messageCount < MAX_EMULATED_MESSAGES) {
        ++emulatorRateLimiter;
        ++messageCount;
        if(emulatorRateLimiter == EMULATOR_SEND_FREQUENCY / 2) {
            publishNumericalMessage(
                    NUMERICAL_SIGNALS[rand() % NUMERICAL_SIGNAL_COUNT],
                    rand() % 50 + rand() % 100 * .1, pipeline);
            publishBooleanMessage(BOOLEAN_SIGNALS[rand() % BOOLEAN_SIGNAL_COUNT],
                    rand() % 2 == 1 ? true : false, pipeline);
        } else if(emulatorRateLimiter == EMULATOR_SEND_FREQUENCY) {
            emulatorRateLimiter = 0;

            int stateSignalIndex = rand() % STATE_SIGNAL_COUNT;
            publishStringMessage(STATE_SIGNALS[stateSignalIndex],
                    EMULATED_SIGNAL_STATES[stateSignalIndex][rand() % 3], pipeline);
        }
    }
}
