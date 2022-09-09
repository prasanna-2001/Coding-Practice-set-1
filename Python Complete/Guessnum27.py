#guessing game guess and wins
n=int(input("enter the lucky number ...lets see your friend can guess it or not: "))
print("\n")
# for kids
# print("Your number is between ",n-10,"and",n+10)
ch=1
while(ch<=6):
    num=int(input("guess the number:"))
    if(num==n):
        print("yeaah!!! you have won the game in", ch, "guesses")
        break
    elif(num>n):
        print("You have chosen a bigger number chose a smaller number")
        print("you have :",6-ch, "guesses left")
    elif(num<n):
        print("You have chosen a smallerr number chose a big number")
        print("you have :", 6-ch,"guesses left")
    ch=ch+1
if(ch>6):
    print("oops!!! you lost the game as your chances are over")
else:
    print("You are a fabulous player")
    
    

        
