#include "Pedido.h"

Pedido::Pedido(int id, string tipoSanguineo, float quantidade, string cpfDependente, bool status)
    : id(id), tipoSanguineo(tipoSanguineo), quantidade(quantidade), cpfDependente(cpfDependente), status(status) {}

int Pedido::getId() const {
    return id;
}

string Pedido::getTipoSanguineo() const {
    return tipoSanguineo;
}

float Pedido::getQuantidade() const {
    return quantidade;
}

string Pedido::getCpfDependente() const {
    return cpfDependente;
}

bool Pedido::getStatus() const {
    return status;
}

void Pedido::setId(int id) {
    this->id = id;
}

void Pedido::setTipoSanguineo(string tipoSanguineo) {
    this->tipoSanguineo = tipoSanguineo;
}

void Pedido::setQuantidade(float quantidade) {
    this->quantidade = quantidade;
}

void Pedido::setCpfDependente(string cpfDependente) {
    this->cpfDependente = cpfDependente;
}

void Pedido::setStatus(bool status) {
    this->status = status;
}

void Pedido::registrarPedido() {
    status = true;
}
