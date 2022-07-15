#ifndef GOLEIRO_HPP
#define GOLEIRO_HPP

#include "../Jogador.hpp"

class Goleiro : public Jogador{
protected:
    size_t m_defesa;
public:
    //Construtores
    Goleiro();
    Goleiro(string nome, size_t numero, string bday);

    //Destrutores
    ~Goleiro(){};

    //Sets
    void SetDefesa(size_t defesa);

    //Gets
    size_t GetDefesa();
    float CalcNota();
};

#endif