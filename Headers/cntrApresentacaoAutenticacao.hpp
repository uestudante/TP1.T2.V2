#ifndef CNTRAPRESENTACAOAUTENTICACAO_HPP_INCLUDED
#define CNTRAPRESENTACAOAUTENTICACAO_HPP_INCLUDED

#include "dominios.hpp"
#include "interfaceApresentacaoAutenticacao.hpp"
#include "interfaceServicoAutenticacao.hpp"


class CntrAAutenticacao: public IAAutenticacao{
private:
    ISAutenticacao *cntrSAutenticacao;
public:
    bool autenticar(Codigo*);
    void setCntrSAutenticacao(ISAutenticacao*);
};

inline void CntrAAutenticacao::setCntrSAutenticacao(ISAutenticacao *cntrSAutenticacao){
    this->cntrSAutenticacao = cntrSAutenticacao;
}


#endif // CNTRAPRESENTACAOAUTENTICACAO_HPP_INCLUDED
