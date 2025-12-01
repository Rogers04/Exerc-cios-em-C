# include <stdio.h>                 // Biblioteca padrão de entrada e saída.

int main(){                         // Início da função principal do programa.


 char nome[50];                    // Um vetor de caracteres (string) com espaço para até 49 letras + '\0'.
 int idade;                        // Variável do tipo inteira para armazenar a idade do usuário.

 printf("Seu nome: ");             // Exibe mensagem pedindo o nome do usuário.
 scanf("%s", nome);                // Lê a string do nome e adiciona no vetor.

 printf("Sua idade: ");            // Exibe mensagem pedindo a idade do usuário.
 scanf("%d", &idade);              // Lê a string idade e adiciona na variável idade.

 printf("\n Ola %s, voce tem %d anos de idade.", nome, idade); // Exibe o nome e a idade do usuário.

 return 0;                         // Finaliza o programa retornando 0.


}