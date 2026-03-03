#ifndef LEAGUE_H
#define LEAGUE_H

#include <vector>

#include "Team.h"

using namespace std;

class League
{
    private:
        vector<Team*> teams;

    public:
        League();
        ~League();

        void AddTeam(Team* team);
};

#endif