#include "Doador.h"

Doador::Doador(string cpf, string nome, tm dataNascimento, string sexo, string tipoSanguineo, string endereco, string telefone)
    : Pessoa(cpf, nome, dataNascimento, sexo, tipoSanguineo, endereco, telefone) {}

vector<BolsaDeSangue> Doador::getHistoricoDeDoacoes() const {
    return historicoDeDoacoes;
}

vector<Triagem> Doador::getHistoricoDeTriagens() const {
    return historicoDeTriagens;
}

BolsaDeSangue Doador::doarBolsa(const BolsaDeSangue& bolsa) {
    historicoDeDoacoes.push_back(bolsa);
    return bolsa;
}

Triagem Doador::fazerTrigem(const Triagem& triagem) {
    historicoDeTriagens.push_back(triagem);
    return triagem;
}
