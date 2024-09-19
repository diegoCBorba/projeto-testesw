#include "Hospital.h"

Hospital::Hospital(const string& nome, const string& endereco, const string& telefone,
                   const string& email, const string& responsavel, const string& cidade,
                   const string& estado)
    : nome(nome), endereco(endereco), telefone(telefone), email(email),
      responsavel(responsavel), cidade(cidade), estado(estado) {
}

string Hospital::getNome() const {
    return nome;
}

string Hospital::getEndereco() const {
    return endereco;
}

string Hospital::getTelefone() const {
    return telefone;
}

string Hospital::getEmail() const {
    return email;
}

string Hospital::getResponsavel() const {
    return responsavel;
}

string Hospital::getCidade() const {
    return cidade;
}

string Hospital::getEstado() const {
    return estado;
}

void Hospital::criarPedido(const Pedido& pedido) {
    pedidos.push_back(pedido);
}

const vector<Pedido>& Hospital::getPedidos() const {
    return pedidos;
}
