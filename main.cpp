#include "Campeonato/Campeonato.hpp"
#include "Time/Time.hpp"
#include "Jogador/Goleiro/Goleiro.hpp"
#include "Jogador/Zagueiro/Zagueiro.hpp"
#include "Jogador/Lateral/Lateral.hpp"
#include "Jogador/MeioCampista/MeioCampista.hpp"
#include "Jogador/Atacante/Atacante.hpp"

int main(){

    vector <Jogador*> listaJogadores;
    vector <Time> listaTimes;
    vector <Partida> listaPartidas;
    vector <Campeonato> listaCampeonatos;

    while (1){
        cout << "1. Adicionar dados de um jogador" << endl;
        cout << "2. Adicionar dados referentes a um time" << endl;
        cout << "3. Adicionar dados referentes a uma partida" << endl;
        cout << "4. Adicionar dados referentes a um campeonato" << endl;
        cout << "5. Associar um jogador a um time" << endl;
        cout << "6. Associar uma partida a um campeonato" << endl;
        cout << "7. Consultar dados de um campeonato" << endl;
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

            if(option == 1){
                Goleiro *jogador = new Goleiro(nome, numero, bday);
                listaJogadores.push_back(jogador);
            }

            if(option == 2){
                Zagueiro *jogador = new Zagueiro(nome, numero, bday);
                listaJogadores.push_back(jogador);
            }

            if (option == 3){
                Lateral *jogador = new Lateral(nome, numero, bday);
                listaJogadores.push_back(jogador);
            }

            if (option == 4){
                MeioCampista *jogador = new MeioCampista(nome, numero, bday);
                listaJogadores.push_back(jogador);
            }

            if(option == 5){
                Atacante *jogador = new Atacante(nome, numero, bday);
                listaJogadores.push_back(jogador);
            }
            
            cout << "Atletas cadastrados: " << endl;
            for (size_t i = 0; i < listaJogadores.size(); i++){
                listaJogadores.at(i)->ShowInfo();
            }
        }

        if (opt == 2){
            cout << "Informe o nome do time" << endl;
            string nome;
            cin >> nome;

            Time time(nome);
            listaTimes.push_back(time);

            cout << "Time cadastrado, resumo:" << endl;
            for (size_t i = 0; i < listaTimes.size(); i++){
                cout << "id Time: " << i+1 << endl
                     << "Nome Time: " << listaTimes.at(i).GetNome() << endl
                     << "-------------------------------------"
                     << endl;
            }
            

            continue;
        }

        if (opt == 3){
            if (listaTimes.size() < 2){
                cout << "Quantidade de times cadastrados insuficientes" << endl;
            } else {
                cout << "Informe a data da partida" << endl;
                string data;
                cin >> data;

                cout << "Informe o horario da partida" << endl;
                string horario;
                cin >> horario;

                Partida partida(data, horario);
                listaPartidas.push_back(partida);

                for (size_t i = 0; i < listaTimes.size(); i++){
                    cout << "idTime: " << i+1 << endl
                         << "Nome time: " << listaTimes.at(i).GetNome() << endl;
                }
                
                cout << "Informe o mandante da partida" << endl;
                size_t idMandante;
                cin >> idMandante;
                partida.SetMandante(&listaTimes.at(idMandante-1));

                cout << "Informe o visitante da partida" << endl;
                size_t idVisitante;
                cin >> idVisitante;
                partida.SetVisitante(&listaTimes.at(idVisitante-1));

                cout << "Resumo da partida:" << endl;
                partida.ShowInfo();
            }           

        }
        

        if (opt == 4){
           cout << "Informe o nome do campeonato" << endl;
           string nome;
           cin >> nome;

            Campeonato campeonato(nome);
            listaCampeonatos.push_back(campeonato);
            campeonato.ShowInfo();

            continue;
        }

        //Metodo AddJogador n está funcionando
        if (opt == 5){
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
                        listaJogadores.at(i)->ShowInfo();
                    }
                
                    cout << "Informe o id do jogador que será tranferido" << endl;
                    size_t idJogador;
                    cin >> idJogador;
                    Jogador* jogador = listaJogadores.at(idJogador - 1);

                    for (size_t i = 0; i < listaTimes.size(); i++){
                        cout << "id Time: " << i+1 << endl
                             << "Nome Time: " << listaTimes.at(i).GetNome() << endl
                             << "-------------------------------------"
                             << endl;
                    }

                    cout << "informe o id do time que o jogador esta sendo tranferido" << endl;
                    size_t idTime;
                    cin >> idTime;
                    Time time = listaTimes.at(idTime-1);

                    time.AddJogador(jogador);
                    time.ListarElenco();
                }
            }
            continue;
        }

        //A listagem de patidas com problemas de segmentation fault
        if (opt == 6){
            if (listaPartidas.empty()){
                cout << "nenhuma partida cadastrada" << endl;
                continue;                
            } else {
                if (listaCampeonatos.empty()){
                    cout << "nenhum campeonato cadastrado" << endl;
                    continue;
                } else {
                    for (size_t i = 0; i < listaPartidas.size(); i++){
                        cout << "id partida: " << i+1 << endl;
                        listaPartidas.at(i).ShowInfo();
                    }

                    cout << "informe o id da partida" << endl;
                    size_t idPartida;
                    cin >> idPartida;
                    Partida partida = listaPartidas.at(idPartida-1);

                    for (size_t i = 0; i < listaCampeonatos.size(); i++){
                        cout << "id campeonato: " << i+1 << endl
                             << " nome: " << listaCampeonatos.at(i).GetNome() << endl;
                    }                    
                    
                    cout << "informe o id do campeonato" << endl;
                    size_t idCampeonato;
                    cin >> idCampeonato;
                    Campeonato campeonato = listaCampeonatos.at(idCampeonato-1);

                    campeonato.AddPartida(&partida);
                    cout << "partidas cadastradas no(a) " << campeonato.GetNome() << endl;
                    campeonato.ListarPartidas();
                }
                
            }
            
            continue;
        }

        if (opt == 7){
            continue;
        }

        if (opt == 0){
            break;
        }
        
    }

    for (size_t i = 0; i < listaJogadores.size(); i++){
        delete listaJogadores.at(i);
    }
     
    
    return 0;
}