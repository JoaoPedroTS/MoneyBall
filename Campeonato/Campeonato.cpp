#include "Campeonato.hpp"

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

void Campeonato::ShowInfo(){
    cout << "Nome Campeonato: " << m_nome << endl;
    if (m_partidas.empty()){
        cout << "Nenhuma partida cadastrada" << endl;
    } else {
        cout << "Partidas: " << endl;
        for (size_t i = 0; i < m_partidas.size(); i++){
            m_partidas.at(i)->ShowInfo();
        }
    }    
}

void Campeonato::ListarPartidas(){
    for (size_t i = 0; i < m_partidas.size(); i++){
        m_partidas.at(i)->ShowInfo();
    }
    
}