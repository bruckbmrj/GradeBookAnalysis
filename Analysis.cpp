//defini��es de fun��o-membro para a classe Analysis que
//analisa osresultados do teste.
#include <iostream>
using namespace std;
//inclui a defini��o de classe Analysis a partir de Analysis.h
#include "Analysis.h"

//processa os resultados do teste de 10 alunos

void Analysis::processExamResults()
{
    //inicializando vari�veis nas declara��es
    int passes = 0; //numero de aprova��es
    int failures = 0; //numeros de reprova��es
    int StudentCounter = 1; // contador de alunos
    int result; //o resultado de um teste ( 1 = aprovado, 2 = reprovado)

    //processa 10 alunos utilizando o loop controlado por contador
    while(StudentCounter <=10)
    {
        //solicita ao usuario uma entrada e obtem valor fornecido pelo usuario
        cout<<"Enter result (1 = pass, 2 = fail): ";
        cin>> result; //l� o resultado

        //if...else aninhado em while
        if(result == 1) //se o resultado for 1,
            passes = passes + 1; //incrementa aprova��es;
        else            //sen�o resultado n�o for 1,ent�o
            failures = failures + 1; //incrementa reprova��es

        //incrementa studentCounter at� o loop terminar
        StudentCounter = StudentCounter + 1;

    } //fim do while

    //fase de termina��o; exibe numero de aprovados e reprovados
    cout<< "Passed" << passes << "\nFailed" << failures << endl;

    //determina se mais de oito alunos passaram
    if (passes > 8)
        cout<<"raise tuition" <<endl;
} // fim da fun��o processExamResults
