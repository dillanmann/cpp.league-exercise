#ifndef BASKETBALL_TEAM_H
#define BASKETBALL_TEAM_H

#include <string>

#include "Team.h"

using namespace std;

class BasketballTeam : public Team
{
    private:
        string courtType;
        
    public:
        BasketballTeam(string name, string coachName, int ranking, string courtType);
        ~BasketballTeam();

        void WriteToStdout() override;
};

#endif