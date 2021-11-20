# include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enterez le type de operation ! : +, -, *, /: ";
    cin >> op;

    cout << "Entrez Les deux nombres :3 : ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            cout << "Ton operation est fausse ! ";
            break;
    }

    return 0;
}
