
import serial
import time

sensor = MQ135()


ser = serial.Serial('COM3', 9600)
while True:

  air_quality = sensor.read_ppm()

  
  print("Air quality level: " + str(air_quality))

  
  ser.write(str(air_quality) + "\n")


  time.sleep(5)
