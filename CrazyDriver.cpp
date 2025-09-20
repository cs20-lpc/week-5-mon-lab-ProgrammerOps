#include <iostream>
#include "DoublyList.hpp"
using namespace std;

int main() {
    DoublyList<int> lst;

    cout << boolalpha; //     makes true/false print as words, not 1/0

    //  1) Start with an empty train
    cout << "Is the train empty? " << lst.isEmpty() << "\n";
    cout << "How many cars on the train? " << lst.getLength() << "\n\n";

    //  2) Add some cars (   append puts cars at the end of the train)
    lst.append(4);
    lst.append(30);
    lst.append(23);
    cout << "After adding cars 4, 30, 23 -> " << lst << "\n";
    cout << "Train length now: " << lst.getLength() << "\n\n";

    //  3 Insert a car in the middle (index 1 means second spot)
    // Think: "stick car 19 right after the first car"
    lst.insert(1, 19);
    cout << "After inserting 19 at spot #1 -> " << lst << "\n\n";

    ////  4) Replace a car   --swap out an old car for a new one)
    lst.replace(2, 99); //      take car at position 2 and repaint it as 99
    cout << "After replacing car at spot #2 with 99 -> " << lst << "\n\n";

    //  5 Look at a car (peek inside one car)
    cout << "What car is at spot #1? " << lst.getElement(1) << "\n\n";

    //  6) Search the train     (is a certain car number on board?
    cout << "Is car 99 on the train? " << lst.search(99) << "\n";
    cout << "Is car 54 on the train? " << lst.search(54) << "\n\n";

    //  7) Remove a car, uncouple the first car and let it go.
    lst.remove(0);
    cout << "After removing car at spot #0 -> " << lst << "\n";
    cout << "Final train length: " << lst.getLength() << "\n";
    cout << "Is the train empty now? " << lst.isEmpty() << "\n";

    return 0;
}
