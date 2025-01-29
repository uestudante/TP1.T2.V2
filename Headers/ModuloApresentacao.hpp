#ifndef MODULOAPRESENTACAO_HPP_INCLUDED
#define MODULOAPRESENTACAO_HPP_INCLUDED

#include <iostream>
#include "dominios.hpp"
#include "entidades.hpp"
#include "cntrApresentacaoAutenticacao.hpp"
#include "cntrServicoAutenticacao.hpp"
#include "containerContas.hpp"
#include "interfaceServicoAutenticacao.hpp"
#include "interfaceApresentacaoAutenticacao.hpp"

class Apresentacao {
private:
    IAAutenticacao *cntrAAutenticacao;
public:
    void executar();
};

#endif // MODULOAPRESENTACAO_HPP_INCLUDED
