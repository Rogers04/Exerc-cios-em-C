#include <stdio.h>                      // Inclui a biblioteca padrão de entrada e saída.

int main() {                            // Início da função principal do programa.

    char nome[50];                      // Declara um vetor de caracteres (string) com espaço para até 49 letras + '\0'.
    int idade;                          // Uma variável inteira para armazenar a idade do usuário.
    float nota01, nota02, media;        // Três variáveis do tipo float para armazenar duas notas e a média.
    char resposta1[15], resposta2[15];  // Duas strings para armazenar respostas de texto, caso necessário.

    printf("Digite seu nome: ");        // Exibe mensagem pedindo o nome do usuário.
    scanf("%49s", nome);                // Lê uma string para 'nome', limitando a leitura a 49 caracteres para evitar overflow.

    printf("Digite sua idade: ");       // Solicita a idade do usuário.
    scanf("%d", &idade);                // Lê o valor inteiro digitado e armazena em 'idade'.

    printf("Digite a primeira nota: "); // Solicita a primeira nota.
    scanf("%f", &nota01);               // Lê a primeira nota (float).

    printf("Digite a segunda nota: ");  // Solicita a segunda nota.
    scanf("%f", &nota02);               // Lê a segunda nota (float).


    media = (nota01 + nota02) / 2;      // Calcula a média aritmética das duas notas e armazena em 'media'.

    
    printf("\nOla %s, voce tem %d anos de idade.\n", nome, idade);  // Exibe o nome e a idade do usuário.
    printf("Sua media foi: %.2f\n", media);                         // Exibe a média calculada com duas casas decimais.



     // Aqui mostramos o resultado direto da comparação (0 ou 1) conforme o roteiro pede
    printf("Media maior ou igual a 7? %d\n", media >= 7);
    printf("Idade menor que 18? %d\n", idade < 18);


    return 0;  // Finaliza o programa retornando 0.
}
 