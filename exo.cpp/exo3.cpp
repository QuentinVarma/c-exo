#include <iostream>
#include <string>

int main() {
    std::string operation;
    double operande1, operande2;

    // Demander à l'utilisateur d'entrer une opération arithmétique suivie de deux opérandes
    std::cout << "Entrez une opération (+, -, *, /) suivie de deux valeurs séparées par un espace ! ";
    std::cin >> operation >> operande1 >> operande2;

    // Utiliser une série d'instructions if pour déterminer l'opération demandée par l'utilisateur
    if (operation == "+") {
        std::cout << operande1 << "+" << operande2 << " = " << operande1 + operande2 << std::endl;
    } else if (operation == "-") {
        std::cout << operande1 << "-" << operande2 << " = " << operande1 - operande2 << std::endl;
    } else if (operation == "*") {
        std::cout << operande1 << "*" << operande2 << " = " << operande1 * operande2 << std::endl;
    } else if (operation == "/") {
        if (operande2 != 0) {
            std::cout << operande1 << "/" << operande2 << " = " << operande1 / operande2 << std::endl;
        } else {
            std::cout << "Attention division par zéro" << std::endl;
        }
    } else {
        std::cout << "Erreur : opérateur inconnu " << operation << std::endl;
    }

    return 0;
}