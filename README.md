This is a sample of the logical implementation of a gameentry program. 
The class GameEntry has a constructor and default destructor that allows us to initialize the basic 
model of what each game entries will have, which is the name of the entry, and the score that it
will store. These are defaulted to name = an empty string and score being 0. GENode class
includes us to create a new node which takes GameEntry as a parameter. As the private data
members it contains the GameEntry elem, which is the data itself, and GENode* next which is
the pointer to the next element. I also defined Scores as a friend class so that the private members
will be accessible from the scores class. Next is the scores class, it has an add, remove and print
all function. The Add function which first creates a new node to hold the entry, then it sets its
“Next” pointer equal to null. If the list is empty it will make the new node equal to the first and
last node. If it is full, it will remove the lowest score. If it's not full, it will add it to the end and
set its “next”, equal to the tail. The remove function does exactly what it says, it checks if the
index that is being added is valid or not first, then if the index is equal to 0, it will remove the
head of the list, if the index is out of bounds it will throw an exception. Then the printall function
simply prints all entries. I also added the runtime exception file from the example given in class
but I did not use this function. Lastly the main function creates an object with maxEntries = 5
and i added 4 entries then printed. Next I added 3 other entries and printed them again. Lastly, I
removed the first entry and printed the final result. I was having issues with keeping the prints in
size order, i am still working on the program to see what i can implement in order to achieve this.
