#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

/*
Para guardar el archivo:
    g++ NomArchivo.cpp -o NomEjecutable

Para ejecutar el ejecutable, tienes que estar en la carpeta del ejecutable:
    ./NomEjecutable

Para ir a sub carpeta
    cd NomSubcarpeta

Para regresar carpeta madre
    cd ..
*/

int eje1() {
    return 0;
}

int eje2() {
    return 0;
}

int eje3() {
    return 0;
}

int eje4() {
    return 0;
}

int eje5() {
    return 0;
}

int main() {
    int eje=2;
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