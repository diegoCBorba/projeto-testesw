#include "Administrador.h"

Administrador::Administrador(int id, string cpf, string nome, string dataNascimento, string sexo,
                             string tipoSanguineo, string endereco, string telefone)
    : Pessoa(id, cpf, nome, dataNascimento, sexo, tipoSanguineo, endereco, telefone) {}

void Administrador::cadastrarHospital(const string& hospital) {
    cout << "Cadastrando hospital: " << hospital << endl;
}

void Administrador::cadastrarHemocentro(const string& hemocentro) {
    cout << "Cadastrando hemocentro: " << hemocentro << endl;
}

void Administrador::gerarRelatorio() {
    cout << "Gerando relatório..." << endl;
}

void Administrador::verificarRastreabilidade() {
    cout << "Verificando rastreabilidade..." << endl;
}
