#ifndef INTERFACESERVICOVIAGEM_HPP_INCLUDED
#define INTERFACESERVICOVIAGEM_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"

class ISViagem {
public:
    virtual bool viagem( ) = 0;   //Tem que implementar a lógica de negócio
    virtual ~ISViagem(){};
};

#endif // INTERFACESERVICOVIAGEM_HPP_INCLUDED
