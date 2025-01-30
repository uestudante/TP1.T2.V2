#ifndef CNTRSERVICOCONTA_HPP_INCLUDED
#define CNTRSERVICOCONTA_HPP_INCLUDED

#include "interfaceServicoConta.hpp"

class CntrSConta: public ISConta {
public:
    bool criar(Conta);
    bool ler(Conta*);
    bool atualizar(Conta);
    bool excluir(Codigo);
};

#endif // CNTRSERVICOAUTENTICACAO_HPP_INCLUDED
