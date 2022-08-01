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
void Jogador::SetGols(size_t gols){
    m_gols += gols;
}

void Jogador::SetAssists(size_t assists){
    m_assists += assists;
}
void Jogador::SetChutes(size_t chutes){
    m_chutes += chutes;
}
void Jogador::SetPCertos(size_t pCertos){
    m_pCertos += pCertos;
}

void Jogador::SetPErrados(size_t pErrados){
    m_pErrados += pErrados;
}

void Jogador::SetPDecisivos(size_t pDecisivos){
    m_pDecisivos += pDecisivos;
}

//Gets
string Jogador::GetNome(){
    return m_nome;
}

size_t Jogador::GetNumero(){
    return m_numero;
}

float Jogador::CalcNota(){
    return 10,00;
}

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