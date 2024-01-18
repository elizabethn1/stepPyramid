/** -------------------------------------------------
* This program offers users the option of displaying a step
* pyramid (of any level) or my own art using ASCII art.
* Class: CS 141, Fall 2023
* System: ZyBook Lab
* @author Elizabeth Ng
* @version August 31, 2023
*
*      ___
      |   |        __
      |   |__     |  |
      |   |  |    |  |
      |   |  |____|  |
      |   |  |    |  |
      |   |  |    |  |
      |   |  |    |  |
     __________________
    |                  |
    |                  |
    |                  |
    |     |\    /|     |
    |     | \  / |     |
    |     |  \/  |     |
    |     |      |     |
    |     |      |     |
    |                  |
    |                  |
    |__________________|
     ___
    |___  __ *  __   __
    |    |   | |__| |__
    |    |   | |__   __|
*
*
* ----------------------------------------- */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // The menu output. Don't modify this, so that it outputs exactly as expected
    cout << "Program 1: Step Pyramids" << endl;
    cout << "Which option would you like?" << endl;
    cout << "  1. Display original graphic" << endl;
    cout << "  2. Display Step Pyramid" << endl;
    cout << "Your choice: ";

    int choice;
    cin >> choice;

    // This is the first choice, which displays my original graphic: french fries.
    if (choice == 1) {

        // Creates fries
        cout << "       " << "___" << "         " << "     " << endl;
        cout << "      " << "|   |" << "        " << "__" << "    " << endl;
        cout << "      " << "|   |" << "__     " << "|  |" << "    " << endl;
        cout << "      " << "|   |" << "  |    " << "|  |" << "    " << endl;
        cout << "      " << "|   |" << "  |____" << "|  |" << "    " << endl;
        cout << "      " << "|   |" << "  |    " << "|  |" << "    " << endl;
        cout << "      " << "|   |" << "  |    " << "|  |" << "    " << endl;
        cout << "      " << "|   |" << "  |    " << "|  |" << "    " << endl;

        // Creates the top part of the box.
        cout << "     ";

        for (int horizontalLine = 0; horizontalLine < 18; horizontalLine++) {
            cout << "_";
        }

        cout << endl;

        for (int boxSideTop = 0; boxSideTop < 3; boxSideTop++) {
            cout << "    ";
            cout << "|                  |" << endl;
        }

        // Displays the letter M.
        cout << "    " << "|     |" << "\\" << "    " << "/" << "|     |" << endl;
        cout << "    " << "|     |" << " \\" << "  " << "/ " << "|     |" << endl;
        cout << "    " << "|     |" << "  \\" << "/  " << "|     |" << endl;
        cout << "    " << "|     |" << "      " << "|     |" << endl;
        cout << "    " << "|     |" << "      " << "|     |" << endl;

        // Creates the bottom part of the box.
        for (int boxSideBottom = 0; boxSideBottom < 2; boxSideBottom++) {
            cout << "    ";
            cout << "|                  |" << endl;
        }

        cout << "    |__________________|" << endl;

        // Displays the word "fries".
        cout << "     " << "___" << endl;
        cout << "    " << "|___" << "  __" << " *" << "  __" << "   __" << endl;
        cout << "    " << "|   " << " |" << "   | " << "|__| |__" << endl;
        cout << "    " << "|   " << " |" << "   | " << "|__" << "   __|" << endl;

    }

    // This is the second choice, which displays a pyramid of any level.
    if (choice == 2) {
        // The prompt for entering the number of levels, if the user chooses a step pyramid
        cout << "How many levels should be in the step pyramid? ";

        int levels;
        cin >> levels;

        // Only displays the entrance.
        if (levels < 1) {
            cout << setw(10) << "_______" << endl;
            cout << setw(11) << "|_______|" << endl;
            cout << setw(3) << "|" << setw(5) << "___" << setw(3) << "|" << endl;
            cout << "__" << "|" << "__" << "[_]" << "__" << "|" << "__" << endl;
        }

            // Displays the entrance and the level right below it. This only runs if the user wants a pyramid of one level.
        else if (levels < 2) {
            // Entrance
            cout << setw(12) << "_______" << endl;
            cout << setw(13) << "|_______|" << endl;
            cout << setw(5) << "|" << setw(5) << "___" << setw(3) << "|" << endl;
            cout << setw(4) << "__" << "|" << "__" << "[_]" << "__" << "|" << "__" << endl;

            // Level 1
            for (int outer1 = 2; outer1 > 0; outer1--) {
                for (int inner1 = 1; inner1 <= outer1; inner1++) {
                    if (inner1 >= outer1) {
                        cout << "/";
                        if (outer1 == 2) {
                            cout << setw(9) << "|===|" << setw(5) << "\\";
                        }
                        else {
                            cout << setw(10) << "|===|" << setw(6) << "\\";
                        }
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }

            // Displays 2 or more levels of the pyramid.
        else if (levels >= 2) {

            // This calculates the greatest horizontal distance between the very left of the screen to the entrance of the pyramid.
            int largestDistance = 6 + ((levels - 1) * 6);

            // Only displays the entrance.
            cout << setw(largestDistance + 6) << "_______" << endl;
            cout << setw(largestDistance - 1 + 8) << "|_______|" << endl;
            cout << setw(largestDistance - 1) << "|" << setw(5) << "___" << setw(3) << "|" << endl;
            cout << setw(largestDistance + 13 - 4) << "__|__[_]__|__" << endl;

            // Only displays level 1.
            for (int outer2 = 2; outer2 > 0; outer2--) {
                for (int inner2 = 1; inner2 <= outer2; inner2++) {
                    if (inner2 >= outer2) {
                        if (outer2 == 2) {
                            cout << setw(largestDistance - 5) << "/" << setw(9) << "|===|" << setw(5) << "\\";
                        }
                        else {
                            cout << setw(largestDistance - 5) << "/" << setw(10) << "|===|" << setw(6) << "\\";
                        }
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }

            // The rest of this project's code is used to create level 2 or greater. This doesn't include the entrance and level 1. The code that's directly above takes care of these components.

            int remainingLevels = levels - 1;

            // This variable represents the initial horizontal distance from the left side of the screen to the first plus sign, which is at the second level.
            int plusSignsStart = (remainingLevels * 3) + ((remainingLevels - 1) * 3);

            // This represents the amount of space between the forward slash and stairs of the top part of level 2. This will be used as the initial amount of space.
            int space = 10;

            // This is only used to display the entire level 2 of the pyramid.
            cout << setw(plusSignsStart) << "+" << setfill('+') << setw(space) << "|" << setfill(' ') << "===|" << setfill('+') << setw(space) << "+" << setfill(' ') << endl;

            plusSignsStart -= 1;
            space += 1;

            cout << setw(plusSignsStart) << "/" << setw(space) << "|" << "===|" << setw(space) << "\\" << endl;

            plusSignsStart -= 1;
            space += 1;

            cout << setw(plusSignsStart) << "/" << setw(space) << "|" << "===|" << setw(space) << "\\" << endl;

            // Everything that's below displays the levels that follow level 1 AKA the levels that also include plus signs.

            // Used to manipulate the amount of space between the left side of the screen and the plus signs of each level.
            int moreSpace = 4;
            int lessSpace = 4;

            // Displays levels 2 or greater.
            for (int counter = remainingLevels - 1; counter > 0; counter--) {
                cout << setw(plusSignsStart -= lessSpace) << "+" << setfill('+') << setw(space += moreSpace);
                cout << "|" << setfill(' ') << "===|" << setfill('+') << setw(space) << "+" << setfill(' ') << endl;
                plusSignsStart -= 1;
                space += 1;
                cout << setw(plusSignsStart) << "/" << setw(space) << "|" << "===|" << setw(space) << "\\" << endl;
                plusSignsStart -= 1;
                space += 1;
                cout << setw(plusSignsStart) << "/" << setw(space) << "|" << "===|" << setw(space) << "\\" << endl;
            }
        }
    }

    return 0;
}
