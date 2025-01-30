#ifndef INTERFACEAPRESENTACAOCONTA_HPP_INCLUDED
#define INTERFACEAPRESENTACAOCONTA_HPP_INCLUDED

#include "interfaceServicoConta.hpp"
#include "dominios.hpp"
#include "entidades.hpp"

class IAConta {
public:

    virtual void criar( ) = 0;
    virtual void executar(Codigo) = 0;
    virtual void setCntrSConta(ISConta*) = 0;
    virtual ~IAConta(){};
};

#endif // INTERFACEAPRESENTACAOCONTA_HPP_INCLUDED
