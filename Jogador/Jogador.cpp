#include "Jogador.hpp"

//Construtores
Jogador::Jogador(){
    m_nome, m_bDay = "";
    m_numero = 0;
    m_jogos, m_titular = 0;
    m_pCertos, m_pErrados, m_pDecisivos = 0;
    m_desarmes, m_fCometidas, m_fSofridas = 0;
    m_assists, m_chutes, m_gols = 0;
}

Jogador::Jogador(string nome, size_t numero, string bday){
    m_nome = nome;
    m_numero = numero;
    m_bDay = bday;
}

//Sets

//Gets
void Jogador::ShowInfo(){
    cout << "nome do jogador: " << m_nome << endl
         << "numero: " << m_numero << endl
         << "data de mascimento: " << m_bDay << endl
         << "-----------------------------"
         << endl; 
}

float Jogador::AproveitamentoPasse(){
    return ((m_pCertos/(m_pErrados + m_pCertos))*100);
}

float Jogador::AproveitamentoDessarmes(){
    return (m_desarmes/m_fCometidas);
}

float Jogador::ConversaoChutes(){
    return (m_gols/m_chutes);
}
size_t Jogador::ParticipacaoEmGols(){
    return (m_gols + m_assists);
}