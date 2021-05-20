/*
Escreva um programa em C++ que defina e teste uma função que dado dois
inteiros como parâmetro, calcule o valor do primeiro inteiro elevado ao segundo. Resolva a
potenciação aplicando multiplicações sucessivas
*/

#include <iostream>

int pow(int a, int b);

int main(){
    std::cout<< pow(2, 4)<< std::endl;
    return 0;
}
int pow(int a, int b){
    int resultado = a;

    for(int i=1; i<b; i++)
        resultado *= a;
        return resultado;
    
}