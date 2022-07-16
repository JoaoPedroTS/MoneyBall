#ifndef LATERAL_HPP
#define LATERAL_HPP

#include "../Jogador.hpp"

class Lateral : public Jogador{
protected:
public:
    //Construtores
    Lateral();
    Lateral(string nome, size_t numero, string bday);

    //Destrutor
    ~Lateral(){};

    //Gets
    float CalcNota();
    void ShowInfo();
};
#endif