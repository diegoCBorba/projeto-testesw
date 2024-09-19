#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <iostream>
#include <string>
#include "../Pessoa/Pessoa.h"

using namespace std;

class Administrador : public Pessoa {
public:
    Administrador(int id, string cpf, string nome, string dataNascimento, string sexo,
                  string tipoSanguineo, string endereco, string telefone);

    void cadastrarHospital(const string& hospital);
    void cadastrarHemocentro(const string& hemocentro);
    void gerarRelatorio();
    void verificarRastreabilidade();
};

#endif
