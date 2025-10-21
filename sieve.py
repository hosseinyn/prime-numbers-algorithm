from math import sqrt

number = input("Numbers (with ,) : ")

numbers = number.split(",")
multi = 2
can_continue = True

def check_prime_number(number) : 

    for i in range(2 , int(sqrt(number)) + 1):
        operation = number % i

        if operation == 0 :
            return False

    return True

if "1" in numbers:
    numbers.remove("1")

while can_continue:

    for i in numbers : 
        operation = int(i) % multi
        if operation == 0 and int(i) != multi:
            numbers.remove(i)
            continue

    
    multi_test = multi + 1
    while not check_prime_number(multi_test) :
        multi_test = multi_test + 1

    if str((multi_test * multi_test)) in numbers :
        multi = multi_test
    else :
        can_continue = False


print(f"Finish. Prime numbers : {numbers}")