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

    // Методи, які реалізує нBodnar
    double subtract(double a, double b) {
        return 0; 
    }
    double divide(double a, double b) {
        return 0; 
    }
};

int main() {
    Calculator calc;
    double a = 10, b = 5;

    cout << "Test Postevka" << endl;
    cout << "Addition: " << a << " + " << b << " = " << calc.add(a, b) << endl;
    cout << "Multiplication: " << a << " * " << b << " = " << calc.multiply(a, b) << endl;
    cout << "The example of Ulyana" << endl;

}
