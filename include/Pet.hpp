/**
 * @file Pet.hpp
 * @brief Definição da classe Pet para o sistema do Pet Shop.
 * @author Tino Gomes Nanque
 */

#ifndef PET_HPP
#define PET_HPP

#include <string>
#include <vector>

/**
 * @class Pet
 * @brief Classe que representa um animal de estimação no sistema.
 * 
 * Armazena os dados do animal, como nome e porte, além de manter 
 * o histórico de serviços (banho/tosa) realizados.
 */
class Pet {
private:
    std::string _nome;      /**< Nome do pet */
    std::string _porte;     /**< Porte do pet (pequeno, médio, grande) */
    std::string _nomeDono;  /**< Nome do dono responsável pelo pet */
    std::vector<std::string> _historicoServicos; /**< Lista de serviços já realizados */

public:
    /**
     * @brief Construtor padrão da classe Pet.
     * @param nome Nome do pet.
     * @param porte Porte do animal.
     * @param nomeDono Nome do dono do pet.
     */
    Pet(std::string nome, std::string porte, std::string nomeDono);

    /**
     * @brief Recupera o nome do pet.
     * @return std::string Retorna o nome do animal.
     */
    std::string getNome() const;

    /**
     * @brief Recupera o porte do pet.
     * @return std::string Retorna o porte do animal.
     */
    std::string getPorte() const;
    
    /**
     * @brief Atualiza o porte do pet caso ele cresça.
     * @param novoPorte Novo porte do animal.
     */
    void setPorte(std::string novoPorte);

    /**
     * @brief Adiciona um serviço concluído ao histórico do pet.
     * @param servico Descrição do serviço (ex: "Banho - 10/10/2026").
     */
    void adicionarServico(std::string servico);
};

#endif // PET_HPP