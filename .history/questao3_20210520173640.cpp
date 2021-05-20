/*
Escreva um procedimento chamado TROCA que receba 2 variáveis inteiras (A
e B) e troque o conteúdo entre elas. Defina e teste a chamada do método em um programa
C++
*/

#include <iostream>

void troca(int& a, int& b);

int main(){
    int a = 2, b = 3;

    std::cout<< "Valor de a =" <<a << " Valor de B ="<< b <<std:: endl;
    std::cout<< troca(a, b) <<std:: endl;
    std::cout<< "Valor de a =" <<a << " Valor de B ="<< b <<std:: endl;
}
void troca(int& a, int& b){
    int aux = a;
    a = b;
    b = aux;
}