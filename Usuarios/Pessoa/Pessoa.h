#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
protected:
    int id;
    string cpf;
    string nome;
    string dataNascimento;
    string sexo;
    string tipoSanguineo;
    string endereco;
    string telefone;

public:
    Pessoa(int id, string cpf, string nome, string dataNascimento, string sexo, 
           string tipoSanguineo, string endereco, string telefone);

    // Métodos getters e setters
    int getId() const;
    string getCpf() const;
    string getNome() const;
    string getDataNascimento() const;
    string getSexo() const;
    string getTipoSanguineo() const;
    string getEndereco() const;
    string getTelefone() const;

    void setEndereco(const string& novoEndereco);
    void setTelefone(const string& novoTelefone);
};

#endif
