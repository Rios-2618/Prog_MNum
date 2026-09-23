#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int ejercicio1() {
    int f0 = 0, f1 = 1, fn = 0;
    int suma = 0;

    cout << "Calculando la suma de Fibonacci de F(0) a F(10) (excluyendo F(4)):\n";

    for (int i = 0; i <= 10; i++) {
        // Cálculo del valor de Fibonacci para la posición i
        if (i == 0) {
            fn = 0;
        } else if (i == 1) {
            fn = 1;
        } else {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }

        // Uso del operador continue para omitir F(4) en la suma
        if (i == 4) {
            continue; 
        }

        suma += fn;
        cout << "F( " << i <<" ) = " << fn << "(Sumado)\n";
    }

    cout << "\nSuma total (sin F(4)) =" << suma << "\n";
    return 0;
}

int ejercicio2() {
    int n, contador_primos = 0;

    printf("Introduce un entero positivo n: ");
    scanf("%d", &n);

    printf("Numeros primos menores o iguales a %d:\n", n);

    for (int i = 2; i <= n; i++) {
        int es_primo = 1;
        int limite = (int)sqrt(i); // Raíz cuadrada de i

        // Verificar si es divisible por los enteros entre 2 y la raíz cuadrada de i
        for (int j = 2; j <= limite; j++) {
            if (i % j == 0) {
                es_primo = 0; // No es primo
                break;
            }
        }

        if (es_primo) {
            printf("%d ", i);
            contador_primos++;
        }
    }

    printf("\n\nCantidad total de primos encontrados: %d\n", contador_primos);
    return 0;
}

int main() {
    int eje=2;
    switch (eje)
    {
    case 1:
        ejercicio1();
        break;
    case 2:
        ejercicio2();
        break;
    default:
        break;
    }
    return 0;
}