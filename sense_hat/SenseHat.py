import random
import time
import math


def sense_hat():
    t = random.uniform(10, 25)
    p = random.uniform(1000, 1020)
    h = random.randint(10, 20)
    a = random.uniform(-5, 5)
    time.sleep(random.uniform(0.04, 0.1))
    return t, p, h, a


for x in range(100, -100):
    s = math.sin(x/100)
    print(s)
