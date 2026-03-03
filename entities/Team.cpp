#include <iostream>

#include "Team.h"

using namespace std;

Team::Team()
{
    std::cout << "Team constructor called\n";
    name = "Default Team";
    coachName = "Default Coach";
    ranking = 0;
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