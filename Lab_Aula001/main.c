#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Vetores e Strings (strlen, strupr, strcpy, strcat, strchr)

//Exercicio 01 Faça um programa que solicite ao usuario 8 numeros e armazene-os em um vetos. Imprima o vetor criado e a soma de todos os numeros armazenados
int primeiroExercicio(){
    int vet[8], i;
    int soma = 0;
    printf("Digite 8 numeros inteiros: \n");
    for(i = 0; i<8;i++){
        scanf("%d", &vet[i]);
        soma = soma + vet[i];
    }
    printf("soma: %d", soma);

    printf("\n****** Vetor Criado! ******\n");
    for(i = 0; i < 8; i++){
        printf("%d - ", vet[i]);
    }
}

//Exercicio 02 Gere 10 numeros aleatorios entre 1 e 50 e armazene-os em um vetor A. Em seguida crie um vetor B e armazene os numeros do vetor A na ordem inversa
int segundoExercicio(){
    int vetorA[10],
        vetorB[10],
        vetorC[10],
        i = 0,
        j = 9;

    printf("--------------------Vetor A--------------------\n");

    for(i; i < 10; i++){
        vetorA[i] = rand()%50;
        printf("%d - ", vetorA[i]);
    }

    printf("\n");

    i = 0;

    printf("--------------------Vetor B--------------------\n");

    for(i, j; i < 10; i++, j--){
        vetorB[i] = vetorA[j];
        printf("%d - ", vetorB[i]);
    }
}

//Exercicio 03 Gere um vetor com 150 numeros inteirois aleatorios com valores entre 1 e 2000. Em seguida, realize as seguintes operações
//a - Somatoria dos numeros
//b - Media dos numeros
//c - Encontre a quantidade de numeros que sao maiores do que 100
//d - Exiba o resultado das operações acima e o valor armazenado na posição 100 do vetor
int terceiroExercicio(){
    int vetorA[150],
        i = 0,
        soma = 0,
        media = 0,
        quantidadeMaiorQue100 = 0;

    srand(time(NULL));

    printf("--------------------Vetor A--------------------\n");
    for(i; i < 150; i++){
        vetorA[i] = rand()%2000;
        printf("%d - ", vetorA[i]);
    }

    i = 0;

    //Somatório dos numeros
    for(i; i < 150; i++){
        soma = soma + vetorA[i];
    }

    //Media dos numeros
    media = soma / 150;

    //Quantidade de numeros que são maiores que 100
    i = 0;
    for(i; i < 150; i++){
        if(vetorA[i] > 100){
            quantidadeMaiorQue100++;
        }
    }

    //Exibe os resultados e o endereço vetorA[100]
    printf("\n\nSoma: %d\n", soma);
    printf("\nMedia: %d\n", media);
    printf("\nQuantidade de numeros maiores que 100: %d\n", quantidadeMaiorQue100);
    printf("\nValor armazenado na posicao 100: %d\n", vetorA[100]);
}


//Exercicio 04 Faça um programa quye solicite ao usuario 10 numeros e armazene-os em um vetor A. Em seguida, encontre os numeros pares existentes no vetor A e salve-os em um vetor B e os numeros impares em um vetor C. Imprima os vetores criados
int quartoExercicio(){
    int vetorA[10],
        vetorB[10],
        vetorC[10],
        i = 0,
        j = 0,
        k = 0;

    printf("Insira 10 numeros\n");
    for(i; i<10; i++){
        scanf("%d", &vetorA[i]);
        if(vetorA[i]%2 == 0){
            vetorB[j] = vetorA[i]; //Vetor par
            j++;
        }else{
            vetorC[k] = vetorA[i]; //Vetor impar
            k++;
        }
    }
    //Imprime Vetores criados
    i = 0;

    printf("\nVetor A: ");
    for(i; i<10; i++){
        printf("%d - ", vetorA[i]);
    }
    i = 0;
    printf("\nVetor B: ");
    for(i; i<j; i++){
        printf("%d - ", vetorB[i]);
    }
    i = 0;
    printf("\nVetor C: ");
    for(i; i<k; i++){
        printf("%d - ", vetorC[i]);
    }
}

//Exercicio 05 - Solicite ao usuario que digite uma frase. Transforme todas as letras da frase em maiusculas e mostre como ficou. Exiba também o tamanho da string
int quintoExercicio(){
    char frase[100];
    int i = 0,
    j = 0;

    printf("Digite uma frase de ate 100 palavras\n");
    gets(frase);

    for(i = 0; i < 100; i++){
        if(frase[i] >= 97 && frase[i] <= 122){
            frase[i] = frase[i] - 32;
        }
    }
    puts(frase);

    j = strlen(frase);
    printf("Tamanho da frase %d", j);
}

//Exercicio 06 - Solicite ao usuario que digite duas frases. Em seguida faça:
//Concatene as duas frases em uma só string e exiba o resultado
//Exiba o tamanho da string criada
//Exiba a substring com a primeira ocorrencia da letra 'a'
int sextoExercicio(){
    char primeiraFrase[100],
        segundaFrase[100],
        fraseResultante[200],
        ultimaFrase[200];

    memset( primeiraFrase, '\0', 100 );
    memset( segundaFrase, '\0', 100 );
    memset( fraseResultante, '\0', 200 );
    memset( ultimaFrase, '\0', 200 );


    int tamanho = 0,
        i = 0,
        j = 0,
        ocorrenciaA;

    printf("Digite a primeira frase \n");
    gets(primeiraFrase);
    printf("Digite a segunda frase \n");
    gets(segundaFrase);

    //Concatena as duas strings resultantes
    strcat(fraseResultante, primeiraFrase);
    strcat(fraseResultante, segundaFrase);

    fflush(stdin);

    puts(fraseResultante);

    tamanho = strlen(fraseResultante);
    printf("Tamanho da frase resultante: %d", tamanho);

    ocorrenciaA = strchr(fraseResultante, 'a');
    if(ocorrenciaA){
        printf("\nPrimeira ocorrencia a %s\n", ocorrenciaA);
    }else{
        printf("\nNao existe a na sua frase");
    }
}

int main()
{
    quartoExercicio(); //Nome do exercicio
}
