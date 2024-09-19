#ifndef ATENDENTE_H
#define ATENDENTE_H

#include <iostream>
#include <string>
#include "../Pessoa/Pessoa.h"
#include "../Doador/Doador.h"

using namespace std;

class Atendente : public Pessoa {
public:
    Atendente(int id, string cpf, string nome, string dataNascimento, string sexo,
              string tipoSanguineo, string endereco, string telefone);

    void cadastrarDoador(Doador& doador);
    void visualizarDoador(const Doador& doador);
};

#endif
