# file io basic

""" 
"r"-open file for reading (its a default mode)
"w"-open file for writing
"x"-(exclusive creation)create file if not present ,, fails if the file already exist
"a"-append data in file
"t"-- text mode to open (its a default mode)
"b"- binary mode
"+" -plus mode to open filr to update it to open in both read and write mode
"""

#to open file in read mode f is a file pointer/handle not d=same as pointer s in c 
f = open("filebasic2526.txt")
content = f.read()
print(content)
#file has to bbe closed
f.close()

#to open file in binary read mode f is a file pointer 
f = open("filebasic2526.txt","rb")
content = f.read()
print("1",content)
#file has to bbe closed
f.close()


#to open file in text  read mode which is default as in fie]rst step f is a file pointer 
f = open("filebasic2526.txt","rt")
content = f.read()
print("2",content)
#file has to bbe closed
f.close()


# to read specific number(3) of characters in a file 
# it also read the empty spaces as char
f = open("filebasic2526.txt","rt")
print("4")
content = f.read(3)
print(content)
#to read age ke x no of character
content=f.read(8)
print(content)
f.close()

# to print char by char
# f = open("filebasic2526.txt","rt")
# print("5 .")
# content = f.read()
# for char in content:
#     print(char)
# f.close()

# to print as it is
f = open("filebasic2526.txt","rt")
print("6 .")
# content = f.read()
# use the file pointer
for char in f: 
    print(char, end="")  
    # add end="" to remove extra |n in the end of tehe sentence
f.close()

# to read single line from ythe file use
# print(f.readline())#after opening the file 
# to print all lines as a list we write
print("\n")
f = open("filebasic2526.txt","rt")
print("7. ", f.readlines())
f.close()
