import random
import time



maatsoort = 5


random = [ random.randint (1, 10) for _ in range(maatsoort)]
sequence = []
kanslijst = [10, 2, 5, 10, 2]
print(random)

listgenerator = True

def listgenerator (selected_index,kanslijst,append):
    position = 0
    x = position
    for i in range(0, maatsoort):
        if positon == selected_index:
            lijstgenerator = False
        else:
            if lijst[i] >= random[i]:
                append.append(i)
                position += 1
            else:
                pass

def printlist():
    print(sequence)


generateList(kanslijst, sequence, maatsoort)
