#ifndef PEDIDO_H
#define PEDIDO_H

#include <iostream>
#include <string>

using namespace std;

class Pedido {
private:
    string tipoSanguineo;
    int quantidade;  // Quantidade solicitada
    string status;

public:
    Pedido(string tipoSanguineo, int quantidade, string status = "Pendente");

    string getTipoSanguineo() const;
    int getQuantidade() const;
    string getStatus() const;
    void setStatus(const string& novoStatus);

    // Método para registrar um pedido
    void registrarPedido();
};

#endif
