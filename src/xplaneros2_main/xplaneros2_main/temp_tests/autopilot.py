import sys
import time

sys.path.insert(0, '/home/uas/Documents/blue/envs/XPlaneConnect/Python3/src')

import xpc

uas = xpc.XPlaneConnect()

drefs = []

autopilot_mode_idx = 0
drefs.append("sim/cockpit/autopilot/autopilot_mode")

heading_idx = 1
drefs.append("sim/cockpit/autopilot/heading")

airspeed_idx = 2
drefs.append("sim/cockpit/autopilot/airspeed")

vertical_velocity_idx = 3
drefs.append("sim/cockpit/autopilot/vertical_velocity")

altitude_idx = 4
drefs.append("sim/cockpit/autopilot/altitude")

autopilot_state_idx = 5
drefs.append("sim/cockpit/autopilot/autopilot_state")

data = uas.getDREFs(drefs)

print(data[autopilot_mode_idx][0])

#data[autopilot_mode_idx][0] = 1

#print(data)

autopilot_mode = data[autopilot_mode_idx][0]

#uas.sendDREFs(drefs, [1.0, 360, 250, 1400, 15000])

data = uas.getDREFs(drefs)

print(data[autopilot_mode_idx][0])

print(data)