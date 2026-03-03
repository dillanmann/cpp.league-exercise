#include <iostream>

#include "League.h"

League::League()
{
    teams = vector<Team*>();
}

League::~League()
{
    cout << "League destructor called\n";
    for (Team* team : teams) {
        delete team;
    }
    teams.clear();
}

void League::AddTeam(Team* team)
{
    teams.push_back(team);
}