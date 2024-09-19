#ifndef TRIAGEM_H
#define TRIAGEM_H

#include <iostream>
#include <string>
#include <vector>
#include "../Exame/Exame.h"

using namespace std;

class Triagem {
private:
    string dataExame;
    vector<Exame> listaExames;

public:
    Triagem(string dataExame);

    string getDataExame() const;

    // Método para registrar um exame
    void registrarExame(const Exame& exame);

    const vector<Exame>& getListaExames() const;

    // Método para exibir os exames registrados (opcional)
    void exibirExames() const;
};

#endif
