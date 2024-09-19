#ifndef DOADOR_H
#define DOADOR_H

#include "Pessoa.h"
#include "BolsaDeSangue.h"
#include "Triagem.h"
#include <vector>

using namespace std;

class Doador : public Pessoa {
private:
    vector<BolsaDeSangue> historicoDeDoacoes;
    vector<Triagem> historicoDeTriagens;

public:
    Doador(string cpf, string nome, tm dataNascimento, string sexo, string tipoSanguineo, string endereco, string telefone);

    vector<BolsaDeSangue> getHistoricoDeDoacoes() const;
    vector<Triagem> getHistoricoDeTriagens() const;

    BolsaDeSangue doarBolsa(const BolsaDeSangue& bolsa);
    Triagem fazerTrigem(const Triagem& triagem);
};

#endif
