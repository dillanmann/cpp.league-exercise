#include <iostream>

#include "FootballTeam.h"

using namespace std;

FootballTeam::FootballTeam(string name, string coachName, int ranking, string formation) 
    : Team(name, coachName, ranking)
{
    cout << "FootballTeam constructor called\n";
    this->formation = formation;
}

FootballTeam::~FootballTeam()
{
    cout << "FootballTeam destructor called\n";
}

void FootballTeam::Train()
{
    cout << name << " is training with formation " << formation << ".\n";
}

void FootballTeam::PlayMatch()
{
    cout << name << " is playing a match with formation " << formation << ".\n";
}

void FootballTeam::WriteToStdout()
{
    Team::WriteToStdout();
    cout << "Formation: " << formation << endl;
}