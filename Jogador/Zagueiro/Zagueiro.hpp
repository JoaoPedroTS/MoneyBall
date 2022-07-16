#ifndef ZAGUEIRO_HPP
#define ZAGUEIRO_HPP

#include "../Jogador.hpp"

class Zagueiro : public Jogador{
protected:    
public:
    Zagueiro();
    Zagueiro(string nome, size_t numero, string bday);

    ~Zagueiro(){};

    float CalcNota();
    void ShowInfo();
};
#endif