#ifndef INTERFACESERVICOVIAGEM_HPP_INCLUDED
#define INTERFACESERVICOVIAGEM_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"

class ISViagem {
public:
    virtual bool viagem( ) = 0;   //Tem que implementar a l�gica de neg�cio
    virtual ~ISViagem(){};
};

#endif // INTERFACESERVICOVIAGEM_HPP_INCLUDED
