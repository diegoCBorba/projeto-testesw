#include "Triagem.h"

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
