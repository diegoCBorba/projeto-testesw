#ifndef DEPENDENTE_H
#define DEPENDENTE_H

#include <iostream>
#include <string>
#include <vector>
#include "../Pessoa/Pessoa.h"

using namespace std;

class Dependente : public Pessoa {
private:
    vector<string> historicoPedidos;  // Para armazenar pedidos (futuramente será outra classe)

public:
    Dependente(int id, string cpf, string nome, string dataNascimento, string sexo,
               string tipoSanguineo, string endereco, string telefone);

    void adicionarPedido(const string& pedido);
    const vector<string>& getHistoricoPedidos() const;
};

#endif
