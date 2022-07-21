#include "Time.hpp"

//Contrutores
Time::Time(){
    m_nome = "";
    m_elenco.clear();
}

Time::Time(string nome){
    m_nome = nome;
}

//Sets
void Time::AddJogador(Jogador *jogador){

    for (size_t i = 0; i < m_elenco.size(); i++){
            if (m_elenco.at(i) == jogador){
                cout << "jogador já foi cadastrado" << endl;
                return;
            }
    }

    m_elenco.push_back(jogador);
    cout << "Jogador cadastrado comm sucesso !" << endl;
}

//Gets
string Time::GetNome(){
    return m_nome;
}

void Time::ListarElenco(){
    cout << "Elenco do " << m_nome << ":" << endl;
    for (size_t i = 0; i < m_elenco.size(); i++){
        cout << m_elenco.at(i)->GetNome() << endl;
    }
}