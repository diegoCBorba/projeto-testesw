#include "Atendente.h"

Atendente::Atendente(int id, string cpf, string nome, string dataNascimento, string sexo,
                     string tipoSanguineo, string endereco, string telefone)
    : Pessoa(id, cpf, nome, dataNascimento, sexo, tipoSanguineo, endereco, telefone) {}

void Atendente::cadastrarDoador(Doador& doador) {
    cout << "Cadastrando doador: " << doador.getNome() << endl;
}

void Atendente::visualizarDoador(const Doador& doador) {
    cout << "Visualizando doador: " << doador.getNome() << endl;
}
