#include <stdio.h>
#include <string.h>

#define MAX_USUARIOS 100

typedef struct {
    char nome[100];
    char email[100];
    unsigned short idade;
} Usuario;

Usuario usuarios[MAX_USUARIOS];
int numUsuarios = 0;

void printMenu() {
    printf("=========================================================\n");
    printf("=========================================================\n");
    printf("======== MENU PRINCIPAL - CADASTRO DE USUARIOS ==========\n");
    printf("=========================================================\n");
    printf("=========================================================\n");
    printf("==== 1 - Cadastrar novo usuario                      ====\n");
    printf("==== 2 - Buscar por um usuario                       ====\n");
    printf("==== 3 - Remover cadastro de usuario                 ====\n");
    printf("==== 4 - Listar usuarios cadastrados                 ====\n");
    printf("==== 0 - Sair                                        ====\n");
    printf("=========================================================\n");
    printf("=========================================================\n");
}

int calcularIdade(int anoNascimento){
    int anoAtual = 2024;
    return anoAtual - anoNascimento;
}

void incluirUsuario(){
    int anoNascimento;

    if (numUsuarios == MAX_USUARIOS) {
        printf("O cadastro esta cheio!\n");
        return;
    }
    
    printf("Nome: ");
    scanf("%s", usuarios[numUsuarios].nome);

    printf("Email: ");
    scanf("%s", usuarios[numUsuarios].email);

    printf("Ano de nascimento: ");
    scanf("%d", &anoNascimento);
    usuarios[numUsuarios].idade = calcularIdade(anoNascimento);

    printf("\n");

    printf("%s cadastrado com sucesso!\n\n", usuarios[numUsuarios].nome);
    numUsuarios++;
}

int buscarUsuario() {
    char nomeBusca[100];
    printf("Digite o nome: ");
    scanf("%s", nomeBusca);

    for (int i = 0; i < numUsuarios; i++) {
        if (strcmp(usuarios[i].nome, nomeBusca) == 0) {
            printf("Nome: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Idade: %d anos\n\n", usuarios[i].idade);
            return i;
            }
        }

    printf("%s nao encontrado no cadastro\n\n", nomeBusca);
    return -1;
}

void removerUsuario(){
    char nome[100];

    int indice = buscarUsuario(nome);

    if (indice == -1) {
    } else {
        for (int i = indice; i < numUsuarios -1; i++) {
            usuarios[i] = usuarios[i +1];
        }
        numUsuarios--;
        printf("Usuario removido com sucesso!\n\n", nome);
    }
}

void listarUsuarios(){
    for (int i = 0; i < numUsuarios; i++) {
        printf("Nome: %s\n", usuarios[i].nome);
        printf("Email: %s\n", usuarios[i].email);
        printf("Idade: %d\n\n", usuarios[i].idade);
    }  
}

int main() {
    int opcao;
    do{
        printf("1 - Incluir novo usuario\n");
        printf("2 - Buscar um usuario\n");
        printf("3 - Remover cadastro de usuario\n");
        printf("4 - Listar todos os usuario cadastrados\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                incluirUsuario();
                break;
            case 2:
                buscarUsuario();
                break;
            case 3:
                removerUsuario();
                break;
            case 4:
                listarUsuarios();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);
    return 0;
}