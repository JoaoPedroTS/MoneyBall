#ifndef ATACANTE_HPP
#define ATACANTE_HPP

#include "../Jogador.hpp"

class Atacante : public Jogador{
protected:
public:
    //Construtores
    Atacante();
    Atacante(string nome, size_t numero, string bday);

    //Destrutor
    ~Atacante(){};

    //Gets
    float CalcNota();
};
#endif