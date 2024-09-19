#ifndef TRIAGEM_H
#define TRIAGEM_H

#include <vector>
#include <string>
#include <ctime>
#include "Exame.h"

using namespace std;

class Triagem {
private:
    tm dataExame;
    vector<Exame> exames;
public:
    Triagem(tm dataExame);

    tm getDataExame() const;
    vector<Exame> getExames() const;
    void setDataExame(tm dataExame);
    void cadastrarExame(const Exame& exame);

    void mostrarDetalhes() const;
};

#endif
