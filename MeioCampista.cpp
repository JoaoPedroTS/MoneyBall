#include "MeioCampista.hpp"

MeioCampista::MeioCampista(){
    m_nome = "";
    m_numero = 0;
    m_bDay = "";
}

MeioCampista::MeioCampista(string nome, size_t numero, string bday){
    m_nome = nome;
    m_numero = numero;
    m_bDay = bday;
}

float MeioCampista::CalcNota(){
    return ((MeioCampista::AproveitamentoPasse() *0.1) + (MeioCampista::ParticipacaoEmGols()*0.2) + (m_pDecisivos*0.3));
}