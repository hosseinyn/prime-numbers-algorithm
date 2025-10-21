#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {

    int number;
    cout << "Number : ";
    cin >> number;


    vector<int> numbers;

    for (int i = 2; i <= (int)sqrt(number); i++ ) {
        int check = number % i;

        if (check != 0) {
            continue;
        }
        else if (check == 0 && number != i) {
            if (find(numbers.begin(), numbers.end(), number / i) == numbers.end()) {
                numbers.push_back(number / i);
            }

            for (int j : numbers) {

                int check = j % i;

                if (check == 0 && (j / i) != 1) {

                    if ((find(numbers.begin(), numbers.end(), j / i) == numbers.end())) {

                         numbers.push_back(j / i);

                     }

                     else {

                        break;

                     }


                    }
            }
        }
    }

    string divisors = "[ ";

    for (int number : numbers) {
        divisors = divisors + to_string(number) + " ";

    }

    divisors = divisors + "]";

    if (!numbers.empty()) {
        string result = "Divisors : 1," + divisors + "," + to_string(number);
        cout << result << endl;
    }
    else {
        cout << "Divisors : 1 , " << to_string(number);
    }



    return 0;

}