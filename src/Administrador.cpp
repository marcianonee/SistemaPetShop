#include "../include/Administrador.hpp"

Administrador::Administrador(std::string login, std::string senha) {
    _login = login;
    _senha = senha;
}

bool Administrador::realizarLogin(std::string login, std::string senha) const {
    // Retorna verdadeiro apenas se o login e a palavra-passe coincidirem exatamente
    return (_login == login && _senha == senha);
}

void Administrador::configurarCapacidadeDiaria(int novaCapacidade) {
    // Num cenário completo, esta função atualizaria a capacidade diretamente na Agenda.
    // Esta estrutura deixa a porta aberta para essa integração futura.
}

void Administrador::configurarHorarioOperacao(std::string abertura, std::string fechamento) {
    // Da mesma forma, aqui seriam atualizados os horários de operação do sistema.
}