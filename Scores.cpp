#include <iostream>
#include "Scores.h"
#include "GENode.h"

Scores::Scores(int maxEnt) : maxEntries(maxEnt), numEntries(0), head(nullptr), tail(nullptr) {}

Scores::~Scores() {
    while (head) {
        GENode* temp = head;
        head = head->next;
        delete temp;
    }
}
void Scores::add(const GameEntry& e) {
    GENode* newNode = new GENode(e);
    newNode->next = nullptr;
    if (numEntries == 0) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;

        if (numEntries >= maxEntries) {
            remove(0);
        }
    }
    numEntries++;
}
GameEntry Scores::remove(int i) throw(out_of_range) {
    if (i < 0 || i >= numEntries) {
        throw out_of_range("Index out of bounds");
    }

    GENode* removedNode = nullptr;
    if (i == 0) {
        removedNode = head;
        head = head->next;
        if (!head) {
            tail = nullptr;
        }
    } else {
        GENode* prev = nullptr;
        GENode* current = head;

        for (int j = 0; j < i; j++) {
            prev = current;
            current = current->next;
        }

        prev->next = current->next;
        if (tail == current) {
            tail = prev;
        }
        removedNode = current;
    }
    GameEntry removedEntry = removedNode->elem;
    delete removedNode;
    numEntries--;
    return removedEntry;
}
void Scores::printAll() {
    GENode* current = head;
    while (current) {
        cout << "Name: " << current->elem.getName() << ", Score: " << current->elem.getScore() << endl;
        current = current->next;
    }
    cout << "-------------------------" << endl;
}
