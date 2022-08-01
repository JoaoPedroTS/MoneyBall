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
        cout << "7. Resumo da partida" << endl;
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
                listaJogadores.push_back((jogador));
            }

            if(option == 2){
                Zagueiro *jogador = new Zagueiro(nome, numero, bday);
                listaJogadores.push_back((jogador));
            }

            if (option == 3){
                Lateral *jogador = new Lateral(nome, numero, bday);
                listaJogadores.push_back((jogador));
            }

            if (option == 4){
                MeioCampista *jogador = new MeioCampista(nome, numero, bday);
                listaJogadores.push_back((jogador));
            }

            if(option == 5){
                Atacante *jogador = new Atacante(nome, numero, bday);
                listaJogadores.push_back((jogador));
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
                if (idMandante == idVisitante){
                    cout << "Erro, times iguais" << endl;
                    continue;
                } else {
                    cin >> idVisitante;
                    partida.SetVisitante(&listaTimes.at(idVisitante-1));
                }                

                cout << "Resumo da partida:" << endl;
                partida.ShowInfo();
                
                listaPartidas.push_back(partida);
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

        if (opt == 5){
            if (listaJogadores.size() == 0){
                cout << "nenhum jogador cadastrado" << endl;
                continue;
            } else {
                if (listaTimes.size() == 0){
                    cout << "nenhum time cadastrado" << endl;
                    continue;
                } 
                else {
                    for (size_t i = 0; i < listaJogadores.size(); i++){
                        cout << "id do jogador: " << i+1 << endl;
                        listaJogadores.at(i)->ShowInfo();
                    }
                
                    cout << "Informe o id do jogador que será tranferido" << endl;
                    size_t idJogador;
                    cin >> idJogador;
                    Jogador* jogador = listaJogadores.at(idJogador - 1); //

                    for (size_t i = 0; i < listaTimes.size(); i++){
                        cout << "id Time: " << i+1 << endl
                             << "Nome Time: " << listaTimes.at(i).GetNome() << endl
                             << "-------------------------------------"
                             << endl;
                    }

                    cout << "informe o id do time que o jogador esta sendo tranferido" << endl;
                    size_t idTime;
                    cin >> idTime;
                    
                    listaTimes.at(idTime-1).AddJogador(jogador);
                    listaTimes.at(idTime-1).ListarElenco();
                }
            }
            continue;
        }
        
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

                    for (size_t i = 0; i < listaCampeonatos.size(); i++){
                        cout << "id campeonato: " << i+1 << endl
                             << " nome: " << listaCampeonatos.at(i).GetNome() << endl;
                    }                    
                    
                    cout << "informe o id do campeonato" << endl;
                    size_t idCampeonato;
                    cin >> idCampeonato;
                    listaCampeonatos.at(idCampeonato-1).AddPartida(&listaPartidas.at(idPartida-1));  

                    cout << "partidas cadastradas no(a) " << listaCampeonatos.at(idCampeonato-1).GetNome() << endl;
                    listaCampeonatos.at(idCampeonato-1).ListarPartidas();
                }
                
            }
            
            continue;
        }

        if (opt == 7){
            if(listaJogadores.empty()){
                cout << "nenhum jogador cadastrado" << endl;
                continue;
            } else {
                for (size_t i = 0; i < listaJogadores.size(); i++){
                    cout << "id: " << i+1 << " - nome: " << listaJogadores.at(i)->GetNome() << endl;
                }

                cout << "informe o id do jogador que deseja adicionar numero" << endl;
                size_t idJogador;
                cin>> idJogador;

                cout << "Informe a quantidade de gols" << endl;
                size_t gols;
                cin >> gols;
                listaJogadores.at(idJogador-1)->SetGols(gols);

                cout << "informe a quantidade de assistencias" << endl;
                size_t assists;
                cin >> assists;
                listaJogadores.at(idJogador-1)->SetAssists(assists);

                cout << "Informe a quantidade de finalizações" << endl;
                size_t chutes;
                cin >> chutes;
                listaJogadores.at(idJogador-1)->SetChutes(chutes);

                cout << "Informe a quantidade de passes certos" << endl;
                size_t pCertos;
                cin >> pCertos;
                listaJogadores.at(idJogador-1)->SetPCertos(pCertos);

                cout << "Informe a quantidade de passes errados" << endl;
                size_t pErrados;
                cin >> pErrados;
                listaJogadores.at(idJogador-1)->SetPErrados(pErrados);

                cout << "Informe a quantidade de passes decisivos" << endl;
                size_t pDecisivos;
                cin >> pDecisivos;
                listaJogadores.at(idJogador-1)->SetPDecisivos(pDecisivos);

                cout << "Nota do jogador: " << listaJogadores.at(idJogador-1)->CalcNota() << endl;
            }
            
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