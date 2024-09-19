#ifndef DEPENDENTE_H
#define DEPENDENTE_H

#include "Pessoa.h"
#include "Pedido.h"
#include <vector>

using namespace std;

class Dependente : public Pessoa {
private:
    vector<Pedido> historicoDePedidos;

public:
    Dependente(string cpf, string nome, tm dataNascimento, string sexo, string tipoSanguineo, string endereco, string telefone);

    vector<Pedido> getHistoricoDePedidos() const;

    Pedido fazerPedido(const Pedido& pedido);
};

#endif
