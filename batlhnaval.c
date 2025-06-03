#include <stdio.h>

int main() {
    char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

for (int i = 0; i < 10; i++){
for(int j = 0;j<10;j++){
tabuleiro[i][j]=0;
}}

printf("BATALHA NAVAL\n");
printf("   ");

for(int j=0;j<10;j++){
printf("%c ", letras[j]);
}
printf("\n");

for(int i=0;i<10;i++){
printf("%d ", i + 1);
if(i + 1 < 10) printf(" ");
for (int j = 0; j < 10; j++){
printf("%d ", tabuleiro[i][j]);}
printf("\n");}

    return 0;
}
