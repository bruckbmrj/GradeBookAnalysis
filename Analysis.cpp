//definições de função-membro para a classe Analysis que
//analisa osresultados do teste.
#include <iostream>
using namespace std;
//inclui a definição de classe Analysis a partir de Analysis.h
#include "Analysis.h"

//processa os resultados do teste de 10 alunos

void Analysis::processExamResults()
{
    //inicializando variáveis nas declarações
    int passes = 0; //numero de aprovações
    int failures = 0; //numeros de reprovações
    int StudentCounter = 1; // contador de alunos
    int result; //o resultado de um teste ( 1 = aprovado, 2 = reprovado)

    //processa 10 alunos utilizando o loop controlado por contador
    while(StudentCounter <=10)
    {
        //solicita ao usuario uma entrada e obtem valor fornecido pelo usuario
        cout<<"Enter result (1 = pass, 2 = fail): ";
        cin>> result; //lê o resultado

        //if...else aninhado em while
        if(result == 1) //se o resultado for 1,
            passes = passes + 1; //incrementa aprovações;
        else            //senão resultado não for 1,então
            failures = failures + 1; //incrementa reprovações

        //incrementa studentCounter até o loop terminar
        StudentCounter = StudentCounter + 1;

    } //fim do while

    //fase de terminação; exibe numero de aprovados e reprovados
    cout<< "Passed" << passes << "\nFailed" << failures << endl;

    //determina se mais de oito alunos passaram
    if (passes > 8)
        cout<<"raise tuition" <<endl;
} // fim da função processExamResults
