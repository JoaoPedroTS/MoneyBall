#include "Campeonato.hpp"
#include "Goleiro.hpp"
#include "Zagueiro.hpp"

int main(){

    vector <Jogador> listaJogadores;
    vector <Time> listaTimes;
    vector <Campeonato> listaCampeonatos;

    while (1){
        cout << "1. Adicionar dados de um jogador" << endl;
        cout << "2. Adicionar dados referentes a um time" << endl;
        cout << "3. Adicionar dados referentes a um campeonato" << endl;
        cout << "4. Associar um jogador a um time" << endl;
        cout << "5. Associar um time a um campeonato" << endl;
        cout << "6. Consultar dados de um campeonato" << endl;
        cout << "0. Sair" << endl;

        size_t opt;
        cin >> opt;

        if (opt == 1){
            cout << "Informe o nome do jogador" << endl;
            string nome;
            cin >> nome;

            cout << "Informe o número do jogador" << endl;
            size_t numero;
            cin >> numero;

            cout << "Informe a data de nascimento" << endl;
            string bday;
            cin >> bday;

            cout << "informe  qual a posição do jogador" << endl;

            cout << "1. Goleiro" << endl;
            cout << "2. Zagueiro" << endl;
            cout << "3. Lateral" << endl;
            cout << "4. Meio Campo" << endl;
            cout << "5. Atacante" << endl;
            
            size_t option;
            cin >> option;

            Jogador jogador(nome, numero, bday);
            listaJogadores.push_back(jogador);
        }

        if (opt == 2){
            cout << "Informe o nome do time" << endl;
            string nome;
            cin >> nome;

            Time time(nome);
            listaTimes.push_back(time);

            continue;
        }

        if (opt == 3){
           cout << "Informe o nome do campeonato" << endl;
           string nome;
           cin >> nome;

            Campeonato campeonato(nome);
            listaCampeonatos.push_back(campeonato);

            continue;
        }

        //A listagem de jogadores esta exibindo ponteiros
        if (opt == 4){
            if (listaJogadores.empty()){
                cout << "nenhum jogador cadastrado" << endl;
                continue;
            } else {
                if (listaTimes.empty()){
                cout << "nenhum time cadastrado" << endl;
                continue;
                } else {
                    for (size_t i = 0; i < listaJogadores.size(); i++){
                        cout << "id do jogador: " << i+1 << endl;
                        listaJogadores.at(i).ShowInfo();
                    }
                
                    cout << "Informe o id do jogador que será tranferido" << endl;
                    size_t idJogador;
                    cin >> idJogador;
                    Jogador jogador = listaJogadores.at(idJogador - 1);

                    for (size_t i = 0; i < listaTimes.size(); i++){
                        cout << "id Time: " << i+1 << endl;
                        listaTimes.at(i).GetNome();                    
                    }

                    cout << "informe o id do time que o jogador esta sendo tranferido" << endl;
                    size_t idTime;
                    cin >> idTime;
                    Time time = listaTimes.at(idTime-1);

                    time.AddJogador(&jogador);
                    cout << "elenco do " << time.GetNome() << endl;
                    time.ListarElenco();
                }
            }
            continue;
        }

        //A listagem de times esta exibindo ponteiros
        if (opt == 5){
            if (listaTimes.empty()){
                cout << "nenhum time cadastrado" << endl;
                continue;                
            } else {
                if (listaCampeonatos.empty()){
                    cout << "nenhum campeonato cadastrado" << endl;
                    continue;
                } else {
                    for (size_t i = 0; i < listaTimes.size(); i++){
                        cout << "id time: " << i+1 << " nome: " << listaTimes.at(i).GetNome() << endl;
                    }

                    cout << "informe o id do time" << endl;
                    size_t idTime;
                    cin >> idTime;
                    Time time = listaTimes.at(idTime-1);

                    for (size_t i = 0; i < listaCampeonatos.size(); i++){
                        cout << "id campeonato: " << i+1 << " nome: " << listaCampeonatos.at(i).GetNome() << endl;
                    }                    
                    
                    cout << "informe o id do campeonato" << endl;
                    size_t idCampeonato;
                    cin >> idCampeonato;
                    Campeonato campeonato = listaCampeonatos.at(idCampeonato-1);

                    campeonato.AddTime(&time);
                    cout << "Times inscritos no(a) " << campeonato.GetNome() << endl;
                    campeonato.ListarIncritos();
                }
                
            }
            
            continue;
        }

        if (opt == 6){
            continue;
        }

        if (opt == 0){
            break;
        }
        
    }    
    
    return 0;
}