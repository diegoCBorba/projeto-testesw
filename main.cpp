#include <iostream>
#include "Estoque.h"
#include "BolsaDeSangue.h"
#include <vector>
#include <ctime>

// Função auxiliar para criar uma data fictícia
tm criarData(int dia, int mes, int ano) {
    tm data = {};
    data.tm_mday = dia;
    data.tm_mon = mes - 1; // Meses são indexados a partir de 0
    data.tm_year = ano - 1900; // Anos desde 1900
    return data;
}

// Função auxiliar para criar uma bolsa de sangue fictícia
BolsaDeSangue criarBolsa(int id, const std::string& tipo, const std::string& codigo) {
    BolsaDeSangue bolsa(tipo, 500, criarData(1, 1, 2024), criarData(1, 1, 2025), "12345678900", codigo);

    return bolsa;
}

int main() {
    Estoque estoque;

    // Adicionando 20 bolsas de sangue fictícias ao estoque
    for (int i = 0; i < 20; ++i) {
        BolsaDeSangue bolsa = criarBolsa(i, "A+", "codigo_" + std::to_string(i));
        estoque.adicionarEstoque(bolsa);
    }

    // Exibindo o relatório do estoque
    estoque.gerarRelatorio();

    // Verificando a disponibilidade de bolsas do tipo "A+"
    if (estoque.verificarDisponibilidade("A+")) {
        std::cout << "Existem bolsas de tipo A+ disponíveis no estoque." << std::endl;
    } else {
        std::cout << "Não há bolsas de tipo A+ disponíveis no estoque." << std::endl;
    }

    return 0;
}
