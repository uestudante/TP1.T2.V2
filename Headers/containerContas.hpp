#ifndef CONTAINERCONTAS_HPP_INCLUDED
#define CONTAINERCONTAS_HPP_INCLUDED

#include <list>
#include "entidades.hpp"
#include "dominios.hpp"

using namespace std;

class ContainerContas{
private:
    list<Conta> container;
    static ContainerContas *instancia;
    ContainerContas();
public:
    static ContainerContas* getInstancia(){
        if(instancia== nullptr){
            instancia = new ContainerContas();
        }
        return instancia;
    }

    bool criar(Conta);
    bool excluir(Codigo&);
    Conta ler(Codigo*);
    bool atualizar(Conta);
    bool autenticar(Codigo*, Senha&);
};

#endif // CONTAINERCONTAS_HPP_INCLUDED
