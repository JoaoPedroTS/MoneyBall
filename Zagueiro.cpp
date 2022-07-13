#include "Zagueiro.hpp"

Zagueiro::Zagueiro(){
    m_nome = "";
    m_numero = 0;
    m_bDay = "";
}

Zagueiro::Zagueiro(string nome, size_t numero, string bday){
    m_nome = nome;
    m_numero = numero;
    m_bDay = bday;
}

float Zagueiro::CalcNota(){
    return ((Zagueiro::AproveitamentoDessarmes() * 0.4) + (Zagueiro::AproveitamentoPasse() * 0.6));
}