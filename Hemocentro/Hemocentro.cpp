#include "Hemocentro.h"
#include <iostream>

Hemocentro::Hemocentro(string nome, string endereco, string telefone, string email, string responsavel, string cidade, string estado)
    : nome(nome), endereco(endereco), telefone(telefone), email(email), responsavel(responsavel), cidade(cidade), estado(estado) {}

string Hemocentro::getNome() const {
    return nome;
}

string Hemocentro::getEndereco() const {
    return endereco;
}

string Hemocentro::getTelefone() const {
    return telefone;
}

string Hemocentro::getEmail() const {
    return email;
}

string Hemocentro::getResponsavel() const {
    return responsavel;
}

string Hemocentro::getCidade() const {
    return cidade;
}

string Hemocentro::getEstado() const {
    return estado;
}

Estoque Hemocentro::getEstoque() const {
    return estoque;
}

void Hemocentro::setNome(const string& nome) {
    this->nome = nome;
}

void Hemocentro::setEndereco(const string& endereco) {
    this->endereco = endereco;
}

void Hemocentro::setTelefone(const string& telefone) {
    this->telefone = telefone;
}

void Hemocentro::setEmail(const string& email) {
    this->email = email;
}

void Hemocentro::setResponsavel(const string& responsavel) {
    this->responsavel = responsavel;
}

void Hemocentro::setCidade(const string& cidade) {
    this->cidade = cidade;
}

void Hemocentro::setEstado(const string& estado) {
    this->estado = estado;
}

void Hemocentro::setEstoque(const Estoque& estoque) {
    this->estoque = estoque;
}

void Hemocentro::verTriagens() const {
    cout << "Triagens Registradas:" << endl;
    for (const auto& triagem : triagens) {
        // Imprimir detalhes da triagem, utilizando um método fictício para demonstração
        // Exemplo: triagem.imprimirDetalhes();
    }
}

void Hemocentro::verPedidos() const {
    cout << "Pedidos Registrados:" << endl;
    for (const auto& pedido : pedidos) {
        cout << "ID: " << pedido.getId() << endl;
        cout << "Tipo Sanguíneo: " << pedido.getTipoSanguineo() << endl;
        cout << "Quantidade: " << pedido.getQuantidade() << " ml" << endl;
        cout << "CPF do Dependente: " << pedido.getCpfDependente() << endl;
        cout << "Status: " << (pedido.getStatus() ? "Registrado" : "Não Registrado") << endl;
        cout << "------------------------" << endl;
    }
}

void Hemocentro::registrarPedido(const Pedido& pedido) {
    Pedido novoPedido = pedido;
    novoPedido.setStatus(true); // Marca o pedido como registrado
    pedidos.push_back(novoPedido);
}

void Hemocentro::adicionarAtendente(const Atendente& atendente) {
    atendentes.push_back(atendente);
}

void Hemocentro::adicionarPedido(const Dependente& dependente, const Pedido& pedido) {
    Pedido novoPedido = pedido;
    novoPedido.setStatus(false); // Inicialmente, o pedido não está registrado
    pedidos.push_back(novoPedido);
    // Aqui você pode implementar lógica adicional para associar o pedido ao dependente, se necessário
}

void Hemocentro::adicionarDependente(const Dependente& dependente) {
    dependentes.push_back(dependente);
}

void Hemocentro::cadastrarTriagem(Doador& doador, const Triagem& triagem) {
    doador.fazerTrigem(triagem);
    triagens.push_back(triagem);
}
