#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include <iostream>

using namespace std;

class Jogador{
protected:
    string m_nome;
    size_t m_numero;
    string m_bDay;

public:
    //Construtores
    Jogador();
    Jogador(string nome, size_t numero, string bday);
    
    //Destrutor
    ~Jogador(){};

    //Sets

    //Gets
    void ShowInfo();
};

#endif