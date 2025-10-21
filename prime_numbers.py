from math import sqrt

number = int(input("Number : "))


if number == 1 :
    print("This number is one (not prime and not composite)")
    exit()

elif number == 0:
    print("This number is zero")
    exit()
    
else :

    for i in range(2 , int(sqrt(number)) + 1):
        operation = number % i

        if operation == 0 :
            print("this number is a composite number")
            exit()

print("this number is a prime number")
