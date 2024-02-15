#include <iostream>

int main() {
    while (true) {
        double nota_1, nota_2, nota_3, nota_4;

        std::cout << "Digite a sua primeira nota: ";
        std::cin >> nota_1;

        while (nota_1 < 0 || nota_1 > 10) {
            std::cout << "Nota inválida. Por favor, digite uma nota entre 0 a 10: ";
            std::cin >> nota_1;
        }

        std::cout << "\nDigite a sua segunda nota: ";
        std::cin >> nota_2;

        while (nota_2 < 0 || nota_2 > 10) {
            std::cout << "Nota inválida. Por favor, digite uma nota entre 0 a 10: ";
            std::cin >> nota_2;
        }

        std::cout << "\nDigite a sua terceira nota: ";
        std::cin >> nota_3;

        while (nota_3 < 0 || nota_3 > 10) {
            std::cout << "Nota inválida. Por favor, digite uma nota entre 0 a 10: ";
            std::cin >> nota_3;
        }

        std::cout << "\nDigite a sua quarta nota: ";
        std::cin >> nota_4;

        while (nota_4 < 0 || nota_4 > 10) {
            std::cout << "Nota inválida. Por favor, digite uma quarta entre 0 a 10: ";
            std::cin >> nota_4;
        }

        double media = (nota_1 + nota_2 + nota_3 + nota_4) / 4;

        std::cout << "\nNotas inseridas:\n";
        std::cout << "Primeira nota: " << nota_1 << "\n";
        std::cout << "Segunda nota: " << nota_2 << "\n";
        std::cout << "Terceira nota: " << nota_3 << "\n";
        std::cout << "Quarta nota: " << nota_4 << "\n";

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
            std::cout << "Aplicação encerrada.\n";
            break;
        }
    }

    return 0;
}
