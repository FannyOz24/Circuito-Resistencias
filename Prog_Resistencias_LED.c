#include <stdio.h>
int main(void)
{
int voltage;
printf("Escribe el valor del voltage ");
scanf("%d",&voltage);

float RLAb;
float VLAb=2;
float ILAb=0.02;
float RLVb;
float VLVb=3;
float ILVb=0.02;
float RLZb;
float RLRb;
float VLRb=2;
float ILRb=0.02;
printf("Resistencia para Amarrilo Brillante  es %.2f ohm\n" , RLAb);
RLVb=((float)voltage-(float)VLVb)/(float)ILVb;
printf("Resistencia para Verde Brillante  es %.2f ohm\n" , RLVb);
RLRb=((float)voltage-(float)VLRb)/(float)ILRb;
printf("Resistencia para Rojo Brillante  es %.2f ohm\n" , RLRb);

}
