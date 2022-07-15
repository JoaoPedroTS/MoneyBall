#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <iostream>

using namespace std;

class Jogador{
protected:
    string m_nome, m_bDay;
    size_t m_numero;
    size_t m_jogos, m_titular;
    size_t m_pCertos, m_pErrados, m_pDecisivos;
    size_t m_desarmes, m_fCometidas, m_fSofridas;
    size_t m_assists, m_chutes, m_gols;

public:
    //Construtores
    Jogador();
    Jogador(string nome, size_t numero, string bday);
    
    //Destrutor
    ~Jogador(){};

    //Sets

    //Gets
    void ShowInfo();
    float AproveitamentoPasse();
    float AproveitamentoDessarmes();
    float ConversaoChutes();
    size_t ParticipacaoEmGols();
};

#endif