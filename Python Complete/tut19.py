# write a  program to create  FAULTY CALCULATOR TO STOP CHeating 
#bhai function isliye use kiya kyauki normally ata tha fi]unction ki practice bhi ho jayegi and its better
def calculator():
    a=int(input("enter the value of a : "))
    b=int(input("enter the value of b : "))
    print("1.add")
    print("2.substract")
    print("3.multiply")
    print("4.divide")
    print("5.exponent")
    print("6.modulo")
    ch=int(input("Enter the operator :"))

    if(a==45 and b==5 and ch==3):
        print(555) 
    elif(a==56 and b==9 and ch==1):
        print(77)
    elif(a==56 and b==6 and ch==4):
        print(4)
    else:
        if(ch==1):
            print(a+b)
        elif(ch==2):
            print(a-b)
        elif(ch==3):
            print(a*b)
        elif(ch==4):
            print(a/b)
        elif(ch==5):
            print(a**b)
        elif(ch==6):
            print(a%b)
        else:
            print("enter valid operator.")
c=0
while(c==0):
    calculator()
    c=int(input("enter 0 AND PRESS ENTER if you wNT TO CONTINUE otherwise press NY KEY AND PRESS ENTER"))