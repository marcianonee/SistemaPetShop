#include "../include/Agenda.hpp"
#include <iostream>

Agenda::Agenda(int capacidade, std::string abertura, std::string fechamento) {
    _capacidadeMaxima = capacidade;
    _horarioAbertura = abertura;
    _horarioFechamento = fechamento;
}

std::vector<std::string> Agenda::buscarHorariosDisponiveis() const {
    // Horários padrão de exemplo para o funcionamento do Pet Shop
    std::vector<std::string> horarios = {"08:00", "09:00", "10:00", "11:00", "14:00", "15:00", "16:00"};
    std::vector<std::string> disponiveis;
    
    for (const auto& h : horarios) {
        if (calcularVagasRestantes(h) > 0) {
            disponiveis.push_back(h);
        }
    }
    return disponiveis;
}

int Agenda::calcularVagasRestantes(std::string horario) const {
    int ocupadas = 0;
    for (const auto& agendamento : _listaAgendamentos) {
        // Verifica se o agendamento é para este horário e não está cancelado
        if (agendamento.getHorario() == horario && agendamento.formatarParaExibicao().find("Cancelado") == std::string::npos) {
            ocupadas++;
        }
    }
    return _capacidadeMaxima - ocupadas;
}

bool Agenda::adicionarAgendamento(std::string horario, std::string nomePet) {
    if (calcularVagasRestantes(horario) > 0) {
        // Cria uma nova marcação (usando uma data e serviço padrão para simplificar a lógica atual)
        Agendamento novo("Hoje", horario, nomePet, "Banho e Tosa");
        _listaAgendamentos.push_back(novo);
        return true;
    }
    return false; // Não há vagas para este horário
}

bool Agenda::removerAgendamento(std::string horario, std::string nomePet) {
    for (auto it = _listaAgendamentos.begin(); it != _listaAgendamentos.end(); ++it) {
        // Usamos o formatarParaExibicao para verificar se o nome do pet corresponde à marcação deste horário
        if (it->getHorario() == horario && it->formatarParaExibicao().find(nomePet) != std::string::npos) {
            it->setStatus("Cancelado");
            return true;
        }
    }
    return false;
}