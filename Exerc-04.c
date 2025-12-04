#include <stdio.h>                                          // Biblioteca padrão para entrada e saída



int main() {                                                // Início da função principal do programa.
    

    int linhas, i, j;                                       // Variável para armazenar o contador

    printf("Digite o numero de linhas do triangulo: ");     // Solicita os números de linhas do triângulo
    scanf("%d", &linhas);                                   // Lê a quantidade passada
    printf("\n");                                           // Espaço para separar

    
    for (i = 1; i <= linhas; i++) {     // laço 'for' (externo): Controla a quantidade de linhas
        
        
        
        for (j = 1; j <= i; j++) {      // Segundo laço 'for' (interno): Controla as colunas (asteriscos)
            printf("*");                // Imprime '*' 'i' vezes (se estamos na linha 3, imprime 3 asteriscos)
        }
        
        
        printf("\n");                   // Quebra de linha após imprimir os asteriscos daquela linha
    }

    
    
    float valor, soma = 0, media;                       // Variáveis para armazenar os números em float
    int contador = 0;                                   // Variável para armazenar o contador

    
    printf("\n------------------ Calculadora ------------------ \n");   // Exibe uma mensagem avisando que aqui que começa a calculadora
    printf("Digite numeros para somar. Digite 0 para encerrar.\n");     // Solicita o número para soma e avisa que o 0 encerra o programa
    printf("Digite um numero: ");                                       // Solicita o número para soma
    scanf("%f", &valor);                                                // Lê o número e armazena na variável float valor

    
    while (valor != 0) {                               // Laço while: executa enquanto o valor for diferente de 0
        
        if (valor > 0) {                               // Verifica se o número é positivo antes de somar
            soma = soma + valor;                       // Acumula o valor
            contador++;                                // Conta +1 número válido
        } 
        
        else {                                                          // Caso contrário
            printf("Aviso: Valores negativos sao ignorados.\n");        // Será exibido essa mensagem
        }

        
        printf("Digite outro numero (0 para sair): ");  // Pede o próximo número (para não criar loop infinito)
        scanf("%f", &valor);                            // Lê o número e armazena na variável float valor
    }

    
    if (contador > 0) {                             // Se contador for maior que 0 irá ocorrer esse bloco de códigos
        media = soma / contador;                    // Acumula a média com base nos valores da soma dividido pelo contador
        printf("\n--- Resultados ---\n");           // Mensagem para sinalizar que logo em seguida irá vir os resultados
        printf("Total de valores positivos somados: %d\n", contador);   // Exibe o total de valores da variável contador
        printf("Media dos valores: %.2f\n", media);                     // Exibe a média de todos valores
    } 
    
    else {                                                      // Senão 
        printf("\nNenhum valor positivo foi inserido.\n");      // Exibe a mensagem que nenhum valor foi inserido
    }

    return 0;                                                   // Encerra o programa


}