/**
 * @file Agenda.hpp
 * @brief Definição da classe Agenda para o sistema do Pet Shop.
 * @author Tino Gomes Nanque
 */

#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <string>
#include <vector>
// #include "Agendamento.hpp" // Descomentaremos isto quando criarmos a classe Agendamento

/**
 * @class Agenda
 * @brief Classe responsável por gerir a disponibilidade e as marcações diárias.
 * 
 * Controla os horários de funcionamento, a capacidade máxima de pets 
 * atendidos em simultâneo e a lista de todos os serviços marcados para o dia.
 */
class Agenda {
private:
    int _capacidadeMaxima;           /**< Número máximo de pets atendidos ao mesmo tempo */
    std::string _horarioAbertura;    /**< Horário de abertura do Pet Shop (ex: "08:00") */
    std::string _horarioFechamento;  /**< Horário de fecho do Pet Shop (ex: "18:00") */
    // std::vector<Agendamento> _listaAgendamentos; /**< Lista de marcações do dia */

public:
    /**
     * @brief Construtor padrão da classe Agenda.
     * @param capacidade Maximo de pets atendidos simultaneamente.
     * @param abertura Horário de abertura.
     * @param fechamento Horário de fecho.
     */
    Agenda(int capacidade, std::string abertura, std::string fechamento);

    /**
     * @brief Busca horários que ainda possuem vagas no dia.
     * @return std::vector<std::string> Lista de horários disponíveis.
     */
    std::vector<std::string> buscarHorariosDisponiveis() const;

    /**
     * @brief Calcula quantas vagas restam para um horário específico.
     * @param horario Horário a ser verificado.
     * @return int Número de vagas disponíveis.
     */
    int calcularVagasRestantes(std::string horario) const;

    /**
     * @brief Insere uma nova marcação na agenda.
     * @param horario Horário desejado para o serviço.
     * @param nomePet Nome do pet a ser atendido.
     * @return true Se a marcação for feita com sucesso.
     * @return false Se não houver vagas ou o horário for inválido.
     */
    bool adicionarAgendamento(std::string horario, std::string nomePet);

    /**
     * @brief Remove uma marcação cancelada da agenda.
     * @param horario Horário da marcação.
     * @param nomePet Nome do pet associado.
     * @return true Se o cancelamento for efetuado com sucesso.
     */
    bool removerAgendamento(std::string horario, std::string nomePet);
};

#endif // AGENDA_HPP