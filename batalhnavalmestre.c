#include <stdio.h>

int main() {
char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
int tabuleiro[10][10];

//iniciar dando valor a tabela
for (int i = 0; i < 10; i++){
for(int j = 0;j<10;j++){
tabuleiro[i][j]=0;}}

//inicializando os navios
for (int i = 0; i < 3; i++){
tabuleiro[i][9 - i]=3;}

for(int i = 0; i < 1; i++){
    for (int j = 0; j < 3; j++){
tabuleiro[i+3][j]=3;}}

//habilidades especiais piramide
int inicio = 6;//diz qual linha
int coluna = 5;//diz ao codigo aonde comecar na linha

for (int i = 0; i < 3; i++) {

int linha = inicio + i;
if (linha >= 10) break;//nao sair da matriz

for (int j = coluna - i; j <= coluna + i; j++) {
//diz qual e a linha scaneada
if (j >= 0 && j < 10) {
tabuleiro[linha][j] = 5; // marca dano
}}
}

//cruz
int tamanho= 3;
int colunacruz = tamanho / 2;//faz a 

for(int i= 0; i < tamanho; i++){
for(int j = 0; j < tamanho; j++){
if(i == colunacruz || j == colunacruz){
tabuleiro[i][j] = 5;
}else{tabuleiro[i][j] = 0;} } }

//octaedro
int centrolinha = 3;//definindo inicio
int centrocoluna = 5;//definindo aonde inicia na linha
for(int i = centrolinha - 1; i <= centrolinha + 1; i++){
tabuleiro[i][centrocoluna] = 5;
}

for(int j = centrocoluna - 1; j <= centrocoluna + 1; j++){
if(j >= 0 && j <= 10)tabuleiro[centrolinha][j] = 5;}


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