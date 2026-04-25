#include <iostream>
using namespace std;

class Calculator {
public:
    // Методи, які реалізує Postevka
    double add(double a, double b) {
        return 0; 
    }
    double multiply(double a, double b) {
        return 0; 
    }
    // Методи, які реалізує нBodnar
    double subtract(double a, double b) {
        return a - b;
    }
    double divide(double a, double b) {
        if (b != 0) return a / b;
        return 0;
    }
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    cout << "Calculator Project Initialized" << endl;
    cout << " Тести Bodnar " << endl;
    cout << "Subtraction: " << a << " - " << b << " = " << calc.subtract(a, b) << endl;
    cout << "Division: " << a << " / " << b << " = " << calc.divide(a, b) << endl;
    return 0;
}
