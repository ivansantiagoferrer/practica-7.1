#include <stdio.h>

int main() {
 // Variables enteras
 short enteroNumero1 = 32768;
 signed int enteroNumero2 = 55;
 unsigned long enteroNumero3 = -789;
 char caracterA = 65; // Convierte el entero (ASCII) a carácter
 char caracterB = 'B';

 // Variables reales
 float puntoFlotanteNumero1 = 89.8;
 double puntoFlotanteNumero2 = -238.2236;
 printf("\n el valor de entero es: %d", enteroNumero1 );
 printf("\n el valor de signed es : %d ", enteroNumero2);
 printf("\n el valor de unsigned es %d", enteroNumero3);
 printf("\n el valor de char es : %d", caracterA);
 printf("\n el valor de caracterb es: %c", caracterB);
 printf("\n el valor de float es : %f", puntoFlotanteNumero1);
 printf("\n el valor de doublefloat es : %f", puntoFlotanteNumero2);
 
 return 0;
}
