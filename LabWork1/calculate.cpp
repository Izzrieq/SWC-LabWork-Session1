#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int sum = 0;

    cout << "Enter the first positive number: " << endl;
    cin >> num1;

    while (num1 < 0) {
        cout << "Please enter a positive number: ";
        cin >> num1;
    }

    cout << "Enter the second positive number: " << endl;
    cin >> num2;

    while (num2 < 0) {
        cout << "Please enter a positive number: ";
        cin >> num2;
    }

    int numbers[] = {num1, num2};

    for (int i = 0; i < 2; ++i) {
        int currentNum = numbers[i];

        while (currentNum > 0) {
            sum += currentNum % 10;
            currentNum /= 10;
        }
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
