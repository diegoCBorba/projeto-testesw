#ifndef BOLSA_DE_SANGUE_H
#define BOLSA_DE_SANGUE_H

#include <string>
#include <ctime>

using namespace std;

class BolsaDeSangue {
private:
    string tipo;
    float volume; // Usar float para representar volume (ex: 450 ml)
    tm dataColeta;
    tm validade;
    string cpfDoador;
    string codigoIdentificacao;

public:
    BolsaDeSangue(string tipo, float volume, tm dataColeta, tm validade, string cpfDoador, string codigoIdentificacao);

    string getTipo() const;
    float getVolume() const;
    tm getDataColeta() const;
    tm getValidade() const;
    string getCpfDoador() const;
    string getCodigoIdentificacao() const;

    void setTipo(string tipo);
    void setVolume(float volume);
    void setDataColeta(tm dataColeta);
    void setValidade(tm validade);
    void setCpfDoador(string cpfDoador);
    void setCodigoIdentificacao(string codigoIdentificacao);

    bool VerificarValidade() const;
};

#endif
