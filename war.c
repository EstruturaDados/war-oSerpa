#include <stdio.h> 
#include <string.h> 

// DESAFIO NOVATO - WAR
typedef struct { // Struct dos territórios
    char nome[50];        // Inserção do nome do território
    char corExercito[30]; // cor do exércit
    int numTropas;        // Quantidade de tropas
} Territorio;

int main() {
    Territorio mapa[5];   // 5 territórios fixos pra cadastrar
    int i;     

    printf("=== Bem-vindo ao WAR - Nível Novato ===\n\n");

    // Cadastro dos territórios
    for (i = 0; i < 5; i++) {
        printf("Cadastro do Território %d\n", i+1);

        // Nome do território
        printf("Nome do Território: ");
        fgets(mapa[i].nome, sizeof(mapa[i].nome), stdin);       // fgets lê até encontrar um ENTER
        mapa[i].nome[strcspn(mapa[i].nome, "\n")] = '\0';       // Apagar o ENTER que ficou guardado

        // Cor do exército
        printf("Cor do Exército: ");
        fgets(mapa[i].corExercito, sizeof(mapa[i].corExercito), stdin);
        mapa[i].corExercito[strcspn(mapa[i].corExercito, "\n")] = '\0';

        // Número de tropas
        printf("Número de Tropas: ");
        scanf("%d", &mapa[i].numTropas); 

        getchar(); // Apagar o ENTER para não dar bugs no programa
        printf("\n");
    }

    // Mostrar o resumo do mapa
    printf("\n=== Estado Atual do Mapa WAR ===\n");
    for (i = 0; i < 5; i++) {
        printf("Território %d:\n", i+1);                 
        printf("  Nome: %s\n", mapa[i].nome);                 
        printf("  Cor do Exército: %s\n", mapa[i].corExercito);
        printf("  Tropas: %d\n", mapa[i].numTropas);         
        printf("-----------------------------\n");             
    }

    return 0;

}