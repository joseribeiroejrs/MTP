#include <stdio.h>
#include <stdlib.h>

struct aluno{
    char nome[30],
        serie[10];
    float notaMatematica,
        notaPortugues,
        notaGeografia,
        media;
}alunos[30];

struct carro{
    char modelo[30],
        tipoDeCombustivel[30],
        cor[20];
    int ano,
        novoOuNao,
        quantidadeDePortas;
}carro1;

struct garagem{
    int quantidadeDeCarros;
    struct carro carros[100];
}garagemEmpresario;

float calculaMediaNotas(float notaMatematica,
                            float notaPortugues,
                            float notaGeografia)
{ //Calcula Media das 3 notas do Aluno
    float media;
    media = (notaMatematica + notaPortugues + notaGeografia)/3;
    return media; //Retorna Media Calculada
}

void exercicio01(){
    int resposta,
        posicao = 0;

    //Pega dados dos alunos
    do{
        int i = 0;

        fflush(stdin);
        system("cls");
        printf("--------------------------------------\n");
        printf("------------Dados do ALUNO------------\n");
        printf("--------------------------------------\n");
        printf("Digite o NOME do Aluno %d\n", posicao + 1);
        gets(alunos[posicao].nome);
        printf("Digite a SERIE do Aluno %d, em inteiros\n", posicao + 1);
        gets(alunos[posicao].serie);
        printf("Digite a NOTA do aluno %d em MATEMATICA\n", posicao + 1);
        scanf("%f", &alunos[posicao].notaMatematica);
        printf("Digite a NOTA do aluno %d em PORTUGUES\n", posicao + 1);
        scanf("%f", &alunos[posicao].notaPortugues);
        printf("Digite a NOTA do aluno %d em GEOGRAFIA\n", posicao + 1);
        scanf("%f", &alunos[posicao].notaGeografia);

        alunos[posicao].media = calculaMediaNotas(alunos[posicao].notaMatematica,
                                                  alunos[posicao].notaPortugues,
                                                  alunos[posicao].notaGeografia);

        fflush(stdin);
        system("cls");

        if(posicao < 4){ //A variavel posicao eh incrementada apenas no final da funcao
          resposta = 1;
        }else{//quando for preenchido os 5 alunos, imprime os dados recolhidos
          printf("--------------------------------------\n");
          printf("-----------Dados dos ALUNOS-----------\n");
          printf("--------------------------------------\n");

          for(i; i <= posicao; i++){
                printf("Nome: ");
                puts(alunos[i].nome);
                printf("Serie: ");
                puts(alunos[i].serie);
                printf("Nota em Matematica: %.2f \n", alunos[i].notaMatematica);
                printf("Nota em Portugues: %.2f \n", alunos[i].notaPortugues);
                printf("Nota em Geografia: %.2f \n", alunos[i].notaGeografia);
                printf("Media: %.2f \n", alunos[i].media);
                printf("--------------------------------------\n");
          }

          printf("Deseja cadastrar novamente?\n0 - Para NAO\n1 - Para SIM\n");
          scanf("%d", &resposta);
        }
    posicao++;
    }while(resposta);
}

void exercicio03(){
    int resposta;
    //Pega dados da Garagem do Empresario
    do{
       system("cls");
       printf("--------------------------------------\n");
       printf("------------Dados do VEICULO----------\n");
       printf("--------------------------------------\n");
       fflush(stdin);
       printf("Digite o MODELO do carro\n");
       gets(carro1.modelo);
       printf("Digite o ANO do carro\n");
       scanf("%d", &carro1.ano);
       printf("Digite a QUANTIDADE DE PORTAS do carro\n");
       scanf("%d", &carro1.quantidadeDePortas);
       fflush(stdin);
       printf("Digite a COR do carro\n");
       gets(carro1.cor);
       printf("Digite o TIPO DE COMBUSTIVEL do carro\n");
       gets(carro1.tipoDeCombustivel);
       do{
            printf("Digite:\n1 - Se o carro for novo\n2 - Se NAO for novo\n");
            scanf("%d", &carro1.novoOuNao);
       }while(carro1.novoOuNao != 1 && carro1.novoOuNao != 2);

       system("cls");
       //Imprime dados da Garagem do Empresario
       printf("--------------------------------------\n");
       printf("------------Dados do VEICULO----------\n");
       printf("--------------------------------------\n");
       printf("Modelo: ");
       puts(carro1.modelo);
       printf("Ano: %d \n", carro1.ano);
       printf("Quantidade de Portas: %d", carro1.quantidadeDePortas);
       printf("\nCor: ");
       puts(carro1.cor);
       printf("Tipo de Combustivel: ");
       puts(carro1.tipoDeCombustivel);
       if(carro1.novoOuNao == 1){
            printf("O Carro eh NOVO\n");
       }else{
            printf("O Carro NAO EH NOVO\n");
       }
       fflush(stdin);
       printf("--------------------------------------");
       printf("\n\nDeseja realizar o processo novamente?\n0 - Para Sair\n1 - Para Realizar novamente\n");
       scanf("%d", &resposta);
    }while(resposta);
}

void exercicio04(){
   system("cls");

   int resposta;

   int i = 0;
   printf("Digite o Numero de Veiculos na Garagem\n");
   scanf("%d", &garagemEmpresario.quantidadeDeCarros);
   for(i; i < garagemEmpresario.quantidadeDeCarros; i++){
       system("cls");
       printf("--------------------------------------\n");
       printf("------------Dados do VEICULO----------\n");
       printf("--------------------------------------\n");
       fflush(stdin);
       printf("Digite o MODELO do carro\n");
       gets(garagemEmpresario.carros[i].modelo);
       printf("Digite o ANO do carro\n");
       scanf("%d", &garagemEmpresario.carros[i].ano);
       printf("Digite a QUANTIDADE DE PORTAS do carro\n");
       scanf("%d", &garagemEmpresario.carros[i].quantidadeDePortas);
       fflush(stdin);
       printf("Digite a COR do carro\n");
       gets(garagemEmpresario.carros[i].cor);
       printf("Digite o TIPO DE COMBUSTIVEL do carro\n");
       gets(garagemEmpresario.carros[i].tipoDeCombustivel);
       do{
            printf("Digite:\n1 - Se o carro for novo\n2 - Se NAO for novo\n");
            scanf("%d", &garagemEmpresario.carros[i].novoOuNao);
       }while(garagemEmpresario.carros[i].novoOuNao != 1 && garagemEmpresario.carros[i].novoOuNao != 2);
   }

       i = 0;

       system("cls");

       printf("--------------------------------------\n");
       printf("------------Dados do VEICULO----------\n");
       printf("--------------------------------------\n");

       for(i; i<garagemEmpresario.quantidadeDeCarros; i++){
           printf("Modelo: ");
           puts(garagemEmpresario.carros[i].modelo);
           printf("Ano: %d \n", garagemEmpresario.carros[i].ano);
           printf("Quantidade de Portas: %d", garagemEmpresario.carros[i].quantidadeDePortas);
           printf("\nCor: ");
           puts(garagemEmpresario.carros[i].cor);
           printf("Tipo de Combustivel: ");
           puts(garagemEmpresario.carros[i].tipoDeCombustivel);
           if(garagemEmpresario.carros[i].novoOuNao == 1){
                printf("O Carro eh NOVO\n");
           }else{
                printf("O Carro NAO EH NOVO\n");
           }
           fflush(stdin);
           printf("--------------------------------------");
       }
}

int main()
{
    exercicio01();
    exercicio03();
    exercicio04();
    return 0;
}
