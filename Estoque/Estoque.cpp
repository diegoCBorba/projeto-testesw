#include "Estoque.h"
#include <iostream>
#include <ctime>  // Para std::tm e asctime

using namespace std;

Estoque::Estoque() : quantidadeDisponivel(0) {}

int Estoque::getQuantidadeDisponivel() const {
    return quantidadeDisponivel;
}

vector<BolsaDeSangue> Estoque::getBolsasDeSangue() const {
    return bolsasDeSangue;
}

void Estoque::adicionarEstoque(const BolsaDeSangue& bolsa) {
    bolsasDeSangue.push_back(bolsa);
    quantidadeDisponivel++;
}

bool Estoque::retirarEstoque(const string& codigoIdentificacao) {
    for (size_t i = 0; i < bolsasDeSangue.size(); i++) {
        if (bolsasDeSangue[i].getCodigoIdentificacao() == codigoIdentificacao) {
            bolsasDeSangue.erase(bolsasDeSangue.begin() + i);
            quantidadeDisponivel--;
            return true; // Sucesso ao remover
        }
    }
    return false; // Bolsa não encontrada
}

void Estoque::gerarRelatorio() const {
    cout << "Relatório de Estoque de Sangue" << endl;
    cout << "Quantidade Disponível: " << quantidadeDisponivel << endl;
    for (const auto& bolsa : bolsasDeSangue) {
        tm dataColeta = bolsa.getDataColeta();
        tm validade = bolsa.getValidade();
        cout << "------------------------" << endl;
        cout << "Tipo: " << bolsa.getTipo() << endl;
        cout << "Volume: " << bolsa.getVolume() << "ml" << endl;
        cout << "CPF Doador: " << bolsa.getCpfDoador() << endl;
        // Asctime funciona diretamente com std::tm
        cout << "Data de Coleta: " << asctime(&dataColeta);
        cout << "Validade: " << asctime(&validade);
        cout << "Código de Identificação: " << bolsa.getCodigoIdentificacao() << endl;
        cout << "------------------------" << endl;
    }
}

bool Estoque::verificarDisponibilidade(const string& tipo) const {
    for (const auto& bolsa : bolsasDeSangue) {
        if (bolsa.getTipo() == tipo && bolsa.VerificarValidade()) {
            return true; // Existe uma bolsa válida deste tipo
        }
    }
    return false; // Não há bolsas válidas do tipo solicitado
}
