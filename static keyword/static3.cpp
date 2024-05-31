#include <iostream>

namespace {
    static int totalMatches = 0; // Static variable internal to this file
}

void addMatch() {
    totalMatches++;
    std::cout << "Match added. Total matches: " << totalMatches << std::endl;
}

int main() {
    addMatch();
    addMatch();
    std::cout << "Total matches in the season: " << totalMatches << std::endl;
    return 0;
}
