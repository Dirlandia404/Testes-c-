#include <iostream>
#include <cmath>

int main ()
{
    /*|--------------------------------------|
     *|                                      |
     *|           He4rt Developers           |
     *|                                      |
     *|--------------------------------------|
     */

    int x, y;
    std::cout << "Digite um numero: \n";
    std::cin >> x;

    std::cout << "Digite um outro numero: \n";
    std::cin >> y;

    std::cout << std::pow(x, 2); // Eleva algo a potencia, no caso o primeiro valor é elevado ao 2 valor
    std::cout << std::sqrt(x); // A raiz de x
    std::cout << std::hypot(x, y); // A raiz de (std::pow(x, 2) + std::pow(y,2))
    std::cout << std::abs(x + y);S/ A soma de x com y em módulo => |x + y|

    //cmath também possui outras funcionalidades, recomendamos acessar https://en.cppreference.com/w/cpp/header/cmath

}
