#its similar to java exception handling
try:
    num1 = input("enter the first numbre: ")
    num2 = input("enterthe second number: ")
    print("the si=um of the numbers are :",
    int(num1)+int(num2))
except Exception as e :
    print(e)

print("thiis is very important line")