#include <iostream>
#include <string>
#include "entities/Team.h"

using namespace std;

int main() {
    cout << "I'm making a team\n";
    Team* myTeam = new Team();
    delete myTeam;
    return 0;
}