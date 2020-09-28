#include <stdio.h>
//Intensidad (Corriente) = Voltaje / Resistencia
//Resistencia = Voltaje / Intensidad (Corriente)
int main ()
{
    int V,X,Y,Z;
    printf("¿Cuanto vale mi resistencia?\n");
    printf("Dame el valor del voltaje inicial:\n");
    scanf("%d",&V);
    printf("Para el led Verde brillante, la resistencia es de:\n");
    X=V/0.02;
    printf("%d Ohms\n",X);
    printf("Para el led Rojo std es:\n");
    Y=V/0.015;
    printf("%d Ohms\n",Y);
    printf("Para el led Blanco es:\n");
    Z=V/0.02;
    printf("%d Ohms\n",Z);
    return 0;
}
