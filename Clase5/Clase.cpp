#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {

    int i;
    int j;
    int k=0;

    for ( i = 0 ; i<= 1000 ; i++ ){
        for ( j = 0 ; j<= 1000 ; j++ ){
            if (((2*(pow((2*i+1),3)))+(3*(pow((2*j+1),2))))<540){
                k++;
                cout << k << ": ( " << (2*i+1) << " , " << (2*j+1) << " )\n";
                
            }
            
        }
    }

}