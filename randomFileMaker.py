import random  
import os.path

#Printing files for input size 10
save_path = '/mnt/c/CSCE350/CSCE350_Project/10floats'
for x in range (100):
    s = "10inputs_" + str(x + 1) + ".txt"
    completeName = os.path.join(save_path, s)
    fo = open(completeName, "w")
    for x in range (10):
        value = random.uniform(float(-100.0), float(100.0))
        fo.write(str(value) + "\n")
    fo.close()

#Printing files for input size 100
save_path = '/mnt/c/CSCE350/CSCE350_Project/100floats'
for x in range (100):
    s = "100inputs_" + str(x + 1) + ".txt"
    completeName = os.path.join(save_path, s)
    fo = open(completeName, "w")
    for x in range (100):
        value = random.uniform(float(-100.0), float(100.0))
        fo.write(str(value) + "\n")
    fo.close()

#Printing files for input size 1000
save_path = '/mnt/c/CSCE350/CSCE350_Project/1000floats'
for x in range (100):
    s = "1000inputs_" + str(x + 1) + ".txt"
    completeName = os.path.join(save_path, s)
    fo = open(completeName, "w")
    for x in range (1000):
        value = random.uniform(float(-100.0), float(100.0))
        fo.write(str(value) + "\n")
    fo.close()

#Printing files for input size 10000
save_path = '/mnt/c/CSCE350/CSCE350_Project/10000floats'
for x in range (100):
    s = "10000inputs_" + str(x + 1) + ".txt"
    completeName = os.path.join(save_path, s)
    fo = open(completeName, "w")
    for x in range (10000):
        value = random.uniform(float(-100.0), float(100.0))
        fo.write(str(value) + "\n")
    fo.close()

#Printing files for input size of 100000
save_path = '/mnt/c/CSCE350/CSCE350_Project/100000floats'
for x in range (100):
    s = "100000inputs_" + str(x + 1) + ".txt"
    completeName = os.path.join(save_path, s)
    fo = open(completeName, "w")
    for x in range (100000):
        value = random.uniform(float(-100.0), float(100.0))
        fo.write(str(value) + "\n")
    fo.close()