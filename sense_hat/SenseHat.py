import random
import time
import math
from sense_hat import SenseHat as sense


sense.set_imu_config(True, True, True)


def sensors():
    humidity = sense.get_humidity()  # print("Humidity: %s %%rH" % humidity)
    temp = sense.get_temperature()  # print("Temperature: %s C" % temp)
    pressure = sense.get_pressure()  # print("Pressure: %s Millibars" % pressure)
    orientation = sense.get_orientation_degrees()  # print("p: {pitch}, r: {roll}, y: {yaw}".format(**orientation))
    orientation_rad = sense.get_orientation_radians()  # print("p: {pitch}, r: {roll}, y: {yaw}".format(
    # **orientation_rad))
    north = sense.get_compass()  # print("North: %s" % north)
    gyro_only = sense.get_gyroscope()  # print("p: {pitch}, r: {roll}, y: {yaw}".format(**gyro_only))
    accel_only = sense.get_accelerometer()  # print("p: {pitch}, r: {roll}, y: {yaw}".format(**accel_only))
    return humidity, temp, pressure, orientation, north, gyro_only, accel_only


