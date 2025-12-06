#include <stdio.h>                      // Biblioteca padrão de entrada e saída


int main() {

    int linhas, colunas;                // Declaração das linhas e colunas

    printf("Digite o numero de linhas: ");  // Entrada dos valores da linha
    scanf("%d", &linhas);                   // Lê o valor passado e guarda
    printf("Digite o numero de colunas: "); // Entrada dos valores da coluna
    scanf("%d", &colunas);                  // Lê o valor passado e guarda



    int matriz[linhas][colunas];         // Matriz de inteiros com tamanho das variáveis (linhas, colunas)
    int somaTotal = 0;                   // Variável da soma de todos os elementos
    int somaPares = 0;                   // Variável para a soma apenas dos pares
    int i, j;                            // Variáveis do tipo Int de controle para os laços (i = linha, j = coluna)
    int maior, menor;                    // Variáveis do tipo Int para o maior e o menor número
    float media;                         // Variável do tipo float para calcular a média
    int totalElements = linhas * colunas; // Variável do tipo int para calcular o total de elementos
    

    

    
    printf("\n------ Preenchimento dos dados ------\n");    // Mensagem avisando o Preenchimento dos dados

    for (i = 0; i < linhas; i++) {           // For externo 'i' percorre as linhas para cada coluna 
        
        for (j = 0; j < colunas; j++) {       // O For interno 'j' percorre as colunas para cada linha
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);   // Entrada dos valores (i) e (j)
            scanf("%d", &matriz[i][j]);                                 // Lê o valor e armazena na posição correta
        }
    }


    // Inicializa com o maior e o menor como primeiro elemento para ter como base de comparação
    maior = matriz[0][0];
    menor = matriz[0][0];

    printf("\n--- Matriz Digitada ---\n");              // Mensagem avisando da Matriz digitada
    
    for (i = 0; i < linhas; i++) {                // For interno 'i' percorre as linhas da matriz
        for (j = 0; j < colunas; j++) {           // For interno 'j' percorre as colunas da matriz
            
            printf("%d\t", matriz[i][j]);   // Exibe o valor formatado com tabulação (\t) para alinhar visualmente

            
            somaTotal += matriz[i][j];      // Cálculo da Soma Total

            
            if (matriz[i][j] % 2 == 0) {    // Verifica se o número é par (resto da divisão por 2 igual a 0)
                somaPares += matriz[i][j];  // Cálculo da soma dos Pares 
            }

            if (matriz[i][j] > maior){      // Verifica se o valor atual é maior que o maior já encontrado
                maior = matriz[i][j];       // Se for, a variável maior passará a ter esse valor da matriz
            }

            if (matriz[i][j] < menor){      // Verifica se o valor atual é menor que o menor já encontrado
                menor = matriz[i][j];       // Se for, a variável menor passará a ter esse valor da matiz
            }
        }
        
        printf("\n");   // Após imprimir todas as colunas de uma linha, pula para a próxima linha visual
    }


    media = (float)somaTotal / totalElements;                       // Cálculo da média 

    
    printf("\n--- Resultados ---\n");                               // Mensagem avisando dos resultados 
    printf("Soma TOTAL de todos os elementos: %d\n", somaTotal);    // Exibe a soma total dos valores
    printf("Soma apenas dos valores PARES: %d\n", somaPares);       // Exibe apenas a somas dos pares
    printf("Media dos valores: %.2f\n", media);                     // Exibe apenas a média dos valores
    printf("Maior valor encontrado: %d\n", maior);                  // Exibe o maior número encontrado
    printf("Menor valor encontrado: %d\n", menor);                  // Exibe o menor número encontrado

    return 0;                                                       // Finaliza o programa com sucesso
}