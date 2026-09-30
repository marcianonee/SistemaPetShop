/**
 * @file Agendamento.hpp
 * @brief Definição da classe Agendamento para o sistema do Pet Shop.
 * @author Tino Gomes Nanque
 */

#ifndef AGENDAMENTO_HPP
#define AGENDAMENTO_HPP

#include <string>

/**
 * @class Agendamento
 * @brief Classe que representa uma marcação de serviço no sistema.
 * 
 * Armazena os detalhes de um serviço marcado, incluindo a data, 
 * o horário, o pet associado, o tipo de serviço e o status da marcação.
 */
class Agendamento {
private:
    std::string _data;       /**< Data da marcação (ex: "15/10/2026") */
    std::string _horario;    /**< Horário da marcação (ex: "10:00") */
    std::string _nomePet;    /**< Nome do pet que será atendido */
    std::string _tipoServico;/**< Tipo do serviço (ex: "Banho", "Tosa") */
    std::string _status;     /**< Status atual (ex: "Ativo", "Cancelado") */

public:
    /**
     * @brief Construtor padrão da classe Agendamento.
     * @param data Data do serviço.
     * @param horario Horário do serviço.
     * @param nomePet Nome do animal.
     * @param tipoServico Tipo de serviço a ser realizado.
     */
    Agendamento(std::string data, std::string horario, std::string nomePet, std::string tipoServico);

    /**
     * @brief Recupera a data do agendamento.
     * @return std::string Retorna a data marcada.
     */
    std::string getData() const;

    /**
     * @brief Recupera o horário do agendamento.
     * @return std::string Retorna o horário marcado.
     */
    std::string getHorario() const;

    /**
     * @brief Altera o status da marcação (ex: para cancelar).
     * @param novoStatus O novo status da marcação.
     */
    void setStatus(std::string novoStatus);

    /**
     * @brief Formata os dados do agendamento para exibição no ecrã.
     * @return std::string String formatada com os detalhes do serviço.
     */
    std::string formatarParaExibicao() const;
};

#endif // AGENDAMENTO_HPP