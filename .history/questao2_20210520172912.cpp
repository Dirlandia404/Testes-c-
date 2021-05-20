/*
Faça um programa que solicite ao usuário sua idade (em anos). Seu programa
deve definir e chamar uma função que recebe a idade e retorna o número de dias vividos até
o último aniversário. Exiba o resultado da chamada no programa
*/
#include <iostream>

int dias(int id);

int main(){
    std::cout<< dias(16) <<std::endl;
}

int dias(int ano){
    return 365 * ano;
}