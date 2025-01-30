#ifndef CNTRAPRESENTACAOAUTENTICACAO_HPP_INCLUDED
#define CNTRAPRESENTACAOAUTENTICACAO_HPP_INCLUDED

#include "dominios.hpp"
#include "interfaceApresentacaoConta.hpp"
#include "interfaceServicoConta.hpp"


class CntrAConta: public IAConta{
private:
    ISConta *cntrSConta;
public:
    void criar( );
    void executar(Codigo);
    void setCntrSConta(ISConta*);
};

inline void CntrAConta::setCntrSConta(ISConta *cntrSConta){
    this->cntrSConta = cntrSConta;
}


#endif // CNTRAPRESENTACAOCONTA_HPP_INCLUDED
