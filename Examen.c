#include <stdio.h>


int main()
{
    int cantidad ;
    int cont=0 ;
    int cont1=0 ; 
    int num ;
    
    printf ("Cuantos numeros desea ingresar: "); 
    scanf ("%d", &cantidad);

    do{
    cont1=cont1+1;
    cont=cont+1;
    printf("\n Ingrese el numero %d:", cont1 );
    scanf ("%d",&num);


    }while(cont < cantidad);
    
    

    return 0;
}