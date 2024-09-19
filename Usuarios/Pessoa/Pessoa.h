#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include <ctime>

using namespace std;

class Pessoa {
private:
    string cpf;
    string nome;
    tm dataNascimento;
    string sexo;
    string tipoSanguineo;
    string endereco;
    string telefone;

public:
    Pessoa(string cpf, string nome, tm dataNascimento, string sexo, string tipoSanguineo, string endereco, string telefone);

    string getCpf() const;
    string getNome() const;
    tm getDataNascimento() const;
    string getSexo() const;
    string getTipoSanguineo() const;
    string getEndereco() const;
    string getTelefone() const;

    void setCpf(string cpf);
    void setNome(string nome);
    void setDataNascimento(tm dataNascimento);
    void setSexo(string sexo);
    void setTipoSanguineo(string tipoSanguineo);
    void setEndereco(string endereco);
    void setTelefone(string telefone);
};

#endif
