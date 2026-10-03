#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int eje1() {
    return 0;
}

int eje2() {

    int n;
    int i=1;
    double total=0;

    printf("Ingerese el valor de n:\n");
    scanf("%d", &n);
    

    for ( i = 1 ; i <= n ; i++ ){
    
        total = total + ((4.0*i*i)-(i/2.0));

        printf("Suma parcial(%i): %.1lf \n", i , total);

    }
    printf("Suma total: %.1lf \n", total);

    return 0;
}

int eje3() {

    int y;
    int s;
    int h;
    int m;

    printf("Ingerese su edad:\n");
    scanf("%d", &y);
    printf("Ingerese el el semestre en el que se encuentra:\n");
    scanf("%d", &s);
    printf("Ingerese la cantidad de hermanos que tiene:\n");
    scanf("%d", &h);
    printf("Ingerese la cantidad de  materias que ha inscrito este semestre:\n");
    scanf("%d", &m);

    printf("\n#####\n\nSu edad: %d \nSe encuentra en el semestre: %d \nLa cantidad de hermanos que tiene es %d \nCantidad de materias que tiene inscritas este semestre: %d \n\n", y , s , h , m );

    return 0;
}

int eje4() {
    return 0;
}

int eje5() {
    return 0;
}

int main() {
    int eje=3;
    switch (eje)
    {
    case 1:
        eje1();
        break;
    
    case 2:
        eje2();
        break;
    
    case 3:
        eje3();
        break;

    case 4:
        eje4();
        break;

    case 5:
        eje5();
        break;
    
    default:
        break;
    }
    return 0;
}