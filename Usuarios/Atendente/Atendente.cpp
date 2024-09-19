#include "Atendente.h"

Atendente::Atendente(string cpf, string nome, tm dataNascimento, string sexo, string tipoSanguineo, string endereco, string telefone)
    : Pessoa(cpf, nome, dataNascimento, sexo, tipoSanguineo, endereco, telefone) {}

Doador Atendente::cadastrarDoador(const string& cpf, const string& nome, const tm& dataNascimento, const string& sexo, const string& tipoSanguineo, const string& endereco, const string& telefone) {
    Doador novoDoador(cpf, nome, dataNascimento, sexo, tipoSanguineo, endereco, telefone);
    return novoDoador;
}
