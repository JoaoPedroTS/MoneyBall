#include "Jogador.hpp"
#include "Time.hpp"

int main(){

    vector <Jogador> listaJogadores;
    vector <Time> listaTimes;

    while (1){
        cout << "1. Adicionar dados de um jogador" << endl;
        cout << "2. Adicionar dados referentes a um time" << endl;
        cout << "3. Associar um jogador a um time" << endl;
        cout << "4. Adicionar dados de um campeonato" << endl;
        cout << "5. Consultar dados de um campeonato" << endl;
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

            Jogador jogador(nome, numero, bday);
            jogador.ShowInfo();
            listaJogadores.push_back(jogador);
            
            continue;
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
            for (size_t i = 0; i < listaJogadores.size(); i++){
                cout << "id jogador: " << i+1 << endl;
                listaJogadores.at(i).ShowInfo();
            }
            
            cout << "Informe o id do jogador que será tranferido" << endl;
            size_t idJogador;
            cin >> idJogador;
            Jogador jogador = listaJogadores.at(idJogador - 1);

            for (size_t i = 0; i < listaTimes.size(); i++){
                cout << "id do time: " << i+1 << listaTimes.at(i).GetNome() << endl;
            }

            cout << "informe o id do time que o jogador esta sendo tranferido" << endl;
            size_t idTime;
            cin >> idTime;
            Time time = listaTimes.at(idTime-1);

            time.AddJogador(&jogador);
            cout << "elenco do " << time.GetNome() << endl;
            time.ListarElenco();

            continue;
        }

        if (opt == 4){
            continue;
        }

        if (opt == 5){
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