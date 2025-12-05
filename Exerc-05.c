#include <stdio.h>                      // Biblioteca padrão de entrada e saída



int main() {                            // Função principal do programa.    
    
    int vetor[10];                      // Vetor para armazenar 10 números inteiros
    int i;                              // Variável contadora para os laços
    int somaPares = 0;                  // Acumulador para a soma dos números pares
    int somaTotal = 0;                  // Acumulador para a soma de todos os elementos (para a média)
    float media;                        // Variável para armazenar a média (tipo float para casas decimais)

    printf("--------- Digite 10 Numeros (Analise de Vetor) ---------\n\n");     // Mostrar uma mensagem para o usuário

    
    
    for (i = 0; i < 10; i++) {                      // Laço for para percorrer o vetor e preencher as 10 posições
        printf("Digite o %d numero: ", i + 1);      // Coleta o valor digitado pelo Usuário
        scanf("%d", &vetor[i]);                     // Lê o número e armazena na posição 'i' do vetor
    }

    
    
    for (i = 0; i < 10; i++) {                      // Percorre o vetor novamente para realizar os cálculos
        
        somaTotal += vetor[i];                      // Soma todos os valores para o cálculo da média

        
        if (vetor[i] % 2 == 0) {                    // Verifica se o número é par usando o operador módulo (%), 
                                                    // e se o resto da divisão por 2 for 0 é par

            somaPares += vetor[i];                  // Acumula o valor na soma dos pares
        }
    }

    
    media = (float)somaTotal / 10; // Cálculo da média: converte somaTotal para float para garantir precisão decimal

    printf("\n--- Resultados ---\n");            // Mostrar para o usuário aonde sairá os resultados 
    printf("Soma dos valores PARES: %d\n", somaPares);      // Exibe a soma de todos valores pares 
    printf("Media de TODOS os valores: %.2f\n", media);     // Exibe todos os valores da variável media

    return 0;                                               // Finaliza o programa com sucesso
}