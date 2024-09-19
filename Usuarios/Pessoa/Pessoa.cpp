#include "Pessoa.h"

Pessoa::Pessoa(int id, string cpf, string nome, string dataNascimento, string sexo, 
               string tipoSanguineo, string endereco, string telefone)
    : id(id), cpf(cpf), nome(nome), dataNascimento(dataNascimento), sexo(sexo),
      tipoSanguineo(tipoSanguineo), endereco(endereco), telefone(telefone) {}

int Pessoa::getId() const { return id; }
string Pessoa::getCpf() const { return cpf; }
string Pessoa::getNome() const { return nome; }
string Pessoa::getDataNascimento() const { return dataNascimento; }
string Pessoa::getSexo() const { return sexo; }
string Pessoa::getTipoSanguineo() const { return tipoSanguineo; }
string Pessoa::getEndereco() const { return endereco; }
string Pessoa::getTelefone() const { return telefone; }

void Pessoa::setEndereco(const string& novoEndereco) { endereco = novoEndereco; }
void Pessoa::setTelefone(const string& novoTelefone) { telefone = novoTelefone; }
