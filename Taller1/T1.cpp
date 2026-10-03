#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int eje1() {
    return 0;
}

int eje2() {

    int n;
    float i=1;
    float total=0;

    cout << "Ingerese el valor de n:";
    cin >> n; 
    

    for ( i = 1 ; i <= n ; i++ ){
    
        total = total + ((4.0*i*i)-(i/2.0));

        cout << "Suma parcial(" << i << "): " << total << endl;

    }

    cout << "Suma total: " << total << endl;

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