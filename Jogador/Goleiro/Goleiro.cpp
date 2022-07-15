#include "Goleiro.hpp"

//Construtores
Goleiro::Goleiro(){
    m_nome = "";
    m_bDay = "";
    m_numero = 0;
    m_jogos = 0;
    m_titular = 0;
    m_defesa = 0;
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

Goleiro::Goleiro(string nome, size_t numero, string bday){
    m_nome = nome;
    m_numero = numero;
    m_bDay = bday;
}

//Sets
void Goleiro::SetDefesa(size_t defesa){
    m_defesa += defesa;
}

//Gets
size_t Goleiro::GetDefesa(){
    return m_defesa;
}

float Goleiro::CalcNota(){
    return m_defesa;
}