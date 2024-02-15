#include <iostream>

std::string check_parity(int number) {
    if (number % 2 == 0) {
        return "Par";
    } else {
        return "Ímpar";
    }
}

int main() {
    while (true) {
        int number_typed;

        std::cout << "Digite um número inteiro: ";
        std::cin >> number_typed;

        std::string output_result = check_parity(number_typed);

        std::cout << "\nO número " << number_typed << " é: " << output_result << ".\n";

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
