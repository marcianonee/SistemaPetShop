/**
 * @file GerenciadorDeArquivos.hpp
 * @brief Definição da classe GerenciadorDeArquivos para o sistema do Pet Shop.
 * @author Tino Gomes Nanque
 */

#ifndef GERENCIADOR_DE_ARQUIVOS_HPP
#define GERENCIADOR_DE_ARQUIVOS_HPP

#include <string>
#include <vector>

/**
 * @class GerenciadorDeArquivos
 * @brief Classe responsável pela persistência de dados em ficheiros de texto.
 * 
 * Centraliza a leitura e escrita dos dados (clientes, pets, agendamentos) 
 * no disco, garantindo que a informação não se perde quando o programa é fechado.
 */
class GerenciadorDeArquivos {
public:
    /**
     * @brief Construtor padrão.
     */
    GerenciadorDeArquivos();

    /**
     * @brief Guarda uma lista de linhas de texto num ficheiro.
     * @param nomeArquivo Nome do ficheiro de destino (ex: "clientes.txt").
     * @param dados Vetor contendo as linhas de texto a serem guardadas.
     * @return true Se a gravação for bem-sucedida.
     */
    bool salvarDados(std::string nomeArquivo, const std::vector<std::string>& dados) const;

    /**
     * @brief Lê os dados de um ficheiro de texto.
     * @param nomeArquivo Nome do ficheiro a ser lido (ex: "clientes.txt").
     * @return std::vector<std::string> Vetor contendo as linhas lidas do ficheiro.
     */
    std::vector<std::string> carregarDados(std::string nomeArquivo) const;
};

#endif // GERENCIADOR_DE_ARQUIVOS_HPP