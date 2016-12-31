# Intro
This firmware information is specified to work with the OpenXC Platform. For more information on how to set up prerequisites, go to: http://vi-firmware.openxcplatform.com/en/latest/getting-started/getting-started.html

### OpenXC Vehicle Interfaces: https://shop.openxcplatform.com

# Diagnostic Firmware
The purpose of these configurations is to collect standard diagnostic messages only. Note: messages that you receive will vary by vehicle (for example, 'ethanol_fuel_percentage' worked on a flex-fuel Zipcar Ford Focus I tested out, but did not show up on any standard gasoline-only vehicles I have tested). 

## Diagnostic-Minimal-Signals.json
This file minimizes the number and frequency of signals in order to keep keep data useage low if sending the data with a C5 Cellular device or cellular mobile device data if streaming the data to a remote web server using the OpenXC Enabler app. The other benefit is this approach reduces computational power needed, which becomes important if collecting data from multiple vehicles over an extended period of time. 

## Full-Signals.json
This file tests for all possible diagnostic signals. COMING SOON. 

## Resources
For more information on standard diagnostic OBD specification, go to: https://en.wikipedia.org/wiki/OBD-II_PIDs
Note: to obtain the integer PID, run (for example) "int("0x51", 0)" in Python. Or, to convert from int to hex, run (for example) "hex(2025)"

# CAN Messages Firmware
COMING SOON
