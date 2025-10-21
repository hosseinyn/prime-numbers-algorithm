#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number;
    cout << "Number : ";
    cin >> number;

   

    if (number == 1) {
        cout << "This number is one (not prime and not composite)";
        return 0;

    }
    else {
        for (int i = 2; i <= (int)sqrt(number); i++) {

            int operation = number % i;

            if (i != number && operation == 0) {
                cout << "this number is a composite number";
                return 0;
            }
        }
    }



    cout << "this number is a prime number";



    return 0;

}

