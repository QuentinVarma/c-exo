#include <iostream>
#include <string>
using namespace std;

int main() {
    string operation;
    double operande1, operande2;

    
    cout << "Entrez une opération (+, -, *, /) suivie de deux valeurs séparées par un espace ! ";
    cin >> operation >> operande1 >> operande2;

    
    if (operation == "+") {
        cout << operande1 << "+" << operande2 << " = " << operande1 + operande2 << endl;
    } else if (operation == "-") {
        cout << operande1 << "-" << operande2 << " = " << operande1 - operande2 << endl;
    } else if (operation == "*") {
        cout << operande1 << "*" << operande2 << " = " << operande1 * operande2 << endl;
    } else if (operation == "/") {
        if (operande2 != 0) {
            cout << operande1 << "/" << operande2 << " = " << operande1 / operande2 << endl;
        } else {
            cout << "Attention division par zéro" << endl;
        }
    } else {
        cout << "Erreur : opérateur inconnu " << operation << endl;
    }

    return 0;
}





