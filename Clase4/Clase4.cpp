#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
/*
int main()
{
    double a=45, b=3.4, c;
    printf("a=%lf , b= %lf \n", a, b);
    if(a>=b) c=a;
    else c=b;
    printf("c=%lf", c);
}
*/
/*
int main(){
    double x, y;
    cout <<"Ingrese la componente x de la coordenada:\n" ;
    cin >> x ;
    cout <<"Ingrese la componente y de la coordenada:\n" ;
    cin >> y ;

    if ( y * x > 0 ){

        if ( y > 0 ){

            cout <<"La coordenada ("<< x << "," << y <<") se encuentra en el cuadrante 1 \n";

        }
        else{

            cout <<"La coordenada ("<< x << "," << y <<") se encuentra en el cuadrante 3 \n";
            
        }
    }
    else if ( y*x < 0 ){
        
        if ( y > 0 ){
            cout <<"La coordenada ("<< x << "," << y <<") se encuentra en el cuadrante 2 \n";        
        }
        else{
            cout <<"La coordenada ("<< x << "," << y <<") se encuentra en el cuadrante 4 \n";
        
        }
    }
    else{

        if ( y + x == 0 ){
            cout <<"La coordenada ("<< x << "," << y <<") se encuentra en el origen \n";        
        }
        else if ( y == 0) {
            cout <<"La coordenada ("<< x << "," << y <<") se encuentra en el eje y \n";
        }
        else{
            cout <<"La coordenada ("<< x << "," << y <<") se encuentra en el eje x \n";
        }

    }

}
*/
int main () {
    double suma;
    int i;
    suma = 0.0;
    for (i=1; i<=15; i++)
        { suma+=1.0/i;
        printf("%5d %12.5lf\n", i, suma);
    }
}