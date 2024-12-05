#include <iostream>
using namespace std;

int main(){
int nbr ;

cout << "Entrer le nombre"<< endl;
cin >> nbr;

if (nbr % 2 == 0){
    cout <<"le nombre est pair" << endl;
}
else{
    cout <<"le nombre est impair"<<endl;
   return 0;
 }
}