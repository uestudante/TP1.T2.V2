#ifndef INTERFACEAPRESENTACAOAUTENTICACAO_HPP_INCLUDED
#define INTERFACEAPRESENTACAOAUTENTICACAO_HPP_INCLUDED

#include "interfaceServicoAutenticacao.hpp"
#include "dominios.hpp"
#include "entidades.hpp"

class IAAutenticacao {
public:
    virtual bool autenticar(Codigo*) = 0;
    virtual void setCntrSAutenticacao(ISAutenticacao*) = 0;
    virtual ~IAAutenticacao(){};
};

#endif // INTERFACEAPRESENTACAOAUTENTICACAO_HPP_INCLUDED
