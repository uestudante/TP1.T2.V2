#include "containerContas.hpp"

ContainerContas *ContainerContas::instancia = nullptr;
bool ContainerContas::criar(Conta conta){
    for(list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if(elemento->getCodigo().getValor() == conta.getCodigo().getValor())
            return false;
    }
    container.push_back(conta);
    return true;
}

bool ContainerContas::excluir(Codigo &codigo){
    for(list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if(elemento->getCodigo().getValor() == codigo.getValor()){
            container.erase(elemento);

            // acrescentar codigo se tiver viagem, para remover a viagem;
            return true;
        }
    }
    return false;
}

Conta ContainerContas::ler(Codigo *codigo){
    Conta conta;
    for(list<Conta>::iterator elemento = container.begin(); elemento!= container.end(); elemento++){
        if(elemento-> getCodigo().getValor() == codigo->getValor()){
            conta.setCodigo(elemento->getCodigo());
            conta.setSenha(elemento->getSenha());
            return conta;
        }
    }
}

bool ContainerContas::atualizar(Conta conta){
    for(list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if(elemento->getCodigo().getValor()== conta.getCodigo().getValor()){
            *elemento = conta;
            return true;
        }
    }
    return false;
}

bool ContainerContas:: autenticar(Codigo *codigo, Senha &senha){
    for(list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++){
        if(elemento->getCodigo().getValor() == codigo->getValor() &&
        elemento->getSenha().getSenha() == senha.getSenha()){
            return true;
        }
    }
    return false;
}

ContainerContas::ContainerContas(){};


