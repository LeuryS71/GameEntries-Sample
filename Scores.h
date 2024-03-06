#ifndef SCORES_H
#define SCORES_H

#include "GameEntry.h"
#include "GENode.h"
#include <stdexcept>
using namespace std;


class Scores {
private:
    int maxEntries;
    int numEntries;
    GENode* head;
    GENode* tail;

public:
    Scores(int maxEntries = 10);
    ~Scores();

    void add(const GameEntry& e);
    GameEntry remove(int i) throw(out_of_range);
    void printAll();
};

#endif
