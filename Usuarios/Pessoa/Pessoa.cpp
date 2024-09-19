#include "Pessoa.h"

Pessoa::Pessoa(string cpf, string nome, tm dataNascimento, string sexo, string tipoSanguineo, string endereco, string telefone)
    : cpf(cpf), nome(nome), dataNascimento(dataNascimento), sexo(sexo), tipoSanguineo(tipoSanguineo), endereco(endereco), telefone(telefone) {}

string Pessoa::getCpf() const {
    return cpf;
}

string Pessoa::getNome() const {
    return nome;
}

tm Pessoa::getDataNascimento() const {
    return dataNascimento;
}

string Pessoa::getSexo() const {
    return sexo;
}

string Pessoa::getTipoSanguineo() const {
    return tipoSanguineo;
}

string Pessoa::getEndereco() const {
    return endereco;
}

string Pessoa::getTelefone() const {
    return telefone;
}

void Pessoa::setCpf(string cpf) {
    this->cpf = cpf;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

void Pessoa::setDataNascimento(tm dataNascimento) {
    this->dataNascimento = dataNascimento;
}

void Pessoa::setSexo(string sexo) {
    this->sexo = sexo;
}

void Pessoa::setTipoSanguineo(string tipoSanguineo) {
    this->tipoSanguineo = tipoSanguineo;
}

void Pessoa::setEndereco(string endereco) {
    this->endereco = endereco;
}

void Pessoa::setTelefone(string telefone) {
    this->telefone = telefone;
}
