#ifndef DOADOR_H
#define DOADOR_H

#include "../Pessoa/Pessoa.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Doador : public Pessoa {
private:
    vector<string> historicoDoacoes;

public:
    Doador(int id, string cpf, string nome, string dataNascimento, string sexo,
           string tipoSanguineo, string endereco, string telefone);

    void doarBolsa();
    void fazerTriagem();
    const vector<string>& getHistoricoDoacoes() const;
};

#endif
