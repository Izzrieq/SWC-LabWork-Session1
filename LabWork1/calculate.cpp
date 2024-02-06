#include <iostream>
using namespace std;

int main() {
    int numCount;
    int sum = 0;

    cout << "Enter the number of positive numbers you want to input: ";
    cin >> numCount;

    while (numCount <= 0) {
        cout << "Please enter a valid number (greater than 0): ";
        cin >> numCount;
    }

    for (int i = 0; i < numCount; ++i) {
        int currentNum;
        
        cout << "Enter positive number " << i + 1 << ": ";
        cin >> currentNum;

        while (currentNum < 0) {
            cout << "Please enter a positive number: ";
            cin >> currentNum;
        }

        // Calculate the sum of digits
        while (currentNum > 0) {
            sum += currentNum % 10;
            currentNum /= 10;
        }
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
