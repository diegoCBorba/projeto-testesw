#include "Dependente.h"

Dependente::Dependente(string cpf, string nome, tm dataNascimento, string sexo, string tipoSanguineo, string endereco, string telefone)
    : Pessoa(cpf, nome, dataNascimento, sexo, tipoSanguineo, endereco, telefone) {}

vector<Pedido> Dependente::getHistoricoDePedidos() const {
    return historicoDePedidos;
}

Pedido Dependente::fazerPedido(const Pedido& pedido) {
    historicoDePedidos.push_back(pedido);
    return pedido;
}
