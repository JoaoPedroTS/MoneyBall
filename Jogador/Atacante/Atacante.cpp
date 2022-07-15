#include "Atacante.hpp"

Atacante::Atacante(){
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

Atacante::Atacante(string nome, size_t numero, string bday){
    m_nome = nome;
    m_numero = numero;
    m_bDay = bday;
}

float Atacante::CalcNota(){
    return ((Atacante::ParticipacaoEmGols()*0.3)
            +(Atacante::ConversaoChutes()*0.2)
            +(m_gols*0.5));
}