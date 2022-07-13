#include "Goleiro.hpp"

//Construtores
Goleiro::Goleiro(){
    m_defesa = 0;
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