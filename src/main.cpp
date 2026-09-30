#include <iostream>
#include <string>
#include <vector>
#include "../include/Agenda.hpp"
#include "../include/Cliente.hpp"
#include "../include/Pet.hpp"
#include "../include/GerenciadorDeArquivos.hpp"

using namespace std;

void exibirMenu() {
    cout << "\n===================================" << endl;
    cout << "       SISTEMA PET SHOP            " << endl;
    cout << "===================================" << endl;
    cout << "1. Ver Horarios Disponiveis" << endl;
    cout << "2. Agendar Servico" << endl;
    cout << "3. Sair do Sistema" << endl;
    cout << "Escolha uma opcao: ";
}

int main() {
    // Inicializa a agenda com 5 vagas simultaneas
    Agenda agenda(5, "08:00", "18:00"); 
    GerenciadorDeArquivos gerenciador;
    
    cout << "Iniciando sistema... Todos os modulos carregados com sucesso!" << endl;
    
    int opcao = 0;
    while (opcao != 3) {
        exibirMenu();
        cin >> opcao;
        cin.ignore(); // Limpa o buffer do teclado
        
        switch (opcao) {
            case 1: {
                cout << "\n--- Horarios Disponiveis ---" << endl;
                vector<string> horarios = agenda.buscarHorariosDisponiveis();
                if(horarios.empty()) {
                    cout << "Nao ha mais horarios disponiveis hoje." << endl;
                } else {
                    for (const string& h : horarios) {
                        cout << " -> " << h << endl;
                    }
                }
                break;
            }
            case 2: {
                cout << "\n--- Novo Agendamento ---" << endl;
                string nomePet, horario;
                
                cout << "Digite o nome do Pet: ";
                getline(cin, nomePet);
                
                cout << "Digite o horario desejado (ex: 10:00): ";
                getline(cin, horario);
                
                if (agenda.adicionarAgendamento(horario, nomePet)) {
                    cout << "\n[SUCESSO] Agendamento realizado para " << nomePet << " as " << horario << "!" << endl;
                } else {
                    cout << "\n[ERRO] Nao ha vagas para este horario ou o horario e invalido." << endl;
                }
                break;
            }
            case 3: {
                cout << "\nSalvando os dados no disco..." << endl;
                vector<string> logEncerramento = {"Sistema encerrado com sucesso."};
                gerenciador.salvarDados("log_sistema.txt", logEncerramento);
                
                cout << "Sistema encerrado. Ate logo!" << endl;
                break;
            }
            default:
                cout << "\n[ERRO] Opcao invalida. Tente novamente." << endl;
        }
    }
    
    return 0;
}