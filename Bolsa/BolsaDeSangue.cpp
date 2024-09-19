#include "BolsaDeSangue.h"

BolsaDeSangue::BolsaDeSangue(string tipo, double volume, string dataColeta, string validade, string codigoIdentificacao)
    : tipo(tipo), volume(volume), dataColeta(dataColeta), validade(validade), codigoIdentificacao(codigoIdentificacao) {}

string BolsaDeSangue::getTipo() const { return tipo; }
double BolsaDeSangue::getVolume() const { return volume; }
string BolsaDeSangue::getDataColeta() const { return dataColeta; }
string BolsaDeSangue::getValidade() const { return validade; }
string BolsaDeSangue::getCodigoIdentificacao() const { return codigoIdentificacao; }

bool BolsaDeSangue::verificarValidade(const string& dataAtual) const {
    return dataAtual <= validade;
}
