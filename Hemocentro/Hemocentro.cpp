#include "Hemocentro.h"

Hemocentro::Hemocentro(string nome, string endereco, string telefone, string email, 
                       string responsavel, string cidade, string estado)
    : nome(nome), endereco(endereco), telefone(telefone), email(email),
      responsavel(responsavel), cidade(cidade), estado(estado) {}

void Hemocentro::registrarPedido(const Pedido& pedido) {
    cout << "Registrando pedido no Hemocentro: " << nome << endl;
    cout << "Pedido: " << pedido.getQuantidade() << " bolsas de sangue tipo " 
         << pedido.getTipoSanguineo() << ". Status: " << pedido.getStatus() << endl;

    // Aqui você pode adicionar lógica para verificar estoque e ajustar a disponibilidade.
    // Por exemplo, você pode verificar os estoques disponíveis e atualizar o status.
}

string Hemocentro::getNome() const { return nome; }
string Hemocentro::getEndereco() const { return endereco; }
string Hemocentro::getTelefone() const { return telefone; }
string Hemocentro::getEmail() const { return email; }
string Hemocentro::getResponsavel() const { return responsavel; }
string Hemocentro::getCidade() const { return cidade; }
string Hemocentro::getEstado() const { return estado; }

void Hemocentro::adicionarEstoque(const Estoque& estoque) {
    capacidadeEstoque.push_back(estoque);
}

void Hemocentro::gerarRelatorioEstoque() const {
    cout << "Relatório do Hemocentro: " << nome << endl;
    for (const Estoque& estoque : capacidadeEstoque) {
        estoque.gerarRelatorio();
    }
}
