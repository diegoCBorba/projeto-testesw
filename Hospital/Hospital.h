#ifndef HOSPITAL_H
#define HOSPITAL_H

#include <iostream>
#include <string>
#include <vector>
#include "../Pedido/Pedido.h"

using namespace std;

class Hospital {
private:
    string nome;
    string endereco;
    string telefone;
    string email;
    string responsavel;
    string cidade;
    string estado;
    vector<Pedido> pedidos;  // Lista de pedidos criados pelo hospital

public:
    Hospital(const string& nome, const string& endereco, const string& telefone,
             const string& email, const string& responsavel, const string& cidade,
             const string& estado);

    // Métodos getters
    string getNome() const;
    string getEndereco() const;
    string getTelefone() const;
    string getEmail() const;
    string getResponsavel() const;
    string getCidade() const;
    string getEstado() const;

    // Método para criar um pedido
    void criarPedido(const Pedido& pedido);

    // Método para obter a lista de pedidos
    const vector<Pedido>& getPedidos() const;
};

#endif
