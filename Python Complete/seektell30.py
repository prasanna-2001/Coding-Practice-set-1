# more on files

# to get the location of the file handle "f" we use the function

f = open("moronfile30.txt")
print(f.tell())
print(f.readline(), end="")
print(f.tell()) 
print(f.readline())
print(f.tell())

#  to bring the file handle/pointer at the required position we use the seek function.

f.seek(0)
print(2)
print(f.readline()) 
#AS THE FILE POINTER IS POINTING TO 0 IT WILL PRINT THE FIRST LINE
# now to point to another pposition we can again use the seek
# f.seek(17) f.seek apan starting me bhi use kar sakte hai to start reading from rwequired position 
print("after pointing the result is :")
print(f.readline())
f.close()
