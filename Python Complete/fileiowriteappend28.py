# it over write the content of exxiting file and if the file is not present then it creates a new ile and write in it
f = open("filebasic28.txt","w")
f.write(" 1. Prasanna is a goodboy  !!!!!!!!!!!! \n")
f.close()

# to wite a new content after the original content  without removing the original or past content of the file we use the append mode "a"
f = open("filebasic28.txt","a")
a=f.write("2. The new textt is appended..\n")
b=f.write("2. The new textt is appended..\n")

# jitni bar tu commend daleg utni baar program run hoga....
# if you wNT TO FIND THE NUMBER OF CONTENTS WRITTEN BY YOU THEN assign the value of writt stmt and print that variable kyuki f.write number of char return kaer sakta
print(a+b)
f.close()

# to open the file in both read and write both modeuse the  r+ mode
f = open("filebasic28.txt","r+")
print(f.read())
f.write("3.this text is the appended text in both read and write mode")
f.close()