#include "campeonato.hpp"

//Construtores
Campeonato::Campeonato(){
    m_nome = "";
    m_participantes.clear();
}

Campeonato::Campeonato(string nome){
    m_nome = nome;
}

//Sets
void Campeonato::AddTime(Time *time){
    for (size_t i = 0; i < m_participantes.size(); i++){
        if (m_participantes.at(i) == time){
            cout << "Time já foi cadastrado" << endl;
        } else {
            m_participantes.push_back(time);
            cout << "Time cadastrado com sucesso !" << endl;
        }
        
    }
}

//Gets
string Campeonato::GetNome(){
    return m_nome;
}

void Campeonato::ListarIncritos(){
    for (size_t i = 0; i < m_participantes.size(); i++){
        cout << m_participantes.at(i) << endl;
    }
    
}