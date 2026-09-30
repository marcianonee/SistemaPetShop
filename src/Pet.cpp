#include "../include/Pet.hpp"

Pet::Pet(std::string nome, std::string porte, std::string nomeDono) {
    _nome = nome;
    _porte = porte;
    _nomeDono = nomeDono;
}

std::string Pet::getNome() const {
    return _nome;
}

std::string Pet::getPorte() const {
    return _porte;
}

void Pet::setPorte(std::string novoPorte) {
    _porte = novoPorte;
}

void Pet::adicionarServico(std::string servico) {
    _historicoServicos.push_back(servico);
}