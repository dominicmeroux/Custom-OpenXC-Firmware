# Intro
This firmware information is specified to work with the OpenXC Platform. For more information on how to set up prerequisites, go to: http://vi-firmware.openxcplatform.com/en/latest/getting-started/getting-started.html

### OpenXC Vehicle Interfaces: https://shop.openxcplatform.com

# Diagnostic Firmware
The purpose of these configurations is to collect standard diagnostic messages only. Note: messages that you receive will vary by vehicle. For example, 'ethanol_fuel_percentage' worked on a flex-fuel Zipcar Ford Focus I tested, and 'hybrid_battery_pack_remaining_life' worked on a BMW i3 extended-range electric car, but neither of these showed up on any standard gasoline-only (non-hybrid) vehicles I have tested. 

A couple of examples of slightly-modified variants of the most updated firmware that were tested on specific vehicles are included in labeled folders, as well as sample JSON output from these vehicles.

## Diagnostic-Minimal-Signals.json
This file minimizes the number and frequency of signals in order to keep keep data useage low if sending the data with a C5 Cellular device or cellular mobile device data if streaming the data to a remote web server using the OpenXC Enabler app. The other benefit is this approach reduces computational power needed, which becomes important if collecting data from multiple vehicles over an extended period of time. 

## Diagnostic-Full-Signals.json
This file tests for all possible diagnostic signals. COMING SOON. 

## Resources
For more information on standard diagnostic OBD specification, go to: https://en.wikipedia.org/wiki/OBD-II_PIDs
Note: to obtain the integer PID, run (for example) "int("0x51", 0)" in Python. Or, to convert from int to hex, run (for example) "hex(2025)"

# CAN Messages Firmware
COMING SOON

# Bicycle Data Emulator
Use the modified data_emulator.cpp file in place of the file with the same name in the vi-firmware directory (once you have your environment set up). 

The purpose of this file is to use the existing OpenXC vehicle interfaces in emulator mode to send signals that would be sent from a bicycle data logger. Most of the data points are based on the screenshot of data from the InfoCycle project. This screenshot is found at: https://media.ford.com/content/fordmedia/fna/us/en/news/2015/01/06/mobility-experiment-info-cycle-palo-alto-california.html

