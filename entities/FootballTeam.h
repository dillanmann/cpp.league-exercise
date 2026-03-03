#ifndef FOOTBALL_TEAM_H
#define FOOTBALL_TEAM_H

#include <string>

#include "Team.h"

using namespace std;

class FootballTeam : public Team
{
    private:
        string formation;
        
    public:
        FootballTeam(string name, string coachName, int ranking, string formation);
        ~FootballTeam();

        void WriteToStdout() override;
};

#endif