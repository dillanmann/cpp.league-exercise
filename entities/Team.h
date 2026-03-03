#ifndef TEAM_H
#define TEAM_H

using namespace std;

class Team
{
    private:
        string name;
        string coachName;
        int ranking;

    public:
        Team();
        ~Team();
        void WriteToStdout();
};

#endif