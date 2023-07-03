
import serial
import time


sensor = BPSensor()

sensor = SugarLevelSensor()


sensor = HeartbeatSensor()

ser = serial.Serial('COM3', 9600)

while True:
  
  blood_pressure = sensor.read_blood_pressure()

 
  sugar_level = sensor.read_sugar_level()

 
  heartbeat_rate = sensor.read_heartbeat_rate()

 
  print("Blood pressure: " + str(blood_pressure))
  print("Sugar level: " + str(sugar_level))
  print("Heartbeat rate: " + str(heartbeat_rate))

  
  ser.write(str(blood_pressure) + "," + str(sugar_level) + "," + str(heartbeat_rate) + "\n")


  time.sleep(5)
