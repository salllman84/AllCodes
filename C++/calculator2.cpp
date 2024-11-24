#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <cmath>
#include <cctype>
using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to get the precedence of an operator
int getPrecedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    } else if (op == '^') {
        return 3;
    }
    return 0;
}

// Function to perform arithmetic operation
double applyOperation(double a, char op, double b) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': return pow(a, b);
        default: return 0.0;
    }
}

// Function to evaluate the expression and calculate the result
double evaluateExpression(string expression) {
    stack<double> values;
    stack<char> operators;

    for (size_t i = 0; i < expression.length(); ++i) {
        if (isspace(expression[i])) {
            continue; // Skip whitespace
        } else if (isdigit(expression[i])) {
            double num = 0;
            while (i < expression.length() && isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                ++i;
            }
            --i; // Backtrack one position
            values.push(num);
        } else if (isOperator(expression[i])) {
            char currentOperator = expression[i];
            while (!operators.empty() && getPrecedence(operators.top()) >= getPrecedence(currentOperator)) {
                double operand2 = values.top();
                values.pop();
                double operand1 = values.top();
                values.pop();
                values.push(applyOperation(operand1, operators.top(), operand2));
                operators.pop();
            }
            operators.push(currentOperator);
        } else if (expression[i] == '(') {
            operators.push(expression[i]);
        } else if (expression[i] == ')') {
            while (!operators.empty() && operators.top() != '(') {
                double operand2 = values.top();
                values.pop();
                double operand1 = values.top();
                values.pop();
                values.push(applyOperation(operand1, operators.top(), operand2));
                operators.pop();
            }
            if (!operators.empty()) {
                operators.pop(); // Remove '('
            }
        }
    }

    while (!operators.empty()) {
        double operand2 = values.top();
        values.pop();
        double operand1 = values.top();
        values.pop();
        values.push(applyOperation(operand1, operators.top(), operand2));
        operators.pop();
    }

    return values.top();
}

int main() {
    string expression;

    getline(cin, expression);

    double result = evaluateExpression(expression);
    cout << "Result: " << result << endl;

    return 0;
}
