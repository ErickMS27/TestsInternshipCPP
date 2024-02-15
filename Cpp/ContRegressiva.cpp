#include <iostream>
#include <chrono>
#include <thread>

void time_countdown(int time_sec) {
    for (int i = time_sec; i > 0; --i) {
        std::cout << "Contagem regressiva: " << i << " segundos\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "\nFELIZ ANO NOVO!\n";
}

int main() {
    while (true) {
        int time_count = 10;
        time_countdown(time_count);

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
