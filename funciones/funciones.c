#include <stdio.h>
#include <math.h>
#include "funciones.h"
#define S 3

float ingreseComponente(char xy, int numPunto){
    float valor;
    printf("Ingrese la componente %c del punto %d: ",xy,numPunto);
    fflush(stdin);
    scanf("%f",&valor);
    return valor;
}


void calcularSegmentoMayor(float xPunto[], float yPunto[],int numPuntos){
    float seg[S];
    float numMayor;
    int z=0;
    for(int i=0;i<S-1;i++){
        for (int j=i+1;j<S;j++){
            seg[z]=calcularDistancias(xPunto[i],yPunto[i],xPunto[j],yPunto[j]);
            if (z==0){
                numMayor=seg[i];
            }else if(seg[i]>=numMayor){
                numMayor=seg[i];
            }
            z++;
        }
    }
    printf("El segmento mayor tiene el valor de: %f\n",numMayor);
}

void calcularSegmentoMenor(float xPunto[], float yPunto[],int numPuntos){
    float seg[S];
    float numMayor;
      int z=0;
    for(int i=0;i<S-1;i++){
        for (int j=i+1;j<S;j++){
            seg[z]=calcularDistancias(xPunto[i],yPunto[i],xPunto[j],yPunto[j]);
            if (z==0){
                numMayor=seg[i];
            }else if(seg[i]<=numMayor){
                numMayor=seg[i];
            }
             z++;
        }
    }
    printf("El segmento menor tiene el valor de: %f\n",numMayor);
}

float calcularDistancias(float x1, float y1, float x2, float y2){
    float d = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    return d;
}
