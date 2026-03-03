#ifndef TEAM_H
#define TEAM_H

using namespace std;

class Team
{
    protected:
        string name;
        string coachName;
        int ranking;

        Team(string name, string coachName, int ranking);

    public:
        virtual ~Team();

        virtual void Train();
        virtual void PlayMatch();
        virtual void WriteToStdout();
};

#endif