#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Choice
{
    ROCK,
    PAPER,
    SCISSORS
};

void displayMenu()
{
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
}

Choice getUserChoice()
{
    int choice;
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    return static_cast<Choice>(choice - 1);
}

Choice getComputerChoice()
{
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number (0-2) representing computer's choice
    return static_cast<Choice>(rand() % 3);
}

void determineWinner(Choice user, Choice computer)
{
    cout << "Computer chose ";
    switch (computer)
    {
    case ROCK:
        cout << "Rock";
        break;
    case PAPER:
        cout << "Paper";
        break;
    case SCISSORS:
        cout << "Scissors";
        break;
    }
    cout << endl;

    cout << "You chose ";
    switch (user)
    {
    case ROCK:
        cout << "Rock";
        break;
    case PAPER:
        cout << "Paper";
        break;
    case SCISSORS:
        cout << "Scissors";
        break;
    }
    cout << endl;

    if (user == computer)
    {
        cout << "It's a tie!\n";
    }
    else if ((user == ROCK && computer == SCISSORS) ||
             (user == PAPER && computer == ROCK) ||
             (user == SCISSORS && computer == PAPER))
    {
        cout << "You win!\n";
    }
    else
    {
        cout << "Computer wins!\n";
    }
}

int main()
{
    char playAgain;

    do
    {
        cout << "Let's play Rock, Paper, Scissors!\n";

        displayMenu();

        Choice userChoice = getUserChoice();
        Choice computerChoice = getComputerChoice();

        determineWinner(userChoice, computerChoice);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";

    return 0;
}
