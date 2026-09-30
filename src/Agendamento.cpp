#include "../include/Agendamento.hpp"

Agendamento::Agendamento(std::string data, std::string horario, std::string nomePet, std::string tipoServico) {
    _data = data;
    _horario = horario;
    _nomePet = nomePet;
    _tipoServico = tipoServico;
    _status = "Ativo"; // Por padrão, toda a nova marcação começa como ativa
}

std::string Agendamento::getData() const {
    return _data;
}

std::string Agendamento::getHorario() const {
    return _horario;
}

void Agendamento::setStatus(std::string novoStatus) {
    _status = novoStatus;
}

std::string Agendamento::formatarParaExibicao() const {
    return _data + " às " + _horario + " - Pet: " + _nomePet + " (" + _tipoServico + ") [" + _status + "]";
}