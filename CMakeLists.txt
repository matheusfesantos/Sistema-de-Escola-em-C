cmake_minimum_required(VERSION 3.29)
project(SOFTWARE)

set(CMAKE_CXX_STANDARD 20)

add_executable(SOFTWARE SOFTWARE.c
        "TELA LOGIN.c"
        "TELA PROFESSOR.c"
        "TELA ALUNO.c"
)
