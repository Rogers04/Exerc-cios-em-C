#include <stdio.h>                      // Biblioteca padrão de entrada e saída
#include <stdlib.h>                     // Biblioteca auxiliar (exit)



void cadastrarDados();                  // Declaração de uma função "vazia" para cadastrar os dados
void lerDados();                        // Declaração de uma função "vazia" para ler os dados armazenados

int main() {


    int opcao;              // Variável do tipo Int 

    do {       // Usado para retepição até o usuário escolher o 0

        
        // Bloco de opções para mostrar o menu para o usuário
        printf("\n---- Sistema de Cadastro com Ponteiros e Arquivos ----\n");
        printf("1. Cadastrar Novo Usuário\n");
        printf("2. Ler Arquivo de Cadastro\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);                        // Lê a opção escolhida pelo usuário
        
        
        getchar(); // Limpa o buffer após ler o número da opção 

        switch(opcao) {                      // Para executar as ações com base nas escolhas do usuário
            case 1:                          // Caso a opção seja a primeira (1)
                cadastrarDados();            // Chama a função de cadastro
                break;
            case 2:                          // Caso a opção seja a segunda (2)
                lerDados();                  // Chama a função de leitura
                break;                       // Encerra o bloco do switch
            case 0:                          // Caso o usuário queira sair
                printf("Saindo...\n");       // Mensagem para mostrar que ele está saindo
                break;                       // Sai do switch 
            default:                         // Caso o Usuário escolha algo fora das opções 
                printf("Opção inválida!\n"); // Mensagem avisando que está opção não é valida
        }
    } while (opcao != 0);           // Enquanto a opção não for 0 continua repetindo

    return 0;                       // Retorna o 0 indicando que a execução foi bem sucedida
}

void cadastrarDados() {     // Função para Cadastrar e Salvar
    
    // Variáveis locais
    char nome[100];
    int idade;
    char email[100]; 

    // --- Declaração de Ponteiros ---
    
    char *pNome = nome;     // Ponteiro para o vetor nome
    int *pIdade = &idade;   // Ponteiro para o inteiro idade
    char *pEmail = email;   // Ponteiro para o vetor email

    FILE *arquivo;          // Ponteiro para o arquivo

    printf("\n--- Novo Cadastro ---\n"); // Mensagem de um novo cadastro

    
    printf("Digite o nome: ");   // Entrada do nome 
    
    fgets(pNome, 100, stdin);    // fgets usa o ponteiro pNome (Lê o nome digitado e armazena no vetor) 

    printf("Digite o e-mail: "); // Entrada do email
    fgets(pEmail, 100, stdin);   // Lê o email digitado

    
    do {
        printf("Digite a idade: "); // Pede a idade
        scanf("%d", pIdade);        // Scanf usa o ponteiro pIdade diretamente
        
        if (*pIdade < 0) {   // Verifica o valor armazenado em idade
            printf("Erro: Idade não pode ser negativa.\n"); // Mensagem de erro caso a idade esteja incorreta
        }
    } while (*pIdade < 0);  // Continua pedindo a idade até ser válida

    
    
    arquivo = fopen("cadastro.txt", "a"); // Abre o arquivo no modo "a" (append) para adicionar sem apagar o anterior

    if (arquivo == NULL) {                      // Verificação caso haja falha para abrir o arquivo
        printf("Erro ao abrir o arquivo!\n");   // Se houver aparecerá essa mensagem na tela
        return;                                 // Encerra a função caso o arquivo não abra
    }

    
    fprintf(arquivo, "--------------------------------\n"); // Linha para separar
    fprintf(arquivo, "Nome: %s", pNome);                    // Grava o nome
    fprintf(arquivo, "E-mail: %s", pEmail);                 // Grava o Email
    fprintf(arquivo, "Idade: %d anos\n", *pIdade);          // Grava a idade acessando via ponteiro
    
    
    fclose(arquivo);    // Fechamento do Arquivo
    printf(">> Dados gravados com sucesso em 'cadastro.txt'!\n"); // Mensagem avisando que os dados foram gravados 
}


void lerDados() {
    FILE *arquivo;     // Ponteiro para o arquivo
    char linha[150];   // Vetor para armazenar cada linha lida

    printf("\n--- Lendo Arquivo 'cadastro.txt' ---\n"); // Mensagem que está lendo o arquivo

    
    arquivo = fopen("cadastro.txt", "r");   // Abre o arquivo no modo "r" 

    if (arquivo == NULL) {      // Caso o arquivo não exista ou esteja vazio
        printf("Arquivo não encontrado ou vazio.\n");   // Mensagem avisando que o arquivo não foi encontrado
        return;     // Encerra a função
    }

    
    while (fgets(linha, 150, arquivo) != NULL) {    // Lê linha por linha até o final do arquivo
        printf("%s", linha);    // Mostra a linha lida
    }

    fclose(arquivo);                            // Fecha o arquivo
    printf("\n--- Fim da Leitura ---\n");       // Mensagem avisando que foi encerrado as atividades
}