import random

p = random.randint(10,100)
x = str(p)+"\n"
for i in range(p):
    x += str(random.randint(10,100))
    if(i!=p-1):
        x += "\n"
f = open('input000.txt','w')
f.write(x)
f.close()
