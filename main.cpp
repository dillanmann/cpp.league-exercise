#include <iostream>
#include <string>

#include "entities/Team.h"
#include "entities/FootballTeam.h"
#include "entities/BasketballTeam.h"
#include "entities/League.h"

using namespace std;

Team* CreateAndUseFootballTeam() {
    cout << "Creating a football team\n";
    FootballTeam* myFootballTeam = new FootballTeam("The A Team", "John Doe", 1, "4-4-2");
    return myFootballTeam;
}

Team* CreateBasketballTeam() {
    cout << "Creating a basketball team\n";
    BasketballTeam* myBasketballTeam = new BasketballTeam("The B Team", "Jane Smith", 2, "Indoor");
    return myBasketballTeam;
}

int main() {
    Team* footballTeam = CreateAndUseFootballTeam();
    Team* basketballTeam = CreateBasketballTeam();

    League* league = new League();
    league->AddTeam(footballTeam);
    league->AddTeam(basketballTeam);

    delete league;

    return 0;
}