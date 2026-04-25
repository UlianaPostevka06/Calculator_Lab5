#include <iostream>
using namespace std;

class Calculator {
public:
    // Методи, які реалізує Postevka
    double add(double a, double b) {
        return a + b;
    }
    double multiply(double a, double b) {
        return a * b;
    }

    double subtract(double a, double b) {
        return a - b;
    }
    double divide(double a, double b) {
        if (b != 0) return a / b;
        return 0;
    }
};

int main() {
    Calculator calc;
    double a = 10, b = 5;

    cout << "Calculator Project Initialized" << endl;

    cout << "--- Tests Postevka ---" << endl;
    cout << "Addition: " << a << " + " << b << " = " << calc.add(a, b) << endl;
    cout << "Multiplication: " << a << " * " << b << " = " << calc.multiply(a, b) << endl;
    cout << "The example of Ulyana" << endl;

    cout << "--- Tests Bodnar ---" << endl;
    cout << "Subtraction: " << a << " - " << b << " = " << calc.subtract(a, b) << endl;
    cout << "Division: " << a << " / " << b << " = " << calc.divide(a, b) << endl;

    return 0;
}

