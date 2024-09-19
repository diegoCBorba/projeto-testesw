#ifndef BOLSA_DE_SANGUE_H
#define BOLSA_DE_SANGUE_H

#include <iostream>
#include <string>

using namespace std;

class BolsaDeSangue {
private:
    string tipo;
    double volume; // em litros
    string dataColeta;
    string validade;
    string codigoIdentificacao;

public:
    BolsaDeSangue(string tipo, double volume, string dataColeta, string validade, string codigoIdentificacao);

    string getTipo() const;
    double getVolume() const;
    string getDataColeta() const;
    string getValidade() const;
    string getCodigoIdentificacao() const;

    // Método para verificar se a bolsa está válida
    bool verificarValidade(const string& dataAtual) const;
};

#endif
