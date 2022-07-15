#include "campeonato.hpp"

//Construtores
Campeonato::Campeonato(){
    m_nome = "";
    m_partidas.clear();
}

Campeonato::Campeonato(string nome){
    m_nome = nome;
}

//Sets
void Campeonato::AddPartida(Partida *partida){
    m_partidas.push_back(partida);
}

//Gets
string Campeonato::GetNome(){
    return m_nome;
}

void Campeonato::ListarIncritos(){
    for (size_t i = 0; i < m_partidas.size(); i++){
        cout << m_partidas.at(i) << endl;
    }
    
}