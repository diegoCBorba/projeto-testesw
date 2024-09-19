# Projeto Hemocentro

Este projeto é uma simulação de um sistema de gerenciamento de hemocentros, incluindo funcionalidades para triagens, pedidos de sangue, e gestão de estoque.

## Estrutura do Projeto

O projeto é organizado da seguinte forma:

```
src/
    Bolsa/
        BolsaDeSangue.cpp
        BolsaDeSangue.h
    Estoque/
        Estoque.cpp
        Estoque.h
    Hemocentro/
        Hemocentro.cpp
        Hemocentro.h
    Pedido/
        Pedido.cpp
        Pedido.h
    Triagem/
        Triagem.cpp
        Triagem.h
        Exame.cpp
        Exame.h
    Usuarios/
        Atendente/
            Atendente.cpp
            Atendente.h
        Dependente/
            Dependente.cpp
            Dependente.h
        Doador/
            Doador.cpp
            Doador.h
        Pessoa/
            Pessoa.cpp
            Pessoa.h
    main.cpp
```

## Compilação

Para compilar o projeto, você pode usar o compilador `g++`. Certifique-se de estar na raiz do diretório do projeto e execute o seguinte comando:

```sh
g++ -o programa \
-IBolsa \
-IEstoque \
-IHemocentro \
-IPedido \
-ITriagem \
-IUsuarios/Atendente \
-IUsuarios/Dependente \
-IUsuarios/Doador \
-IUsuarios/Pessoa \
Bolsa/BolsaDeSangue.cpp \
Estoque/Estoque.cpp \
Hemocentro/Hemocentro.cpp \
Pedido/Pedido.cpp \
Triagem/Triagem.cpp \
Usuarios/Atendente/Atendente.cpp \
Usuarios/Dependente/Dependente.cpp \
Usuarios/Doador/Doador.cpp \
Usuarios/Pessoa/Pessoa.cpp \
Triagem/Exame.cpp \
main.cpp
```

### Explicação dos Parâmetros

- `-o programa`: Define o nome do arquivo executável gerado.
- `-I<diretório>`: Especifica os diretórios onde o compilador deve procurar os arquivos de cabeçalho (`.h`).

## Execução

Após a compilação bem-sucedida, você pode executar o programa gerado com o comando:

```sh
./programa
```

Certifique-se de que todos os arquivos `.cpp` e `.h` estão corretamente incluídos e que não há erros de sintaxe ou de caminho de arquivo.

## Problemas Comuns

Se você encontrar erros relacionados a referências indefinidas, verifique:

- Se todos os arquivos `.cpp` estão incluídos na compilação.
- Se todos os arquivos `.h` necessários estão corretamente incluídos e são encontrados pelo compilador.

Para depurar, você pode compilar com a opção `-g` para gerar informações de depuração:

```sh
g++ -g -o programa \
-IBolsa \
-IEstoque \
-IHemocentro \
-IPedido \
-ITriagem \
-IUsuarios/Atendente \
-IUsuarios/Dependente \
-IUsuarios/Doador \
-IUsuarios/Pessoa \
Bolsa/BolsaDeSangue.cpp \
Estoque/Estoque.cpp \
Hemocentro/Hemocentro.cpp \
Pedido/Pedido.cpp \
Triagem/Triagem.cpp \
Usuarios/Atendente/Atendente.cpp \
Usuarios/Dependente/Dependente.cpp \
Usuarios/Doador/Doador.cpp \
Usuarios/Pessoa/Pessoa.cpp \
Triagem/Exame.cpp \
main.cpp
```

Se precisar de mais ajuda, consulte a documentação do `g++` ou a seção de problemas conhecidos deste README.
