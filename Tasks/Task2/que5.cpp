#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Check if a number is even or odd." << endl;
    cout << "2. Check if a number is prime or not." << endl;
    cout << "3. Calculate the factorial of a number." << endl;
    cout << "4. Exit the program" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            cout << (n % 2 == 0 ? "The number is even." : "The number is odd.") << endl;
            break;
        }
        case 2: {
            int k;
            cout << "Enter a number: ";
            cin >> k;
            if (k <= 1) {
                cout << "The number is not Prime number." << endl;
            } else {
                bool isPrime = true;
                for (int i = 2; i * i <= k; ++i) { 
                    if (k % i == 0) {
                        isPrime = false;
                        break;
                    }
                }
                cout << (isPrime ? "The number is Prime number." : "The number is not Prime number.") << endl;
            }
            break;
        }
        case 3: {
            int j;
            cout << "Enter a number: ";
            cin >> j;
            if (j < 0) {
                cout << "Factorial is not defined for negative numbers." << endl;
            } else {
                unsigned long long fact = 1; // Use unsigned long long for larger factorials
                for (int i = 1; i <= j; ++i) {
                    fact *= i;
                }
                cout << "Factorial of " << j << " is " << fact << endl;
            }
            break;
        }
        case 4:
            cout << "Exiting the program" << endl;
            return 0;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}