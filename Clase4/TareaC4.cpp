#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
/*
int main () {
    string Nom;
    double Old, Km, Days, Prix;
    cout <<"Ingrese su nombre:\n" ;
    cin >> Nom ;
    cout <<"Ingrese su edad en años:\n" ;
    cin >> Old ;
    cout <<"Ingrese la distancia en kilometros (Km):\n" ;
    cin >> Km ;
    cout <<"Ingrese la duracion en dias:\n" ;
    cin >> Days ;

    if ((Days > 7 && 800 < Km) || Old > 55) {
        Prix = Km * 0.50 * 0.25;
        
        cout << "Estimadx Srx " << Nom <<", el precio de su viaje es " << Prix <<" Euros \n";
        cout << "Le hemos aplicado un descuento de 25%";
    }
    else{

        Prix = Km * 0.50;
        
        cout << "Estimadx Srx " << Nom <<", el precio de su viaje es " << Prix <<" Euros \n";
        cout << "No se encuentra dentro de las cuasales de descuento";
    }
}
*/
int main () {
    
    int dm = -1 ,ds;

    while (dm < 1 || 30 < dm){
        cout << "Por favor introdusca un dia del mes:";
        cin >> dm;
    }
    
    ds = (dm % 7);

    if (ds == 1) cout << "Dicho dia es Miercoles " << dm << " de Noviembre del 2006";
    if (ds == 2) cout << "Dicho dia es Jueves " << dm << " de Noviembre del 2006";
    if (ds == 3) cout << "Dicho dia es Viernes " << dm << " de Noviembre del 2006";
    if (ds == 4) cout << "Dicho dia es Sabado " << dm << " de Noviembre del 2006";
    if (ds == 5) cout << "Dicho dia es Domingo " << dm << " de Noviembre del 2006";
    if (ds == 6) cout << "Dicho dia es Lunes " << dm << " de Noviembre del 2006";
    if (ds == 0) cout << "Dicho dia es Martes " << dm << " de Noviembre del 2006";
}