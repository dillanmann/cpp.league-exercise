#include <iostream>
#include <string>

#include "entities/Team.h"
#include "entities/FootballTeam.h"
#include "entities/BasketballTeam.h"

using namespace std;

void CreateAndUseFootballTeam() {
    cout << "Creating a football team\n";
    FootballTeam* myFootballTeam = new FootballTeam("The A Team", "John Doe", 1, "4-4-2");
    myFootballTeam -> WriteToStdout();
    myFootballTeam -> Train();
    myFootballTeam -> PlayMatch();
    delete myFootballTeam;
}

void CreateAndUseBasketballTeam() {
    cout << "Creating a basketball team\n";
    BasketballTeam* myBasketballTeam = new BasketballTeam("The B Team", "Jane Smith", 2, "Indoor");
    myBasketballTeam -> WriteToStdout();
    myBasketballTeam -> Train();
    myBasketballTeam -> PlayMatch();
    delete myBasketballTeam;
}

int main() {
    CreateAndUseFootballTeam();
    CreateAndUseBasketballTeam();
    return 0;
}