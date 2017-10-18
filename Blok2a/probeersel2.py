from random import *

maatsoort = 5


kick = [10, 2, 7, 3, 3]
clap = [10, 2, 7, 3, 3]
hat = [10, 2, 7, 3, 3]


list1 = []
list2 = []
list3 = []

def genereer():
    for x in range (maatsoort):
        print (x)

        if kick[x] >= randint(10):
            list1.append(x)
        if clap[x] >= randint(10):
            list2.append(x)
        if hat[x] >= randint(10):
            list3.append(x)
