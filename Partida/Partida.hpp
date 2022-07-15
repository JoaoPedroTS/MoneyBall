#ifndef PARTIDA_HPP
#define PARTIDA_HPP

#include "../Time/Time.hpp"

#include <utility>

class Partida{
protected:
    string m_data;
    string m_horario;
    pair < Time*, Time*> m_confronto;
public:
    //Construtores
    Partida();
    Partida(string data, string horario);

    //Destrutor
    ~Partida(){};

    //Sets
    void SetMandante(Time *time);
    void SetVisitante(Time *time);
};
#endif