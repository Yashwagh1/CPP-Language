#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
protected:
    double a;

public:
    void setInput() {
        cout << "Enter a number: ";
        cin >> a;
    }
};

class ScientificCalculator : public Calculator {
protected:
    double result;

public:
    void performOperation(int choice) {
        switch (choice) {
            case 1: {
                double b;
                cout << "Enter the power: ";
                cin >> b;
                result = pow(a, b);
                cout << "The result of " << a << " raised to the power of " << b << " is: " << result << endl;
                break;
            }
            case 2:
                if (a >= 0) {
                    result = sqrt(a);
                    cout << "The square root of " << a << " is: " << result << endl;
                } else {
                    cout << "Cannot compute the square root of a negative number!" << endl;
                }
                break;
            case 3:
                if (a > 0) {
                    result = log(a);
                    cout << "The natural logarithm of " << a << " is: " << result << endl;
                } else {
                    cout << "Logarithm of non-positive numbers is not defined!" << endl;
                }
                break;
            case 4:
                result = exp(a);
                cout << "The exponential of " << a << " is: " << result << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }
};

int main() {
    ScientificCalculator sciCalc;
    int choice;

    sciCalc.setInput();
    
    cout << "\nScientific Calculator Menu:\n1. Power\n2. Square Root\n3. Logarithm\n4. Exponential\n";
    cin >> choice;
    
    sciCalc.performOperation(choice);

    return 0;
}
