#include <stdio.h>                      // Biblioteca padrão para entrada e saída

int main() {                            // Início da função principal do programa.

    char nome[50];                      // Vetor de caracteres para armazenar o nome do aluno
    int idade;                          // Variável para armazenar a idade
    float nota1, nota2, nota3;          // Variáveis para armazenar as três notas
    float media;                        // Variável para armazenar a media aritmética

    printf("Digite seu nome: ");        // Solicita o nome do usuário
    fgets(nome, 50, stdin);              // Lê o nome com espaços e armazena na variável

    printf("Digite sua idade: ");       // Solicita a idade
    scanf("%d", &idade);                // Lê um número inteiro e armazena em idade

    printf("Digite a primeira nota: "); // Solicita a primeira nota
    scanf("%f", &nota1);                // Lê o valor float e armazena

    printf("Digite a segunda nota: ");  // Solicita a segunda nota
    scanf("%f", &nota2);                // Lê o valor float

    printf("Digite a terceira nota: "); // Solicita a terceira nota
    scanf("%f", &nota3);                // Lê o valor float


    
    media = (nota1 + nota2 + nota3) / 3; // Cálculo da média aritmética usando os operadores

    
    printf("\nAluno: %s", nome);         // Exibe o nome digitado
    printf("Idade: %d\n", idade);        // Exibe a idade
    printf("Media: %.2f\n", media);      // Exibe a média com duas casas decimais

    
        if (media >= 9) {               // Se a média for maior ou igual a 9
        printf("Aprovado com excelente desempenho!\n");     // Irá exibir essa mensagem

    } else if (media >= 7) {            // Senão, se a média for maior ou igual a 7 (e menor que 9)
        printf("Aprovado, mas ainda pode melhorar.\n");     // Irá exibir essa outra mensagem

    } else {                            // Caso contrário (média menor que 7)
        printf("Reprovado. Continue se esforcando!\n");     // Será exibido essa
    }

    return 0;   // Encerra o programa
}