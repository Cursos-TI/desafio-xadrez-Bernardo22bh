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
    printf ("A Torre moveu 5 casas para a direita\n");
    printf("\n");

    printf("Rainha:\n");

    for(i = 0; i >= -8; i--){
        if (i < 0){
            printf ("%d - Esquerda\n", i);
        }
    }

    printf("\n");
    printf("A Rainha moveu 8 casas para a esquerda. \n");
    printf("\n");

    i = -1; // A variável i reinicia com o valor -1



    printf("Cavalo:\n"); // Exibe o nome da peça do Xadrez



    while (i >= -1){

        for (int j = 0; j >= -2; j--){

            if (j < 0){

                printf("%d - cima\n", j);

            }

        }

        if (i < 0){

            printf("%d - direita\n", i);

        }

        i--;

    }

printf ("\n");
  printf ("o Cavalo moveu uma casa para direita e duas casas para cima");
printf("\n");
printf("\n");
    return 0;
}