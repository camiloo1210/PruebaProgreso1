//Construya un programa que lea por pantalla un número entero y diga el número de dígitos que tiene y la suma de estos.
#include <stdio.h>
int main()
{
    int n,s,d,c=0;//n es el numero que debe ser ingresado por el usuario,s es la suma de dichos digitos y d es los digitos,c es igual al contador de repeticiones 
    printf("Ingrese un numero entero ");
    scanf("%i",&n);
    while (n>0)
    {
        d=n%10;//nos permite descomponer el numero de digitos
        if (d>0)
        {
        s=s+d;//Se almacena la suma de dichos digitos
        }
        c=c+1;//nos permite saber cuantos digitos hay
    }
}


