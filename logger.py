import serial
import time

# CHANGE THIS to your port
# Windows example: 'COM3'
# Mac/Linux example: '/dev/cu.usbmodem...'
port = 'COM3'

arduino = serial.Serial(port, 9600)
time.sleep(2)

print("Reading air quality data...\n")

while True:
    try:
        data = arduino.readline().decode().strip()

        if data:
            value, status = data.split(",")

            print(f"Air Value: {value} | Status: {status}")

            # Save to file
            with open("air_quality_log.txt", "a") as f:
                f.write(f"{value},{status}\n")

    except:
        print("Error reading data")
