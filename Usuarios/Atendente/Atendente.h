#ifndef ATENDENTE_H
#define ATENDENTE_H

#include "Pessoa.h"
#include "Doador.h"

using namespace std;

class Atendente : public Pessoa {
public:
    Atendente(string cpf, string nome, tm dataNascimento, string sexo, string tipoSanguineo, string endereco, string telefone);

    Doador cadastrarDoador(const string& cpf, const string& nome, const tm& dataNascimento, const string& sexo, const string& tipoSanguineo, const string& endereco, const string& telefone);
};

#endif
