#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>
#include <vector>

#include "Jogador.hpp"

using namespace std;

class Time{
protected:
    string m_nome;
    vector<Jogador*> m_elenco;
public:
    //Construtores
    Time();
    Time(string nome);

    //Destrutor
    ~Time(){};

    //Sets
    void AddJogador(Jogador *jogador);

    //Gets
    string GetNome();
    void ListarElenco();
};

#endif