#ifndef GAMEENTRY_H
#define GAMEENTRY_H
#include <string>

using namespace std;

class GameEntry {
private:
    string name;
    int score;
public:
    GameEntry(const string& n = "", int s = 0);
    ~GameEntry();
    string getName() const;
    int getScore() const;
};

#endif
