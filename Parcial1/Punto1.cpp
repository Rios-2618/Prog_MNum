#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){

    int n;
    int i; 
    int j; 


    printf("Ingrese la cantidad de niveles que desea para su piramide (de 1 a 15 niveles):\n");
    scanf("%i", &n);
    while ((n<1)||(15<n)){
        printf("El valor %i no se encuuentra entre 1 y 15.\n", n);
        printf("Ingrese nuevamente la cantidad de niveles que desea para su piramide (de 1 a 15 niveles):\n");
        scanf("%i", &n);
    }

    printf("\n\n#####\n\n¡¡¡He aqui vuestra priramide!!!\n\n");

    for ( i=1; i <= n ; i++ ){
        for ( j=1 ; j<=i ; j++){
            printf("*");
        };
        printf("\n");
    };

    return 0;
}