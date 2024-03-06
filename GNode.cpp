#ifndef GENODE_H
#define GENODE_H
#include "GameEntry.h"

class GENode {
public:
    GENode(const GameEntry& entry);
    ~GENode();
private:
    GameEntry elem;
    GENode* next;
    friend class Scores;
};

#endif
