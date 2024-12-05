#include <iostream>
#include <string>
using namespace std;

int main(){
int value ;
string nbr ; 

cout << "donner valeur" << endl;
cin >> nbr;

if (nbr == "zero"){
    value = 0;
     cout << "La valeur est :" << value << endl;
}
else if (nbr == "un"){
    value = 1;
    cout << "La valeur est :" << value << endl;
}
else if (nbr == "deux"){
    value = 2;
    cout << "La valeur est :" << value << endl;
}
else if (nbr == "trois"){
    value = 3;
    cout << "La valeur est :" << value << endl;
}
else if (nbr == "quatre"){
    value = 4;
    cout << "La valeur est :" << value << endl;
}
else{
    cout << "je ne connais pas ce chiffre"<< endl;
 }
 return 0;
}
