import serial
import sys
import time
val = 0
time.sleep(2)
strPort = sys.argv[1]
ser=serial.Serial(strPort,9600)
while 1:
	val = input()
	
	if val=='a':
		break;
	a = int(val).to_bytes(1, byteorder="little")
	ser.write(a)
	print(a)
	line=ser.readline()
	print(line)
ser.close()