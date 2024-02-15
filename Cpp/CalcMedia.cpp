#include <iostream>
#include <vector>

int main() {
    while (true) {
        std::vector<double> notas;

        double nota;
        for (int i = 0; i < 4; ++i) {
            std::cout << "Digite a sua " << i + 1 << "ª nota: ";
            std::cin >> nota;

            while (nota < 0 || nota > 10) {
                std::cout << "Nota inválida. Por favor, digite uma nota entre 0 a 10: ";
                std::cin >> nota;
            }

            notas.push_back(nota);
        }

        double media = 0.0;
        for (const double& nota : notas) {
            media += nota;
        }
        media /= notas.size();

        std::cout << "\nNotas inseridas:\n";
        for (size_t i = 0; i < notas.size(); ++i) {
            std::cout << i + 1 << "º Nota: " << notas[i] << "\n";
        }

        std::cout << "\nMédia das notas = " << media << "\n";

        if (media >= 7) {
            std::cout << "\nVocê está aprovado(a)!\n";
        } else if (media >= 4 && media < 7) {
            std::cout << "\nVocê está em recuperação.\n";
        } else {
            std::cout << "\nVocê está reprovado(a).\n";
        }

        std::string restart;
        std::cout << "\nDeseja reiniciar a aplicação? Se SIM, clique Y. Caso contrário, clique N:\n";
        std::cin >> restart;

        if (restart != "y" && restart != "Y") {
            std::cout << "\nAplicação encerrada.\n";
            break;
        }
    }

    return 0;
}
