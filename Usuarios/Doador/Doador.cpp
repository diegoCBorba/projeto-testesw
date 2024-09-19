#include "Doador.h"

Doador::Doador(int id, string cpf, string nome, string dataNascimento, string sexo,
               string tipoSanguineo, string endereco, string telefone)
    : Pessoa(id, cpf, nome, dataNascimento, sexo, tipoSanguineo, endereco, telefone) {}

void Doador::doarBolsa() {
    cout << "Doando bolsa de sangue." << endl;
    historicoDoacoes.push_back("Bolsa doada em [data]");
}

void Doador::fazerTriagem() {
    cout << "Realizando triagem do doador." << endl;
}

const vector<string>& Doador::getHistoricoDoacoes() const {
    return historicoDoacoes;
}
