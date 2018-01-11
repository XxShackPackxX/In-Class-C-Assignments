// Word Jumble
// The classic word jumble game where the player can ask for a hint

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    enum fields {WORD, HINT, NUM_FIELDS};
    const int NUM_WORDS = 12;
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
    {
        {"dejavu", "i've just been in this place before."},
        {"minecraft", "a kid makes bad song parodies with this theme."},
        {"honda-civic", "It's got VTEC yo! Also Chris has no idea what it is."},
        {"fungi", "no thats not my name!"},
        {"doublecrash", "this is how you end the race with a tie."},
        {"drifting", "the act of driving with as little grip as possible."},
        {"chris", "calling stock cars modded since 2017."},
        {"mazda-rx7", "this car was made by mazda and has a rotary engine."},
        {"anime", "was a mistake."},
        {"idubbbz", "hey! thats pretty good!"},
        {"eurobeat", "a high energy genre of music popular in the 90's/early 2000's."},
        {"soundcloud", "the place where I upload my very loud audio files."},
        
    };

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD];  // word to guess
    string theHint = WORDS[choice][HINT];  // hint for word

    string jumble = theWord;  // jumbled version of word
    int length = jumble.size();
    for (int i=0; i<length; ++i)
    {
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];
        jumble[index2] = temp;
    }

    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "Enter 'quit' to quit the game.\n\n";
    cout << "The jumble is: " << jumble;

    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;

    while ((guess != theWord) && (guess != "quit"))
    {
        if (guess == "hint")
		{
            cout << theHint;
		}
        else
		{
            cout << "Sorry, that's not it.";
		}

        cout <<"\n\nYour guess: ";
        cin >> guess;
    }

    if (guess == theWord)
	{
        cout << "\nThat's it!  You guessed it!\n";
	}

    cout << "\nThanks for playing.\n";

    return 0;
}
