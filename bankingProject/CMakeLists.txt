cmake_minimum_required(VERSION 3.10)

# Proje Adı
project(bank)

# C++ Standartını Belirleme
set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    src/main.cpp
    src/account.cpp
)

# Header ve Kaynak Dosyalarını Belirleme
include_directories(include)
add_executable(account src/main.cpp src/account.cpp)
