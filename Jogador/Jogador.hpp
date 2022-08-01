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
    virtual ~Jogador(){};

    //Sets
    void SetGols(size_t gols);
    void SetAssists(size_t assists);
    void SetChutes(size_t chutes);
    void SetPCertos(size_t pCertos);
    void SetPErrados(size_t pErrados);
    void SetPDecisivos(size_t pDecisivos);

    //Gets
    string GetNome();
    size_t GetNumero();
    virtual void ShowInfo();
    virtual float CalcNota();
    float AproveitamentoPasse();
    float AproveitamentoDessarmes();
    float ConversaoChutes();
    size_t ParticipacaoEmGols();
};

#endif