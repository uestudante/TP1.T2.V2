#ifndef CNTRSERVICOAUTENTICACAO_HPP_INCLUDED
#define CNTRSERVICOAUTENTICACAO_HPP_INCLUDED

#include "interfaceServicoAutenticacao.hpp"

class CntrSAutenticacao: public ISAutenticacao {
public:
    bool autenticar(Codigo*, Senha&);
};

#endif // CNTRSERVICOAUTENTICACAO_HPP_INCLUDED
