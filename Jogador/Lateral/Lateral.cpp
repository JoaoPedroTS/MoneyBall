#include "Lateral.hpp"

Lateral::Lateral(){
    m_nome = "";
    m_bDay = "";
    m_numero = 0;
    m_jogos = 0;
    m_titular = 0;
    m_pCertos = 0;
    m_pErrados = 0;
    m_pDecisivos = 0;
    m_desarmes = 0;
    m_fCometidas = 0;
    m_fSofridas = 0;
    m_assists = 0;
    m_chutes = 0;
    m_gols = 0;
}

Lateral::Lateral(string nome, size_t numero, string bday){
    m_nome = nome;
    m_numero = numero;
    m_bDay = bday;
}

float Lateral::CalcNota(){
    return ((Lateral::AproveitamentoDessarmes()*0.3)
            +(Lateral::AproveitamentoPasse()*0.5)
            +(Lateral::ParticipacaoEmGols()*0.2));
}

void Lateral::ShowInfo(){
    cout << "nome do jogador: " << m_nome << endl
         << "numero: " << m_numero << endl
         << "data de mascimento: " << m_bDay << endl
         << "Posicao: Lateral" << endl
         << "-----------------------------"
         << endl; 
}