# C++ Estrutura de Dados

Este projeto implementa estruturas de dados clássicas em C++:

- **Pilha**
- **Fila**
- **Lista Encadeada**
- **Selection Sort**

## Como compilar e executar

1. Clone o repositório:
   `bash
   git clone https://github.com/Cris-noscore/C++-Estrutura-de-Dados.git

   cd C++-Estrutura-de-Dados

Compile o projeto:

./C++-Estrutura-de-Dados

Estrutura do Projeto

include/: Headers das estruturas de dados.

src/: Implementação das estruturas e programa principal.

CMakeLists.txt: Configuração do CMake para compilação.

---

### 11. `CMakeLists.txt`
`cmake
cmake_minimum_required(VERSION 3.10)
project(C++-Estrutura-de-Dados)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

Como Usar

Clone o repositório.

Compile com CMake.

Execute o programa para ver exemplos de uso das estruturas.

add_executable(C++-Estrutura-de-Dados src/Pilha.cpp src/Fila.cpp src/ListaEncadeada.cpp src/SelectionSort.cpp src/Main.cpp)
