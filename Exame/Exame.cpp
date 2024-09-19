#include "Exame.h"

Exame::Exame(string tipo, string resultado)
    : tipo(tipo), resultado(resultado) {}

string Exame::getTipo() const { return tipo; }
string Exame::getResultado() const { return resultado; }
void Exame::setResultado(const string& novoResultado) {
    resultado = novoResultado;
}
