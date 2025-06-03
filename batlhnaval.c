#include <stdio.h>

int main() {
    char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];
//iniciar dando valor a tabela
for (int i = 0; i < 10; i++){
for(int j = 0;j<10;j++){
tabuleiro[i][j]=0;
}}
//imprimir o nome do jogo
printf("BATALHA NAVAL\n");//pula para outra linha
printf("   ");//da um espacamento antes de imprimir as letras na mesma linha

//imprime as letras de A a j
for(int j=0;j<10;j++){
printf("%c ", letras[j]);
}
printf("\n");//pula para prox linha

for(int i=0;i<10;i++){
printf("%d ", i + 1);//imprime de 1 a 10, visualmente,inicia em 0
if(i + 1 < 10) printf(" ");//alinha a tabela
for (int j = 0; j < 10; j++){
printf("%d ", tabuleiro[i][j]);}
printf("\n");//passa para proxima linha,formando o tabuleiro
}

    return 0;
}
