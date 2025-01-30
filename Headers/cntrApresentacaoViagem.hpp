#ifndef CNTRAPRESENTACAOVIAGEM_HPP_INCLUDED
#define CNTRAPRESENTACAOVIAGEM_HPP_INCLUDED

#include "dominios.hpp"
#include "interfaceApresentacaoViagem.hpp"
#include "interfaceServicoViagem.hpp"


class CntrAViagem: public IAViagem{
private:
    ISViagem *cntrSViagem;
public:
    void executar(Codigo);
    void setCntrSViagem(ISViagem*);

};

inline void CntrAViagem::setCntrSViagem(ISViagem *cntrSViagem){
    this->cntrSViagem = cntrSViagem;
}


#endif // CNTRAPRESENTACAOCONTA_HPP_INCLUDED
