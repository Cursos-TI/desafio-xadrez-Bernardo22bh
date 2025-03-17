#include <stdio.h>

int main(){

    int i = 1;

    printf("Bispo:\n");

    while (i <= 5){
      printf ("%d - Direita\n", i);

      i++;

    }
    
    printf ("\n");
    printf("O Bispo moveu 5 casas para a diagonal superior. Saindo...\n");
    printf("\n");

    i = 0;

    printf("Torre:\n");

    do{
        if (i % 2 != 0){

       printf ("%d - Cima Direita\n", i);

    }

    i++;

    }while (i <= 10);

    printf("\n");
    printf ("A Torre moveu 5 casas para a direita. Saindo...\n");
    printf("\n");

    printf("Rainha:\n");

    for(i = 0; i >= -8; i--){
        if (i < 0){
            printf ("%d - Esquerda\n", i);
        }
    }

    printf("\n");
    printf("A Rainha moveu 8 casas para a esquerda. Saindo...\n");
    printf("\n");
  

    return 0;
}