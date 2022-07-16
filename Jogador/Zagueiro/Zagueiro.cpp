#include "Zagueiro.hpp"

Zagueiro::Zagueiro(){
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

Zagueiro::Zagueiro(string nome, size_t numero, string bday){
    m_nome = nome;
    m_numero = numero;
    m_bDay = bday;
}

float Zagueiro::CalcNota(){
    return ((Zagueiro::AproveitamentoDessarmes() * 0.4) + (Zagueiro::AproveitamentoPasse() * 0.6));
}

void Zagueiro::ShowInfo(){
    cout << "nome do jogador: " << m_nome << endl
         << "numero: " << m_numero << endl
         << "data de mascimento: " << m_bDay << endl
         << "posição: Zagueiro" << endl
         << "-----------------------------"
         << endl; 
}