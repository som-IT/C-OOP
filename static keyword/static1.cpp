#include <iostream>

void scoreGoal() {
    static int totalGoals = 0; // Static variable retains its value between function calls
    totalGoals++;
    std::cout << "Goal scored! Total goals: " << totalGoals << std::endl;
}

int main() {
    scoreGoal();
    scoreGoal();
    scoreGoal();
    return 0;
}
