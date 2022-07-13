#ifndef CAMPEONATO_HPP
#define CAMPEONATO_HPP

#include <iostream>

#include "Time.hpp"

using namespace std;

class Campeonato
{
protected:
    string m_nome;
    vector<Time*> m_participantes;
public:
    //Construtores
    Campeonato();
    Campeonato(string nome);

    //Destrutor
    ~Campeonato(){};

    //Sets
    void AddTime(Time *time);

    //Gets
    string GetNome();
    void ListarIncritos();
};

#endif