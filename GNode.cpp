#include "GENode.h"

GENode::GENode(const GameEntry& entry) : elem(entry), next(nullptr) {}

GENode::~GENode() {}
