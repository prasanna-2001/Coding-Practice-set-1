# functions ate hai bhai tux=ze fir bhi ek template dekh le
#def func_name():
#   implementation 
#   implementaion
#func_name     //calling

#doc string is used to write a info about a func eg:


def printname():
    #below written line is a doc string.
    """this function is to print the name """
    name=input("Enter the name: ")
    print(name +" Thy name is "+name)
printname()
#to print doc string
print("the doc string is : " + printname.__doc__)