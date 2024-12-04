#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int number_to_guess = rand() % 100 + 1;

    int user_guess;
    cout << "Welcome to 'Guess the Number Game'!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Can you guess it? Try to guess it!" << endl;

    // Start the guessing loop
    while (true) {
        cout << "Enter your guess: ";
        cin >> user_guess;

        // Provide feedback based on the user's guess
        if (user_guess < number_to_guess) {
            cout << "Your guess is too low. Try again!" << endl;
        } else if (user_guess > number_to_guess) {
            cout << "Your guess is too high. Try again!" << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number: " << number_to_guess << endl;
            break;  // Exit the loop once the correct guess is made
        }
    }

    return 0;
}
