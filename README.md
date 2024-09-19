# Projeto Hemocentro

## Descrição

Este projeto é um sistema de gerenciamento de hemocentro desenvolvido em C++. O sistema permite o gerenciamento de doadores, dependentes, atendentes, pedidos de sangue e triagens. O projeto está organizado em diferentes módulos, cada um responsável por uma parte específica do sistema.

## Estrutura do Projeto

A estrutura do projeto é a seguinte:

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

### Manualmente com `g++`

1. **Compile os Arquivos Fonte:**

   Para compilar o projeto, você precisa compilar todos os arquivos `.cpp` e gerar o executável. Execute os seguintes comandos no terminal:

   ```sh
   g++ -o programa \
   src/Bolsa/BolsaDeSangue.cpp \
   src/Estoque/Estoque.cpp \
   src/Hemocentro/Hemocentro.cpp \
   src/Pedido/Pedido.cpp \
   src/Triagem/Triagem.cpp \
   src/Usuarios/Atendente/Atendente.cpp \
   src/Usuarios/Dependente/Dependente.cpp \
   src/Usuarios/Doador/Doador.cpp \
   src/Usuarios/Pessoa/Pessoa.cpp \
   src/main.cpp
   ```

   Este comando compila todos os arquivos de código-fonte e gera um executável chamado `programa`.

2. **Executar o Programa:**

   Após a compilação, você pode executar o programa com o comando:

   ```sh
   ./programa
   ```

### Usando Visual Studio Code

Se você estiver usando o Visual Studio Code (VSCode), o projeto já está configurado com arquivos de configuração no diretório `.vscode`. Siga estas etapas para compilar e executar o projeto:

1. **Abra o Projeto no VSCode:**

   Abra o VSCode e carregue a pasta raiz do projeto.

2. **Compile o Projeto:**

   - Abra o terminal integrado no VSCode (`Ctrl + ``).
   - No terminal, execute o comando de compilação:

     ```sh
     g++ -o programa \
     src/Bolsa/BolsaDeSangue.cpp \
     src/Estoque/Estoque.cpp \
     src/Hemocentro/Hemocentro.cpp \
     src/Pedido/Pedido.cpp \
     src/Triagem/Triagem.cpp \
     src/Usuarios/Atendente/Atendente.cpp \
     src/Usuarios/Dependente/Dependente.cpp \
     src/Usuarios/Doador/Doador.cpp \
     src/Usuarios/Pessoa/Pessoa.cpp \
     src/main.cpp
     ```

   - Isso compilará o projeto e criará o executável `programa`.

3. **Executar o Programa:**

   - No terminal integrado, execute o programa gerado:

     ```sh
     ./programa
     ```

4. **Configuração de Depuração (opcional):**

   Se desejar configurar a depuração no VSCode, você pode usar o arquivo `.vscode/launch.json`. Certifique-se de que ele está configurado corretamente para o seu projeto. Se já estiver configurado, você pode iniciar a depuração clicando no botão "Run" no menu lateral ou pressionando `F5`.

## Contribuição

Se você deseja contribuir para o projeto, por favor, faça um fork do repositório, crie uma branch para suas alterações e envie um pull request. Certifique-se de testar suas alterações antes de enviar o pull request.

## Licença

Este projeto está licenciado sob a [MIT License](LICENSE).
