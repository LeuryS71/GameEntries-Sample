#include <iostream>
#include "Scores.h"

int main() {
    Scores scores(7);

    cout<< "First lets add 4 new game entries:"<< endl;
    scores.add(GameEntry("FirstEntry", 7));
    scores.add(GameEntry("SecondEntry", 9));
    scores.add(GameEntry("ThirdEntry", 3));
    scores.add(GameEntry("FourthEntry", 6));

    cout << "All Game Entries:" << endl;
    scores.printAll();
    cout << "" <<endl;

    cout<< "Next, lets add 3 other entries with scores between the first 4"<< endl;
    scores.add(GameEntry("FifthEntry", 2));
    scores.add(GameEntry("SixthEntry", 5));
    scores.add(GameEntry("SeventhEntry", 4));

    cout << "All Game Entries:" << endl;
    scores.printAll();
    cout << "" <<endl;

    scores.remove(0);

    cout << "Game entries after removing the first entry:" << endl;
    scores.printAll();

    return 0;
}
