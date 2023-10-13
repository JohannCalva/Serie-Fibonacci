#include <stdio.h>

int main(void) {

    int num, resultado;
    printf("Ingrese un numero: ");

    do{
        scanf("%d",&num);

        if(num<0){
          printf("Ingrese un numero positivo: ");
        }else{
            resultado = fibonacci(num);
            printf("El siguiente numero despues de %d en la sucesion de Fibonacci es %d", num ,resultado);
        }
    }while(num<0);

    return 0;
}

int fibonacci(int a) {
    int primero = 0;
    int segundo = 1;
    int sig;

    while(primero <= a){
        printf("%d\n", primero);
        sig = primero + segundo;
        primero = segundo;
        segundo = sig;
    }
    return primero;
}