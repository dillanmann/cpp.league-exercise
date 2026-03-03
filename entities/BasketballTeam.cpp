#include <iostream>

#include "BasketballTeam.h"

using namespace std;

BasketballTeam::BasketballTeam(string name, string coachName, int ranking, string courtType) 
    : Team(name, coachName, ranking)
{
    cout << "BasketballTeam constructor called\n";
    this->courtType = courtType;
}

BasketballTeam::~BasketballTeam()
{
    cout << "BasketballTeam destructor called\n";
}

void BasketballTeam::WriteToStdout()
{
    Team::WriteToStdout();
    cout << "Court Type: " << courtType << endl;
}