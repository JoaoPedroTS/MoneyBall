#ifndef CAMPEONATO_HPP
#define CAMPEONATO_HPP

#include <iostream>

#include "../Partida/Partida.hpp"

using namespace std;

class Campeonato
{
protected:
    string m_nome;
    vector <Partida*> m_partidas;
public:
    //Construtores
    Campeonato();
    Campeonato(string nome);

    //Destrutor
    ~Campeonato(){};

    //Sets
    void AddPartida(Partida *partida);

    //Gets
    string GetNome();
    void ShowInfo();
    void ListarPartidas();
};

#endif