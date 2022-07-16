#include "Partida.hpp"

Partida::Partida(){
    m_data = "";
    m_horario = "";
    m_confronto.first = NULL;
    m_confronto.second = NULL;
}

Partida::Partida(string data, string horario){
    m_data = data;
    m_horario = horario;
}

void Partida::SetMandante(Time *time){
    m_confronto.first = time;
}
void Partida::SetVisitante(Time *time){
    m_confronto.second = time;
}

//Gets
void Partida::ShowInfo(){
    cout << m_confronto.first << " x " << m_confronto.second << "" << m_data << " às " << m_horario <<endl;
}