#include "Pedido.h"

Pedido::Pedido(string tipoSanguineo, int quantidade, string status)
    : tipoSanguineo(tipoSanguineo), quantidade(quantidade), status(status) {}

string Pedido::getTipoSanguineo() const { return tipoSanguineo; }
int Pedido::getQuantidade() const { return quantidade; }
string Pedido::getStatus() const { return status; }
void Pedido::setStatus(const string& novoStatus) {
    status = novoStatus;
}

void Pedido::registrarPedido() {
    cout << "Pedido registrado: " << quantidade 
         << " bolsas de tipo " << tipoSanguineo 
         << ". Status: " << status << endl;
}
