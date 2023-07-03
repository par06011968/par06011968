
import serial
import time

NUM_SLOTS = 10

ser = serial.Serial('COM3', 9600)

parking_slots = [False] * NUM_SLOTS


def is_occupied(slot_number):
  return parking_slots[slot_number]


def update_slot_status(slot_number, occupied):
  parking_slots[slot_number] = occupied
  ser.write(str(slot_number) + "," + str(occupied) + "\n")


while True:
  
  for slot_number in range(NUM_SLOTS):
    if is_occupied(slot_number):
      print("Slot " + str(slot_number) + " is occupied")
    else:
      print("Slot " + str(slot_number) + " is available")

 
  time.sleep(5)
