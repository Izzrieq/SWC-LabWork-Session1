#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0; 

    cout << "Enter a positive number: " << endl;
    cin >> num;

    while (num < 0) {
        cout << "Please enter a positive number: ";
        cin >> num;
    }

    while (num > 0) {
        sum += num % 10;  
        num /= 10;        
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}
