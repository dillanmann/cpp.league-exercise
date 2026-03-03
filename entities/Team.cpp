#include <iostream>

#include "Team.h"

using namespace std;

Team::Team(string name, string coachName, int ranking)
{
    std::cout << "Team constructor called\n";
    this->name = name;
    this->coachName = coachName;
    this->ranking = ranking;
}

Team::~Team()
{
    std::cout << "Team destructor called\n";
}

void Team::WriteToStdout()
{
    cout << "Team Name: " << name << endl;
    cout << "Coach Name: " << coachName << endl;
    cout << "Ranking: " << ranking << endl;
}