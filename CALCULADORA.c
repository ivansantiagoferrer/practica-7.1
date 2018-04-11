/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
int main()
{
    char opcion;
    int n1, n2;
    do 
    {
        printf("\n >>>>menu calculadora<<<<");
        printf("\n\n 1. sumar dos numeros", 163);
        printf("\n   2. restar dos numeros", 163);
        printf("\n   3. multiplicar dos numeros", 163); 
        printf("\n   4. dividir dos numeros",163);
        printf("\n   5. salir ");
        do 
    {
        printf("\n introduzca opcion (1-5):", 162);
        fflush(stdin);
        scanf("%c", &opcion);
    } while (opcion < '1'|| opcion >'5');
    switch(opcion)
    {
        case '1': printf("\n intruduzca primero sumando:");
                  scanf("%d", &n1);
                  printf("\n introduzca segundo sumando:");
                  scanf("%d",&n2);
                  printf("\n %d+%d = %d\n", n1, n2, n1 + n2);
                  break;
        case '2': printf("introduzca minuendo ");
                  scanf("%d", &n1);
                  printf("introduzca sustraendo ");
                  scanf("%d", &n2);
                  printf("\n %d - %d = %d\n", n1, n2, n1 - n2);
                  break;
        case '3': printf("\n introduzca primer numero a multiplicar");
                  scanf("%d", &n1);
                  printf("\n introduzca segundo numero a multiplicar");
                  scanf("%d", &n2);
                  printf("\n %d * %d= %d\n", n1, n2, n1*n2);
                  break;
        case '4': printf("\n introduzca dividendo");
                  scanf("%d", &n1);
                  printf("\n introduzca divisor ");
                  scanf("%d", &n2);
                  if(n2 !=0)
                   printf("\n %d div %d = %d (resto = %d )\n", n1, n2, n1/n2 , n1 % n2);
                   else printf("\n error: no se puede dividir entre cero. \n");
                   
    }
    } while(opcion != '5');

    return 0;
}    
