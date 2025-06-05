#include <stdio.h>

int main(){
    unsigned short int tabuleiro = 8, A_rainha = 7, B_rainha = 7, A_bispo = 7, B_bispo = 0, A_torre = 7, B_torre = 1,A_cavalo = 7, B_cavalo = 4, passo = 0;
    for (int i = 0; i < 8; i++)
    {
        //Monta o tabuleiro no terminal
        for (int x = 0; x < tabuleiro; x++)
        {
            for (int y = 0; y < tabuleiro; y++)
            {
                //mostra a rainha na posição do tabuleiro
                if (x == A_rainha && y == B_rainha)
                {
                    //Rainha
                    printf("[R]");
                }
                else{
                    //mostra a torre na posição do tabuleiro
                    if (x == A_torre && y == B_torre)
                    {
                        //Torre
                        printf("[T]");
                    }
                    else{
                        //mostra o bispo na posição do tabuleiro
                        if (x == A_bispo && y == B_bispo)
                        {
                            //Bispo
                            printf("[B]");
                        }
                        else{
                            //mostra o caminho e o cavalo na posição do tabuleiro
                            if (x == A_cavalo && y == B_cavalo)
                            {
                                if (passo == 3 || i >= 2)
                                {
                                    //Cavalo
                                    printf("[C]");
                                    passo = 0;
                                }
                                else{
                                    if(passo == 2){
                                        //Movimento do cavalo
                                        printf("[*]");
                                        B_cavalo++;
                                    }
                                    else{
                                        //Movimento do cavalo
                                        printf("[*]");
                                        A_cavalo--;
                                    }
                                    passo++;
                                }
                            }
                            else{
                                //Local vazio sem peças
                            printf("[ ]");
                            }
                        }
                    }
                }   
            }
            //Pula as linha do tabuleiro
            printf("\n");
        }
        //Movimento da torre
        A_torre--;
        //movimento da rainha
        B_rainha--;
        //movimento do bispo
        A_bispo--;
        B_bispo++;

        //Divisao dos tabuleiros
        printf("\n");
        printf("------------------------\n");
        printf("\n");
    }
    return 0;
}
