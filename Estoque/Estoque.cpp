#include "Estoque.h"

Estoque::Estoque() : quantidadeDisponivel(0) {}

int Estoque::getQuantidadeDisponivel() const { return quantidadeDisponivel; }

void Estoque::adicionarAoEstoque(const BolsaDeSangue& bolsa) {
    bolsas.push_back(bolsa);
    quantidadeDisponivel++;
}

bool Estoque::retirarDoEstoque(const string& codigoIdentificacao) {
    for (size_t i = 0; i < bolsas.size(); i++) {
        if (bolsas[i].getCodigoIdentificacao() == codigoIdentificacao) {
            bolsas.erase(bolsas.begin() + i);
            quantidadeDisponivel--;
            return true; // Bolsa retirada com sucesso
        }
    }
    return false; // Bolsa não encontrada
}

void Estoque::gerarRelatorio() const {
    cout << "Relatório do Estoque:" << endl;
    cout << "Quantidade disponível: " << quantidadeDisponivel << endl;
    for (const BolsaDeSangue& bolsa : bolsas) {
        cout << "Bolsa: " << bolsa.getCodigoIdentificacao() 
             << ", Tipo: " << bolsa.getTipo()
             << ", Volume: " << bolsa.getVolume() << " litros"
             << ", Data de Coleta: " << bolsa.getDataColeta()
             << ", Validade: " << bolsa.getValidade() << endl;
    }
}

bool Estoque::verificarDisponibilidade(const string& tipoSanguineo) const {
    for (const BolsaDeSangue& bolsa : bolsas) {
        if (bolsa.getTipo() == tipoSanguineo) {
            return true;
        }
    }
    return false;
}
