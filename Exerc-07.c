#include <stdio.h>                      // Biblioteca padrão de entrada e saída



int contar_caracteres(char string[]); // Protótipo de função que retorna um int. Ela declara a função contar_caracteres,
                                      // que recebe uma string e devolve a quantidade de caracteres.
void exibir_mensagem_final(char nome[], int idade, char curso[], int total_letras); // Uma função que não retorna nada
// para apenas exibir o relatório final do aluno

int main() {

    // --- Declaração de Variáveis ---
    char nome[50];                                 // Array para guardar o nome 
    char curso[50];                                // Array para guardar o nome do seu curso
    int idade;                                     // Variável do tipo Int para guardar a idade
    int total;                                     // Variável do tipo Int para guardar o total de caracteres

    printf("--- Cadastro de Aluno ---\n\n");       // Mensagem sobre o "Título" do programa 

    
    
    
    printf("Digite seu nome completo: ");          // Entrada para o valor da variável nome
    fgets(nome, 50, stdin);                        // fgets lê até 49 chars ou até o 'enter' para o nome 

    
    printf("Digite sua idade: ");                  // Entrada para o valor da idade
    scanf("%d", &idade);                           // Lê o número inteiro digitado pelo usuário e armazena em idade.
    

    getchar(); // O scanf deixa um 'enter' (\n) no buffer do teclado. Limpamos com o getchar antes de chamar outro fgets 

    
    printf("Digite seu curso: ");                           // Entrada para o valor da variável curso
    fgets(curso, 50, stdin);                                // Lê o valor que foi passado no curso

    
    
    total = contar_caracteres(nome);                        // Chama a função para contar as letras do nome

    
    exibir_mensagem_final(nome, idade, curso, total);       // Saída (Chamando a função de exibição)

    return 0;               // Finaliza o programa                        
}

 
int contar_caracteres(char string[]) {                     // Função para Contar Caracteres (Lógica Manual)
    int i = 0;                                             // Variável i do tipo Int 
    
    
    while (string[i] != '\0' && string[i] != '\n') {    // Percorre a string até encontrar o fim (\0) ou a quebra de linha (\n)
        i++;                    // Adiciona mais um na variável i para avançar para o próximo caractere da string.
    }
    return i;                   // Retorna a variável i 
}


void exibir_mensagem_final(char nome[], int idade, char curso[], int total_letras) {    // Função para Exibir a Mensagem Final (Modularização)
    printf("\n--- Relatório do Aluno ---\n");           // Mensagem avisando sobre o relatório do aluno
    
    printf("Nome: %s", nome);                                   // printf mostrando o seu nome 
    printf("Idade: %d anos\n", idade);                          // printf mostrando a sua idade
    printf("Curso: %s", curso);                                 // printf mostrando seu curso
    printf("Total de caracteres no nome: %d\n", total_letras);  // printf mostrando o total de caracteres do seu nome
}
