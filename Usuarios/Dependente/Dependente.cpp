#include "Dependente.h"

Dependente::Dependente(int id, string cpf, string nome, string dataNascimento, string sexo,
                       string tipoSanguineo, string endereco, string telefone)
    : Pessoa(id, cpf, nome, dataNascimento, sexo, tipoSanguineo, endereco, telefone) {}

void Dependente::adicionarPedido(const string& pedido) {
    historicoPedidos.push_back(pedido);
}

const vector<string>& Dependente::getHistoricoPedidos() const {
    return historicoPedidos;
}
