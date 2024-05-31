#include <iostream>

class Player {
public:
    static int playerCount; // Static member variable

    Player() {
        playerCount++;
    }

    ~Player() {
        playerCount--;
    }

    static int getPlayerCount() {
        return playerCount;
    }
};

int Player::playerCount = 0; // Initialize static member variable

int main() {
    Player p1, p2;
    std::cout << "Current number of players: " << Player::getPlayerCount() << std::endl;
    {
        Player p3;
        std::cout << "Current number of players: " << Player::getPlayerCount() << std::endl;
    }
    std::cout << "Current number of players: " << Player::getPlayerCount() << std::endl;
    return 0;
}
