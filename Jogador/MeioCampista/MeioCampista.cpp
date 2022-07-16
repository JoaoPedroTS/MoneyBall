#include "MeioCampista.hpp"

MeioCampista::MeioCampista(){
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

MeioCampista::MeioCampista(string nome, size_t numero, string bday){
    m_nome = nome;
    m_numero = numero;
    m_bDay = bday;
}

float MeioCampista::CalcNota(){
    return ((MeioCampista::AproveitamentoPasse() *0.1)
            +(MeioCampista::ParticipacaoEmGols()*0.2)
            +(m_pDecisivos*0.3));
}

void MeioCampista::ShowInfo(){
    cout << "nome do jogador: " << m_nome << endl
         << "numero: " << m_numero << endl
         << "data de mascimento: " << m_bDay << endl
         << "Posição: Meio Campista" << endl
         << "-----------------------------"
         << endl; 
}