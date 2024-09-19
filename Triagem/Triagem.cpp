#include "Triagem.h"
#include <iostream>

using namespace std;

Triagem::Triagem(tm dataExame) : dataExame(dataExame) {}

tm Triagem::getDataExame() const {
    return dataExame;
}

vector<Exame> Triagem::getExames() const {
    return exames;
}

void Triagem::setDataExame(tm dataExame) {
    this->dataExame = dataExame;
}

void Triagem::cadastrarExame(const Exame& exame) {
    exames.push_back(exame);
}

void Triagem::mostrarDetalhes() const {
    cout << "Detalhes da Triagem:" << endl;
    cout << "Data do Exame: " << asctime(&dataExame);
    
    cout << "Exames:" << endl;
    for (const auto& exame : exames) {
        cout << "ID: " << exame.getId() << endl;
        cout << "Tipo: " << exame.getTipo() << endl;
        cout << "Resultado: " << exame.getResultado() << endl;
        cout << "------------------------" << endl;
    }
}
