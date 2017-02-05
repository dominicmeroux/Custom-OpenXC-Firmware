# First Cut

Goal will be to have firmware that produces all possible standard diagnostic OBD signals, each at low frequency (with a couple of exceptions).

The current iteration specifies each message to report at 0.2HZ. 

All defaults in building the firmware files were accepted, with the exception that the C5 BT was compiled with MSD_ENABLE=1 to take advantage of the SD card storage capability.

Firmware was configured for the Ford Reference VI, C5 BT, and C5 BLE. The C5 Cell configuration can be added, but would require a matching endpoint custom to the user of this firmware.

A real-world use of this firmware would be to simply extract the signals you want to use and compile that configuration with frequencies you desire. For example, if you are working with a fleet of diesel vehicles and are concerned with the EGR-related signals, you can take those from the JSON configuration file.

