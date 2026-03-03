#include <iostream>
#include <string>

using namespace std;

class Team
{
    public:
        Team() {
            cout << "Team constructor called\n";
        }
};

int main() {
    cout << "I'm making a team\n";
    Team myTeam;
    return 0;
}