#include "Jogador.hpp"

//Construtores
Jogador::Jogador(){
    m_nome = "";
    m_numero = 0;
    m_bDay = "";
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