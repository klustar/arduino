import serial
import time
from playsound import playsound

port="/dev/cu.usbmodem144101"

arduino=serial.Serial(port,9600,timeout=5)

bad_file="bad.m4a"
good_file="good.m4a"

working=True

time.sleep(5)

while True:
    try:
        msg=arduino.readline()
        force=int(msg)
        if force==0 and working:
            playsound(bad_file,True)
            working=False
        elif force>50 and not working:
            playsound(good_file,True)
            working=True
    except Exception:
        pass