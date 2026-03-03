#include <iostream>
#include <string>

#include "entities/Team.h"
#include "entities/FootballTeam.h"

using namespace std;

int main() {
    cout << "I'm making a team\n";
    Team* myTeam = new FootballTeam("The A Team", "John Doe", 1, "4-4-2");
    myTeam -> WriteToStdout();
    myTeam -> Train();
    myTeam -> PlayMatch();
    delete myTeam;
    return 0;
}