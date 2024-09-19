#include "BolsaDeSangue.h"
#include <ctime>

BolsaDeSangue::BolsaDeSangue(string tipo, float volume, tm dataColeta, tm validade, string cpfDoador, string codigoIdentificacao)
    : tipo(tipo), volume(volume), dataColeta(dataColeta), validade(validade), cpfDoador(cpfDoador), codigoIdentificacao(codigoIdentificacao) {}

string BolsaDeSangue::getTipo() const {
    return tipo;
}

float BolsaDeSangue::getVolume() const {
    return volume;
}

tm BolsaDeSangue::getDataColeta() const {
    return dataColeta;
}

tm BolsaDeSangue::getValidade() const {
    return validade;
}

string BolsaDeSangue::getCpfDoador() const {
    return cpfDoador;
}

string BolsaDeSangue::getCodigoIdentificacao() const {
    return codigoIdentificacao;
}

void BolsaDeSangue::setTipo(string tipo) {
    this->tipo = tipo;
}

void BolsaDeSangue::setVolume(float volume) {
    this->volume = volume;
}

void BolsaDeSangue::setDataColeta(tm dataColeta) {
    this->dataColeta = dataColeta;
}

void BolsaDeSangue::setValidade(tm validade) {
    this->validade = validade;
}

void BolsaDeSangue::setCpfDoador(string cpfDoador) {
    this->cpfDoador = cpfDoador;
}

void BolsaDeSangue::setCodigoIdentificacao(string codigoIdentificacao) {
    this->codigoIdentificacao = codigoIdentificacao;
}

bool BolsaDeSangue::VerificarValidade() const {
    time_t agora = time(0);
    tm *dataAtual = localtime(&agora);

    // Compara a data de validade com a data atual
    if (mktime(const_cast<tm*>(&validade)) > mktime(dataAtual)) {
        return true; // Bolsa válida
    } else {
        return false; // Bolsa expirada
    }
}
