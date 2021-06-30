// Chatbot básico (Atividade sem pontuação)
// Crie um programa em C/C++ que faça e responda as perguntas digitadas pelo usuário.

// Pergunta do usuário: "Qual o seu nome?"

// Resposta: "Jarvis"

// Pergunta do usuário: "Qual a sua idade?"

// Resposta: Deve ser o número de dias que o programa foi executado pela primeira vez.

// Qualquer pergunta diferente destas deve ser respondida com: "Ainda não aprendi esta resposta. No futuro aprenderei"

// Após finalizado o programa poderá ser enviado utilizando um arquivo compactado.

#include <stdio.h>
#include <string.h>
#include<conio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    char pergunta[30], pergunta1[30], pergunta2[30];
    int ret1, ret2, n, idade;

    n = 0;

    printf("\nFaca sua pergunta: ");
    scanf("%[^\n]", pergunta);

    strcpy(pergunta1, "Qual o seu nome");
    strcpy(pergunta2, "Qual sua idade");


    ret1 = strcmp(pergunta1, pergunta);
    ret2 = strcmp(pergunta2, pergunta);


        if(n == 0){
        
        if(ret1 == 0)
            printf("\nJarvis");
        if(ret2 == 0){
            time_t t = time(NULL);
            struct tm tm = *localtime(&t);
            printf("Minha idade e de: %d dias\n", (tm.tm_mday) - 24);
            }
        }
        
        else
            printf("\nAinda não aprendi esta resposta. No futuro aprenderei");

    return 0;
}