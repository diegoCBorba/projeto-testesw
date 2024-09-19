#ifndef EXAME_H
#define EXAME_H

#include <string>

using namespace std;

class Exame {
private:
    int id;
    string tipo;
    string resultado;

public:
    Exame(int id, string tipo, string resultado);

    int getId() const;
    string getTipo() const;
    string getResultado() const;

    void setId(int id);
    void setTipo(string tipo);
    void setResultado(string resultado);
};

#endif
