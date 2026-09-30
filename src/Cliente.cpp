#include "../include/Cliente.hpp"

Cliente::Cliente(std::string nome, std::string telefone) {
    _nome = nome;
    _telefone = telefone;
}

std::string Cliente::getNome() const {
    return _nome;
}

std::string Cliente::getTelefone() const {
    return _telefone;
}

void Cliente::adicionarPet(const Pet& novoPet) {
    _pets.push_back(novoPet);
}

std::string Cliente::formatarDadosParaSalvar() const {
    // Formata os dados separados por ponto e vírgula para guardar num ficheiro de texto
    return _nome + ";" + _telefone + ";" + std::to_string(_pets.size());
}