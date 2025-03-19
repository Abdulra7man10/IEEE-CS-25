#include <iostream>     // For input and output operations
#include <stdlib.h>     // For system commands and random number generation
#include <unistd.h>     // For sleep function
#include <time.h>       // For time functions
#include <string>       // For using string type

using namespace std;

int main() {
    // Change console color
    // Background - text
    system("color 72");

    // Declare variables
    int m_trail, n_trail; // Number of max trials and current trial counter
    int score, g_timeout; // Score and game timeout per trial
    int width, length; // Dimensions of the rectangle
    int level; // Game difficulty level
    int area, user_area; // Actual area and user's guessed area
    time_t user_stime, user_timeout; // Start time and timeout calculation
    int table_size; // Maximum possible width and length
    char again; // To check if the user wants to play again
    string name; // Player's name
    int NumPlayers;

    // Welcome message
    cout << "\t\t\t***Welcome to my first Game :)****\n";
    sleep(2);
    system("cls"); // Clear screen

    do {

            cout<<"\n\t\tEnter number of players: ";
            cin>>NumPlayers;

            for (int player=1;player<=NumPlayers;player++)
            {
                cout<<"\n\t\tPlayer "<<player<<": Enter your name:";
                cin>>name;

        // Initialize game settings
        score = 0;
        n_trail = 0;
        m_trail = 5; // Number of trials per game

        srand(time(0)); // Seed random number generator

        // Get player name
        //cout <<  "\n\t\tEnter your name : ";
        //cin >> name;

        // Select difficulty level
        cout << "\n\n\t\tPress 1,2 or 3 to choose the level ...";
        cin >> level;
        sleep(1);
        system("cls");

        do {
            // Set difficulty parameters based on level selection
            switch(level) {
                case 1:
                    g_timeout = 5; // Time limit for response
                    table_size = 5; // Maximum possible width and length
                    break;
                case 2:
                    g_timeout = 5;
                    table_size = 10;
                    break;
                case 3:
                    g_timeout = 3;
                    table_size = 12;
                    break;
            }

            n_trail++; // Increment trial counter

            // Generate random width and length
            width = rand() % table_size + 2;  // range--> 2:table size + 2
            length = rand() % table_size + 2;

            // Calculate actual area
            area = width * length;

            // Display trial number and score
            cout << "trial.." << n_trail << "\t score: " << score << endl;

            // Display rectangle
            for(int i = 0; i < length; ++i) {
                for(int j = 0; j < width; ++j)
                    cout << "# ";
                cout << endl;
            }

            // Get user's answer and measure response time
            user_stime = time(0); // Record start time
            cout << "Area...";
            cin >> user_area;
            user_timeout = time(0) - user_stime; // Calculate time taken

            // Show time taken to answer
            cout << "you take " << user_timeout << " seconds to answer" << endl;

            // Check answer correctness
            if(user_timeout <= g_timeout && user_area == area) {
                cout << "\tCorrect :)\n";
                score++; // Increase score if correct
            } else if(user_area != area) {
                cout << "\tWrong :( \n";
            } else {
                cout << "\tTimeout :|, try faster\n";
            }

            sleep(3);
            system("cls"); // Clear screen

        } while(n_trail < m_trail); // Repeat until trials are completed

        // Display final score
        cout << "\t\tGAME OVER\n";
        cout << "\t\tYour Score is: " << (score * 1.0 / m_trail) * 100.0 << "%\n";

        sleep(2);
        system("cls"); // Clear screen

            } // close the for loop before ask if you wanna play again
        // Ask user if they want to play again
        cout << "Again[y/n]...";
        cin >> again;

    } while(again == 'y'); // Restart game if user chooses 'y'

    return 0;
}
