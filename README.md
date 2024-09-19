# Projeto Hemocentro

Este projeto simula um sistema de hemocentro, incluindo funcionalidades para gestão de doadores, estoque de bolsas de sangue, triagens, e mais. 

## Estrutura do Projeto

O projeto está estruturado da seguinte forma:

- `main.cpp` - Arquivo principal que contém o código de teste.
- `Usuarios/` - Contém classes relacionadas aos usuários:
  - `Administrador/` - `Administrador.h`, `Administrador.cpp`
  - `Atendente/` - `Atendente.h`, `Atendente.cpp`
  - `Dependente/` - `Dependente.h`, `Dependente.cpp`
  - `Doador/` - `Doador.h`, `Doador.cpp`
  - `Pessoa/` - `Pessoa.h`, `Pessoa.cpp`
- `Bolsa/` - Contém `BolsaDeSangue.h`, `BolsaDeSangue.cpp`
- `Estoque/` - Contém `Estoque.h`, `Estoque.cpp`
- `Exame/` - Contém `Exame.h`, `Exame.cpp`
- `Hemocentro/` - Contém `Hemocentro.h`, `Hemocentro.cpp`
- `Pedido/` - Contém `Pedido.h`, `Pedido.cpp`
- `Triagem/` - Contém `Triagem.h`, `Triagem.cpp`
- `Hospital/` - Contém `Hospital.h`, `Hospital.cpp`

## Compilação

Para compilar o projeto, você pode usar o compilador `g++` com o seguinte comando:

```sh
g++ -o programa \
    main.cpp \
    Usuarios/Administrador/Administrador.cpp \
    Usuarios/Atendente/Atendente.cpp \
    Usuarios/Dependente/Dependente.cpp \
    Usuarios/Doador/Doador.cpp \
    Usuarios/Pessoa/Pessoa.cpp \
    Bolsa/BolsaDeSangue.cpp \
    Estoque/Estoque.cpp \
    Exame/Exame.cpp \
    Hemocentro/Hemocentro.cpp \
    Pedido/Pedido.cpp \
    Triagem/Triagem.cpp \
    Hospital/Hospital.cpp \
    -IUsuarios \
    -IBolsa \
    -IEstoque \
    -IExame \
    -IHemocentro \
    -IPedido \
    -ITriagem \
    -IHospital
```

Este comando compila todos os arquivos `.cpp` e gera um executável chamado `programa`.

## Execução

Após a compilação, você pode rodar o programa executável gerado com o seguinte comando:

```sh
./programa
```

Isso irá iniciar o programa e executar o código de teste definido no `main.cpp`.

## Configuração no VS Code

Para facilitar o desenvolvimento e a compilação, você pode configurar o VS Code para compilar e depurar o projeto.

### Configuração de Compilação

Crie um arquivo `.vscode/tasks.json` com o seguinte conteúdo para definir a tarefa de build:

```json
{
  "version": "2.0.0",
  "tasks": [
      {
          "label": "build",
          "command": "g++",
          "args": [
              "-o", "programa", 
              "main.cpp",
              "Usuarios/Administrador/Administrador.cpp",
              "Usuarios/Atendente/Atendente.cpp",
              "Usuarios/Dependente/Dependente.cpp",
              "Usuarios/Doador/Doador.cpp",
              "Usuarios/Pessoa/Pessoa.cpp",
              "Bolsa/BolsaDeSangue.cpp",
              "Estoque/Estoque.cpp",
              "Exame/Exame.cpp",
              "Hemocentro/Hemocentro.cpp",
              "Pedido/Pedido.cpp",
              "Triagem/Triagem.cpp",
              "Hospital/Hospital.cpp",
              "-IUsuarios",
              "-IBolsa",
              "-IEstoque",
              "-IExame",
              "-IHemocentro",
              "-IPedido",
              "-ITriagem",
              "-IHospital"
          ],
          "group": {
              "kind": "build",
              "isDefault": true
          },
          "problemMatcher": ["$gcc"],
          "detail": "Compila o projeto C++."
      }
  ]
}
```

### Configuração de Debug

Crie um arquivo `.vscode/launch.json` com o seguinte conteúdo para configurar o debug:

```json
{
  "version": "0.2.0",
  "configurations": [
      {
          "name": "Debug",
          "type": "cppdbg",
          "request": "launch",
          "program": "${workspaceFolder}/programa",
          "args": [],
          "stopAtEntry": false,
          "cwd": "${workspaceFolder}",
          "environment": [],
          "externalConsole": false,
          "MIMode": "gdb",
          "setupCommands": [
              {
                  "description": "Enable pretty-printing for gdb",
                  "ignoreFailures": true,
                  "text": "-enable-pretty-printing"
              }
          ],
          "preLaunchTask": "build",
          "miDebuggerPath": "/usr/bin/gdb",
          "internalConsoleOptions": "openOnSessionStart",
          "logging": {
              "engineLogging": true
          }
      }
  ]
}
```

Isso permitirá compilar e depurar o projeto diretamente do VS Code.

## Contribuição

Se você deseja contribuir para este projeto, por favor, faça um fork e envie um pull request com suas alterações.

## Licença

Este projeto está licenciado sob a [Licença XYZ](LICENSE).

---

Se você tiver dúvidas ou encontrar problemas, sinta-se à vontade para abrir uma issue no repositório!
