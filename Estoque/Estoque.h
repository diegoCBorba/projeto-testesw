#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <iostream>
#include <vector>
#include "../Bolsa/BolsaDeSangue.h"

using namespace std;

class Estoque {
private:
    int quantidadeDisponivel;
    vector<BolsaDeSangue> bolsas;

public:
    Estoque();

    int getQuantidadeDisponivel() const;

    // Método para adicionar bolsa ao estoque
    void adicionarAoEstoque(const BolsaDeSangue& bolsa);

    // Método para retirar bolsa do estoque
    bool retirarDoEstoque(const string& codigoIdentificacao);

    // Método para gerar relatório do estoque
    void gerarRelatorio() const;

    // Método para verificar disponibilidade de bolsas de um tipo específico
    bool verificarDisponibilidade(const string& tipoSanguineo) const;
};

#endif
