#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    int number;
    cout << "Number : ";
    cin >> number;


    int bigger_than_one[8] = { 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
    vector<int> numbers;

    for (int i : bigger_than_one) {
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