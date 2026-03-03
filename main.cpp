#include <iostream>
#include <string>
#include "entities/Team.h"

using namespace std;

int main() {
    cout << "I'm making a team\n";
    Team* myTeam = new Team("The A Team", "John Doe", 1);
    myTeam -> WriteToStdout();
    myTeam -> Train();
    myTeam -> PlayMatch();
    delete myTeam;
    return 0;
}