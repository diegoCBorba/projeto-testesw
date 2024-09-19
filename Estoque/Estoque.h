#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <vector>
#include "BolsaDeSangue.h"

using namespace std;

class Estoque {
private:
    int quantidadeDisponivel;
    vector<BolsaDeSangue> bolsasDeSangue;

public:
    Estoque();

    int getQuantidadeDisponivel() const;
    vector<BolsaDeSangue> getBolsasDeSangue() const;

    void adicionarEstoque(const BolsaDeSangue& bolsa);
    bool retirarEstoque(const string& codigoIdentificacao);
    void gerarRelatorio() const;
    bool verificarDisponibilidade(const string& tipo) const;
};

#endif
