#include <stdio.h>
#include "funciones/funciones.h"
#define N 3

int main (int argc, char *argv[]) {

    float xPunto[N];
    float yPunto[N];
    
    for(int i=0;i<N;i++){
        xPunto[i]=ingreseComponente('X',i);
        yPunto[i]=ingreseComponente('Y',i);
    }
    calcularSegmentoMayor(xPunto,yPunto,N);
    calcularSegmentoMenor(xPunto,yPunto,N);

    return 0;
}







