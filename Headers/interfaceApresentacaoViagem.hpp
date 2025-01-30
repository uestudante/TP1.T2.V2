#ifndef INTERFACEAPRESENTACAOVIAGEM_HPP_INCLUDED
#define INTERFACEAPRESENTACAOVIAGEM_HPP_INCLUDED

#include "interfaceServicoViagem.hpp"
#include "dominios.hpp"
#include "entidades.hpp"

class IAViagem {
public:

    virtual void executar(Codigo) = 0;
    virtual void setCntrSViagem(ISViagem*) = 0;
    virtual ~IAViagem(){};
};

#endif // INTERFACEAPRESENTACAOVIAGEM_HPP_INCLUDED
