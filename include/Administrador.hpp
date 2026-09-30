/**
 * @file Administrador.hpp
 * @brief Definição da classe Administrador para o sistema do Pet Shop.
 * @author Tino Gomes Nanque
 */

#ifndef ADMINISTRADOR_HPP
#define ADMINISTRADOR_HPP

#include <string>

/**
 * @class Administrador
 * @brief Classe que representa o gestor do sistema.
 * 
 * Responsável por configurar os parâmetros de funcionamento do Pet Shop, 
 * como horários e capacidade de atendimento diário, garantindo a segurança 
 * através de login e palavra-passe.
 */
class Administrador {
private:
    std::string _login; /**< Nome de utilizador para acesso ao sistema */
    std::string _senha; /**< Palavra-passe de acesso */

public:
    /**
     * @brief Construtor padrão da classe Administrador.
     * @param login Nome de utilizador.
     * @param senha Palavra-passe.
     */
    Administrador(std::string login, std::string senha);

    /**
     * @brief Valida as credenciais de acesso do administrador.
     * @param login Tentativa de nome de utilizador.
     * @param senha Tentativa de palavra-passe.
     * @return true Se as credenciais estiverem corretas.
     */
    bool realizarLogin(std::string login, std::string senha) const;

    /**
     * @brief Configura a capacidade máxima de pets atendidos em simultâneo.
     * @param novaCapacidade Número máximo de vagas.
     */
    void configurarCapacidadeDiaria(int novaCapacidade);

    /**
     * @brief Configura o horário de funcionamento do Pet Shop.
     * @param abertura Horário de abertura (ex: "08:00").
     * @param fechamento Horário de fecho (ex: "18:00").
     */
    void configurarHorarioOperacao(std::string abertura, std::string fechamento);
};

#endif // ADMINISTRADOR_HPP