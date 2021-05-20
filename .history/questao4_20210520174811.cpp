/*
Teste a função TROCA definida na questão 6 anterior para ordenar três nú-
meros inteiros A, B e C lidos do usuário. Você poderá assumir que, ao final, as variáveis
estarão com valores trocados, de maneira que: A <= B <= C
*/

#include <iostream>

void troca(int& a, int& b, int& c);

int main(){
    int a = 3, b = 8, c = 5 ;
    std::cout<< "Valor de A = "<< a << " Valor de B ="<< b << " Valor de C ="<<c <<std::endl;
    troca(a, b, c);
    std::cout<< "Valor de A = "<< a << " Valor de B ="<< b << " Valor de C ="<<c <<std::endl;
}
void troca(int& a, int& b, int& c){
    if(b<=a){
        std::swap(a,b);
    }
    if(c<=b){
        std::swap(c,b);
        if(b<=a)
            std::swap(b,a);
    }
}