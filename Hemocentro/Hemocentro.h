#ifndef HEMOCENTRO_H
#define HEMOCENTRO_H

#include <iostream>
#include <string>
#include <vector>
#include "../Estoque/Estoque.h"
#include "../Pedido/Pedido.h"

using namespace std;

class Hemocentro {
private:
    int id;
    string nome;
    string endereco;
    string telefone;
    string email;
    string responsavel;
    string cidade;
    string estado;
    vector<Estoque> capacidadeEstoque;  // Lista de estoques

public:
    Hemocentro(string nome, string endereco, string telefone, string email, 
               string responsavel, string cidade, string estado);

    // Método para registrar um pedido
    void registrarPedido(const Pedido& pedido);

    // Métodos getters para acessar os atributos
    string getNome() const;
    string getEndereco() const;
    string getTelefone() const;
    string getEmail() const;
    string getResponsavel() const;
    string getCidade() const;
    string getEstado() const;

    // Adicionar um estoque ao hemocentro
    void adicionarEstoque(const Estoque& estoque);

    // Gerar um relatório de estoques no hemocentro
    void gerarRelatorioEstoque() const;
};

#endif
