#ifndef EXAME_H
#define EXAME_H

#include <iostream>
#include <string>

using namespace std;

class Exame {
private:
    string tipo;
    string resultado;

public:
    Exame(string tipo, string resultado);

    string getTipo() const;
    string getResultado() const;
    void setResultado(const string& novoResultado);
};

#endif
