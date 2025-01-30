#ifndef INTERFACESERVICOCONTA_HPP_INCLUDED
#define INTERFACESERVICOCONTA_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"

class ISConta {
public:

    virtual bool criar(Conta) = 0;
    virtual bool ler(Conta*) = 0;
    virtual bool atualizar(Conta) = 0;
    virtual bool excluir(Codigo) = 0;
    virtual ~ISConta(){};
};

#endif // INTERFACESERVICOCONTA_HPP_INCLUDED
