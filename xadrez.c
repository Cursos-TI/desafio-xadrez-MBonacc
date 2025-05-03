#include <stdio.h>

void moverRainha(int movRainha) { //movimento da rainha
    if (movRainha > 0){
        printf ("Cima\n");
        moverRainha (movRainha-1);
    }

}

void moverBispo (int movBispo) { // movimento do bispo, utilizando loops aninhados e recursivo
    if (movBispo > 0) {
        for (int i = 2; i > 0; i--)
        {
            printf ("Cima\n");
            do{
                printf ("Direita\n");
                i--;
            } while (i > 1);
        }
        moverBispo (movBispo-1);
    }
    
}

void moverTorre(int movTorre){ // movimento da torre
    if (movTorre > 0){
        printf ("Direta\n");
        moverTorre (movTorre-1);
    }
}
 
int main() {

    int casas, menu; // casas decide o número de casas que vai andar, menu é para decisão de qual peça vai mover

    printf ("MOVA SUA PEÇA DE XADREZ\n");

    do {
        // menu de seleção
        printf ("\nSelecione a peça que gostaria de mover:\n1 - Rainha\n2 - Bispo\n3 - Torre\n4 - Peao\n5 - Cavalo\n6 - Encerrar o programa\n");
        scanf ("%d", &menu);

        switch (menu) //switch de escolha da movimentação dentro de um loop
        {
        case 1: // Rainha
        printf ("Escolha a quantidade de casas. No máximo 8. \n");
        do { // loop para evitar que o usuário ande mais do que o tabuleiro permite, 8 casas
            scanf ("%d", &casas);
            if (casas <= 0 || casas >= 9){
                printf ("Opção Inválida, escolha novamente:\n");
            }
        } while (casas <= 0 || casas >= 9);
            moverRainha(casas); // utiliza a recursiva para mover a rainha
            break;

        case 2:
        printf ("Escolha a quantidade de casas. No máximo 8. \n");
        do {
            scanf ("%d", &casas);
            if (casas <= 0 || casas >= 9){
                printf ("Opção Inválida, escolha novamente:\n");
            }
        } while (casas <= 0 || casas >= 9);
            moverBispo(casas); // chama a recursiva para mover o bispo
            break;
        case 3:
        printf ("Escolha a quantidade de casas. No máximo 8. \n");
        do {
            scanf ("%d", &casas);
            if (casas <= 0 || casas >= 9){
                printf ("Opção Inválida, escolha novamente:\n");
            }
        } while (casas <= 0 || casas >= 9);
            moverTorre(casas); // torre
            break;

        case 4: // movimentação do peão - puro flavor
            printf ("Cima\n");
            break;

        case 5: // Cavalo
            for (int i = 0, cavalo = 6; i < cavalo; i++, cavalo--)
            {
                while ( cavalo > 4)
                {
                    printf ("Cima\n");
                    cavalo--;
                }
                if (i == 1) continue;
                if(i > 2) break;
                printf ("Esquerda\n");
            }  
            break;
        case 6:
            printf ("Encerrando o programa. . .\n\n");
            break;
        default:
            printf ("Opção inválida, tente novamente.\n\n");
            break;
        }

    } while (menu != 6);
    
    return 0;
}
