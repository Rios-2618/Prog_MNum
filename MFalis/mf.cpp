#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;


double fc1(double c){return exp(-pow(c,2))-cos(c);}
int eje1() {
    double b,a,c,eps;
    int i;

    printf("Ingrese valor de epsilon:\n");
    scanf("%lf",&eps);

    b=2.0;
    a=1.0;

    do
    {
        c=b-((fc1(b)*(b-a))/(fc1(b)-fc1(a)));

        if(fc1(a)*fc1(c)<0){
            b=c;
        }
        else{
            a=c;
        }
        
    } while (abs(fc1(c))<eps);

    printf("%lf",c);

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
    int eje=1;
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