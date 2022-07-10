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
    m_elenco.push_back(jogador);
}

//Gets
string Time::GetNome(){
    return m_nome;
}

void Time::ListarElenco(){
    for (size_t i = 0; i < m_elenco.size(); i++){
        cout << m_elenco.at(i) << endl;
    }
    
}