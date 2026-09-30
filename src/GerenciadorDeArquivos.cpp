#include "../include/GerenciadorDeArquivos.hpp"
#include <fstream>
#include <iostream>

GerenciadorDeArquivos::GerenciadorDeArquivos() {}

bool GerenciadorDeArquivos::salvarDados(std::string nomeArquivo, const std::vector<std::string>& dados) const {
    std::ofstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        return false;
    }
    for (const auto& linha : dados) {
        arquivo << linha << "\n";
    }
    arquivo.close();
    return true;
}

std::vector<std::string> GerenciadorDeArquivos::carregarDados(std::string nomeArquivo) const {
    std::vector<std::string> dados;
    std::ifstream arquivo(nomeArquivo);
    if (arquivo.is_open()) {
        std::string linha;
        while (std::getline(arquivo, linha)) {
            dados.push_back(linha);
        }
        arquivo.close();
    }
    return dados;
}