#include <iostream>
#include "cntrApresentacaoAutenticacao.hpp"

using namespace std;

bool CntrAAutenticacao::autenticar(Codigo *codigo){
    Senha senha;
    string entrada;

    while(true){
        try{
            cout<< "Digite sua senha: ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        }
        catch(const invalid_argument &exp){
            cout << endl << "Senha invalida. Digite novamente com uma senha valida" << endl;
        };
    }
    bool resultado = cntrSAutenticacao-> autenticar(codigo, senha);
    return resultado;
}


