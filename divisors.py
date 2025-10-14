number = int(input("Number : "))

if number == 1:
    print("1x1")
    exit()

greater_than_one = [2 , 3 , 4 , 5 , 6 , 7 , 8 , 9]
numbers = []

for i in greater_than_one:
    check = number % i
    if check != 0:
        continue
    elif check == 0 and number != i :
        if (number / i) not in numbers:
            numbers.append(number / i)
            
        for j in numbers :
            check = j % i
            if check == 0 and (j / i) != 1 :
                if (j / i) not in numbers:
                    numbers.append(j / i)
            else :
                break

if numbers != []:
    print(f"Divisors : 1,{numbers},{number}")
else :
    print(f"Divisors : 1 , {number}")
