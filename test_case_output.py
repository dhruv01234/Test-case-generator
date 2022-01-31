inputfile_name = ""
outputfilename = ""
# write the name of files above
f = open(inputfile_name, 'r')
x = int(f.readline())
arr = []
for i in range(x):
    arr.append(int(f.readline()))

def search(n,li):
    a = [0]*(n-1)
    a[n-2] = li[n-1]
    for i in range(n-3,-1,-1):
        a[i] = a[i+1]|li[i+1]
    b = [0]*(n-1)
    for i in range(n-1):
        b[i] = a[i]^li[i]
    ans = b[0]
    for i in range(1,n-1):
        ans |= b[i]
    return ans
   

   

# logic
count = search(x, arr)

# store output in count variable and in string format

f.close()
f = open(outputfilename, 'w')
f.write(str(count))
f.close()
