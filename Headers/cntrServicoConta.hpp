#ifndef CNTRSERVICOAUTENTICACAO_HPP_INCLUDED
#define CNTRSERVICOAUTENTICACAO_HPP_INCLUDED

#include "interfaceServicoAutenticacao.hpp"

class CntrSConta: public ISConta {
public:
    bool criar(Conta);
    bool ler(Conta*);
    bool atualizar(Conta);
    bool excluir(Codigo);
};

#endif // CNTRSERVICOAUTENTICACAO_HPP_INCLUDED
