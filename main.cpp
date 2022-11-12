#include <iostream>
using namespace std;

int main(){
/*Qui vanno definite le variabili*/ int a=0, b=0, c=0, /*Area Triangolo*/ Atriang=0, /*Area Quadrato*/ Aq=0, /*Area Rettangolo*/ Ar=0, /*Area Trapezio*/ Atrap=0;
cin >> a >> b >> c;
//Qui va scritto il codice per eseguire i calcoli richiesti
Atriang=(a*b)/2;
Aq=a*a;
Ar=a*b;
Atrap=((a+b)*c)/2;
cout << Atriang << endl << Aq << endl << Ar << endl << Atrap;
return 0;
}
