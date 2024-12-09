#include <iostream>
#include <string>
using namespace std;

int main() {
    char operation; 
    double operande1, operande2;

    
    cout << "Entrez une opération (+, -, *, /) suivie de deux valeurs séparées par un espace ! ";
    cin >> operation >> operande1 >> operande2;

    
    switch (operation) {
        case '+':
            cout << operande1 << " + " << operande2 << " = " << operande1 + operande2 << endl;
            break;
        case '-':
            cout << operande1 << " - " << operande2 << " = " << operande1 - operande2 << endl;
            break;
        case '*':
            cout << operande1 << " * " << operande2 << " = " << operande1 * operande2 << endl;
            break;
        case '/':
            if (operande2 != 0) {
                cout << operande1 << " / " << operande2 << " = " << operande1 / operande2 << endl;
            } else {
                cout << "Attention division par zéro" << endl;
            }
            break;
        default:
            cout << "Erreur : opérateur inconnu " << operation << endl;
    }

    return 0;
}
