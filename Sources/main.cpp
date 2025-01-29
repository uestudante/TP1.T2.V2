#include <iostream>
#include <stdexcept>
#include <string>
#include "dominios.hpp"
//#include "testes.hpp"
#include "entidades.hpp"
#include "ModuloApresentacao.hpp"


using namespace std;

int main() {

    Apresentacao *apresentar = new Apresentacao();
    apresentar->executar();

    return 0;
}
