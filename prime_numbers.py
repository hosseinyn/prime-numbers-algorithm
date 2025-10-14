number = int(input("Number : "))

bigger_than_one = [2 , 3 , 4 , 5 , 6 , 7 , 8 , 9]


if number == 1 :
    print("This number is one (not prime and not composite)")
    exit()
    
else :

    for i in bigger_than_one:
        operation = number % i

        if number != i and operation == 0 :
            print("this number is a composite number")
            exit()

print("this number is a prime number")
