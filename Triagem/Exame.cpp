#include "Exame.h"

Exame::Exame(int id, string tipo, string resultado) : id(id), tipo(tipo), resultado(resultado) {}

int Exame::getId() const {
    return id;
}

string Exame::getTipo() const {
    return tipo;
}

string Exame::getResultado() const {
    return resultado;
}

void Exame::setId(int id) {
    this->id = id;
}

void Exame::setTipo(string tipo) {
    this->tipo = tipo;
}

void Exame::setResultado(string resultado) {
    this->resultado = resultado;
}
