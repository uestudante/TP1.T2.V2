#include "cntrServicoAutenticacao.hpp"
#include "containerContas.hpp"

bool CntrSAutenticacao:: autenticar(Codigo* codigo, Senha &senha){
    bool resultado;
    ContainerContas *containerContas = ContainerContas:: getInstancia();
    resultado = containerContas-> autenticar(codigo, senha);

    if(resultado)
        return true;
    else
        return false;
}
