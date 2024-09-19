#ifndef HEMOCENTRO_H
#define HEMOCENTRO_H

#include <string>
#include <vector>
#include "Dependente.h"
#include "Doador.h"
#include "Atendente.h"
#include "Pedido.h"
#include "Triagem.h"
#include "Estoque.h"

using namespace std;

class Hemocentro {
private:
    string nome;
    string endereco;
    string telefone;
    string email;
    string responsavel;
    string cidade;
    string estado;

    vector<Dependente> dependentes;
    vector<Doador> doadores;
    vector<Atendente> atendentes;
    vector<Pedido> pedidos;
    vector<Triagem> triagens;

    Estoque estoque;

public:
    Hemocentro(string nome, string endereco, string telefone, string email, string responsavel, string cidade, string estado);

    // Métodos de acesso aos atributos
    string getNome() const;
    string getEndereco() const;
    string getTelefone() const;
    string getEmail() const;
    string getResponsavel() const;
    string getCidade() const;
    string getEstado() const;
    Estoque getEstoque() const;

    void setNome(const string& nome);
    void setEndereco(const string& endereco);
    void setTelefone(const string& telefone);
    void setEmail(const string& email);
    void setResponsavel(const string& responsavel);
    void setCidade(const string& cidade);
    void setEstado(const string& estado);
    void setEstoque(const Estoque& estoque);

    // Métodos de gerenciamento
    void verTriagens() const;
    void verPedidos() const;
    void registrarPedido(const Pedido& pedido);
    void adicionarAtendente(const Atendente& atendente);
    void adicionarPedido(const Dependente& dependente, const Pedido& pedido);
    void adicionarDependente(const Dependente& dependente);
    void cadastrarTriagem(Doador& doador, const Triagem& triagem);
};

#endif
