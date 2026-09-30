/**
 * @file Cliente.hpp
 * @brief Definição da classe Cliente para o sistema do Pet Shop.
 * @author Tino Gomes Nanque
 */

#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <vector>
#include "Pet.hpp" // Inclui a classe Pet que criaremos depois

/**
 * @class Cliente
 * @brief Classe que representa um dono de animal no sistema de agendamentos.
 * 
 * Esta classe é responsável por armazenar os dados de contacto do cliente e 
 * manter a lista de Pets vinculados a ele, seguindo as responsabilidades 
 * definidas no Cartão CRC.
 */
class Cliente {
private:
    std::string _nome;      /**< Nome completo do cliente */
    std::string _telefone;  /**< Telefone de contacto do cliente */
    std::vector<Pet> _pets; /**< Lista de pets associados a este cliente */

public:
    /**
     * @brief Construtor padrão da classe Cliente.
     * @param nome Nome do cliente.
     * @param telefone Telefone de contacto do cliente.
     */
    Cliente(std::string nome, std::string telefone);

    /**
     * @brief Recupera o nome do cliente.
     * @return std::string Retorna o nome do cliente.
     */
    std::string getNome() const;

    /**
     * @brief Recupera o telefone do cliente.
     * @return std::string Retorna o telefone de contacto.
     */
    std::string getTelefone() const;

    /**
     * @brief Vincula um novo pet ao cadastro do cliente.
     * @param novoPet Objeto da classe Pet a ser adicionado.
     */
    void adicionarPet(const Pet& novoPet);

    /**
     * @brief Formata os dados do cliente para guardar em ficheiro de texto.
     * @return std::string Dados formatados (ex: "Nome;Telefone;QtdPets").
     */
    std::string formatarDadosParaSalvar() const;
};

#endif // CLIENTE_HPP