#include <iostream>
#include "Pessoa.h"
#include "Doador.h"
#include "Dependente.h"
#include "Atendente.h"
#include "Pedido.h"
#include "Triagem.h"
#include "BolsaDeSangue.h"
#include "Estoque.h"
#include "Hemocentro.h"

// Função auxiliar para imprimir data
void imprimirData(const tm& data) {
    std::cout << data.tm_mday << "/" << (data.tm_mon + 1) << "/" << (data.tm_year + 1900);
}

int main() {
    // Criação de um Hemocentro
    Hemocentro hemocentro("Hemocentro Central", "Rua das Flores, 123", "1234-5678", "contato@hemocentro.com", "Dr. João", "São Paulo", "SP");

    // Criação de alguns objetos Pessoa e derivados
    tm dataNascimento = {0, 0, 0, 15, 6, 90}; // 15/07/1990
    Dependente dep1("12345678900", "Ana Silva", dataNascimento, "F", "O+", "Rua A, 10", "9876-5432");
    Doador doa1("98765432100", "Carlos Souza", dataNascimento, "M", "A-", "Rua B, 20", "8765-4321");
    Atendente atend1("45678912300", "Julia Costa", dataNascimento, "F", "B+", "Rua C, 30", "7654-3210");

    // Adiciona Dependente e Atendente ao Hemocentro
    hemocentro.adicionarDependente(dep1);
    hemocentro.adicionarAtendente(atend1);

    // Criação e cadastro de um Pedido
    Pedido pedido1(1, "O+", 500, "12345678900", false);
    hemocentro.registrarPedido(pedido1);

    // Criação e cadastro de uma Triagem
    Triagem triagem1(dataNascimento);
    hemocentro.cadastrarTriagem(doa1, triagem1);

    // Adicionar uma bolsa de sangue ao estoque
    BolsaDeSangue bolsa1{"O+", 450, {15, 7, 2024}, {15, 7, 2025}, "98765432100", "B1234"};
    Estoque estoque;
    estoque.adicionarEstoque(bolsa1);
    hemocentro.setEstoque(estoque);

    // Testar métodos de visualização
    std::cout << "Visualizando pedidos:" << std::endl;
    hemocentro.verPedidos();

    std::cout << "Visualizando triagens:" << std::endl;
    hemocentro.verTriagens();

    // Testando o método de adicionar pedido para dependente
    Pedido pedido2(2, "A-", 300, "12345678900", false);
    hemocentro.adicionarPedido(dep1, pedido2);

    std::cout << "Pedidos após adicionar novo pedido para dependente:" << std::endl;
    hemocentro.verPedidos();

    return 0;
}
