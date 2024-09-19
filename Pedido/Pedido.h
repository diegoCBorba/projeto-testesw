#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

using namespace std;

class Pedido {
private:
    int id;
    string tipoSanguineo;
    float quantidade; // Usar float para representar a quantidade (ex: 500 ml)
    string cpfDependente;
    bool status;

public:
    Pedido(int id, string tipoSanguineo, float quantidade, string cpfDependente, bool status);

    int getId() const;
    string getTipoSanguineo() const;
    float getQuantidade() const;
    string getCpfDependente() const;
    bool getStatus() const;

    void setId(int id);
    void setTipoSanguineo(string tipoSanguineo);
    void setQuantidade(float quantidade);
    void setCpfDependente(string cpfDependente);
    void setStatus(bool status);

    void registrarPedido(); // Altera o status do pedido para "registrado"
};

#endif
