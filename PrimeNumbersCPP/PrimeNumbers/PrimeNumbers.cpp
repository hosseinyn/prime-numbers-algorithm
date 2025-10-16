#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Number : ";
    cin >> number;

    
    int bigger_than_one[8] = { 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };

    if (number == 1) {
        cout << "This number is one (not prime and not composite)";
        return 0;

    }
    else {
        for (int i : bigger_than_one) {

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

