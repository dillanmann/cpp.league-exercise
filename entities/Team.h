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
        Team(string name, string coachName, int ranking);
        ~Team();

        void Train();
        void PlayMatch();
        void WriteToStdout();
};

#endif