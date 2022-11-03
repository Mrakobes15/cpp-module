#include "Zombie.hpp"
#include <iostream>

int main(void) {
    int N = 10;
    Zombie *horde = zombieHorde(N, "Jack");

    for (int i = 0; i < N; i++) {
        std::cout << i << ": ";
        horde[i].announce();
    }

    delete [] horde;

    return 0;
}