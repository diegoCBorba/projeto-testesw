#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include <iostream>
#include "Usuarios/Doador/Doador.h"
#include "Usuarios/Administrador/Administrador.h"
#include "Usuarios/Dependente/Dependente.h"
#include "Usuarios/Atendente/Atendente.h"
#include "Bolsa/BolsaDeSangue.h"
#include "Estoque/Estoque.h"
#include "Hemocentro/Hemocentro.h"
#include "Pedido/Pedido.h"
#include "Exame/Exame.h"
#include "Triagem/Triagem.h"

int main() {
    Doador doador1(1, "12345678900", "João Silva", "01/01/1980", "Masculino", "O+", "Rua A, 123", "99999-9999");

    BolsaDeSangue bolsa1("O+", 0.5, "10/09/2024", "10/12/2024", "BOLSA123");

    Estoque estoque1;
    estoque1.adicionarAoEstoque(bolsa1);

    estoque1.gerarRelatorio();

    Hemocentro hemocentro1("Hemocentro Central", "Rua B, 456", "88888-8888", "contato@hemocentro.com", 
                           "Maria Souza", "Cidade XYZ", "Estado ABC");
    hemocentro1.adicionarEstoque(estoque1);

    Pedido pedido1("O+", 2);
    pedido1.registrarPedido();

    hemocentro1.registrarPedido(pedido1);

    hemocentro1.gerarRelatorioEstoque();

    Exame exame1("HIV", "Negativo");

    Triagem triagem1("10/09/2024");
    triagem1.registrarExame(exame1);

    triagem1.exibirExames();

    return 0;
}
