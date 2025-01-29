#include "ModuloApresentacao.hpp"


using namespace std;

void Apresentacao::executar(){

    IAAutenticacao *cntrAAutenticacao = new CntrAAutenticacao();
    ISAutenticacao *cntrSAutenticacao = new CntrSAutenticacao();

    cout << "Seja bem vindo(a)" << endl;

    while(true){
        int valor;
        cout << endl << "Escolha uma opcao: " << endl;
        cout << "1 - Criar uma conta" << endl;
        cout << "2 - Autenticar-se" << endl;
        cout << "3 - Sair" << endl;
        cin >> valor;

        switch(valor){
        case 1:
            // em breve
            break;
        case 2:
            Codigo codigo;
            while (true){
                try{
                    string entrada;
                    cout << "Digite seu codigo: ";
                    cin >> entrada;
                    codigo.setValor(entrada);
                    break;
                }
                catch(const invalid_argument &exp){
                    cout << endl
                        << "Codigo invalido, digite novamente: "
                        << endl;

                }
            }

            bool resultado;
            resultado = cntrAAutenticacao->autenticar(&codigo);

            if(resultado){
                while(true){
                    cout << "Em construcao" << endl;
                }
            }
            else{
                cout << "Falha na autenticacao" << endl;
            }
            break;
        }
        if(valor == 3){
            break;
        }
    }

}
