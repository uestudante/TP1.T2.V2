#include "entidades.hpp"
#include "dominios.hpp"

void Conta::setCodigo(Codigo c) {
    this->codigo = c;
};
void Conta::setSenha(Senha s) {
    this->senha = s;
};
Codigo Conta::getCodigo() const {
    return codigo;
};
Senha Conta::getSenha() const {
    return senha;
};
