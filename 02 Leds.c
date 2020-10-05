//Fanny Selene Ortiz Blanco 4°B MAAU
//Programa para calcular las resistencias de los leds
#include <stdio.h>

float main()
{
    float Vs,R1,R2,R3;
        printf("\nEscribe el valor del voltaje: \n");
        scanf("%f",& Vs);

        R1=(Vs-2.8)/0.02; //resistencia del led blanco
        R2=(Vs-1.8)/0.015;//resistencia del led verde std
        R3=(Vs-3)/0.02;//resistencia del led azul brillante

        printf("\nResistencia del led Blanco es: %.2f \n",R1);
        printf("\nResistencia del led Verde std es: %.2f \n",R2);
        printf("\nResistencia del led Azul Brillante es: %.2f \n",R3);

    return 0;
}
