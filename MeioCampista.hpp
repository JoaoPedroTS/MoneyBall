#ifndef MEIOCAMPISTA_HPP
#define MEIOCAMPISTA_HPP

#include "Jogador.hpp"

class MeioCampista : public Jogador{
protected:
    
public:
    MeioCampista();
    MeioCampista(string nome, size_t numero, string bday);

    ~MeioCampista(){};

    float CalcNota();
};

#endif