#include "Triagem.h"

Triagem::Triagem(string dataExame) : dataExame(dataExame) {}

string Triagem::getDataExame() const { return dataExame; }

void Triagem::registrarExame(const Exame& exame) {
    listaExames.push_back(exame);
}

const vector<Exame>& Triagem::getListaExames() const {
    return listaExames;
}

void Triagem::exibirExames() const {
    cout << "Exames realizados em: " << dataExame << endl;
    for (const Exame& exame : listaExames) {
        cout << "Tipo: " << exame.getTipo() 
             << ", Resultado: " << exame.getResultado() << endl;
    }
}
