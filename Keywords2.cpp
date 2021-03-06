//Keywords2
//Justin Rawlings
//CSC215
//10/28/2018

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{
	const int MAX_WRONG = 10;

	vector<string>words;
	int userName = 0;

	// Create a collection of 10 words you had wrote down manually
	words.push_back("DELTA");
	words.push_back("GAMMA");
	words.push_back("VICTOR");
	words.push_back("XRAY");
	words.push_back("EAGLE");
	words.push_back("SKY");
	words.push_back("TARGET");
	words.push_back("AGENT");
	words.push_back("ENEMY");
	words.push_back("SAFEHOUSE");

	// Create an int var to count the number of simulations being run starting at 1
	srand(static_cast<unsigned int>(time(0)));
	// Pick new 3 random words from your collection as the secret code word the recruit has to guess.
	random_shuffle(words.begin(), words.end());

	// Display the simulation # is staring to the recruit.
	const string THE_WORD = words[0];
	int wrong = 0;
	string soFar(THE_WORD.size(), '-');
	string used = "";



	// Display Title of program to user
	cout << "Welcome to the CIA Code Breaking Simulation Part2";

	// Ask the recruit to login using thier name
	cout << "Please enter your name.";

	// Hold the recruit's name in a var, and address them by it throughout the simulation.
	cin >> userName;

	// Display an overview of what Keywords II is to the recruit 
	cout << "This simulation is to train you to unscramble code words.";
	// Display an directions to the recruit on how to use Keywords
	cout << "Hello " << userName << " type in your guess of a single letter of the code word each time.";


	// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
	while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
	{
		cout << userName << "You have " << (MAX_WRONG - wrong);
		cout << "incorrect guesses left.";
		cout << "You've used the following letter:" << used;
		cout << "So far, the word is:" << soFar;
		char guess;
		cout << "Enter your guess:";
		cin >> guess;
		guess = toupper(guess);




		//     Show recruit the letters he or she has guessed
		while (used.find(guess) != string::npos);
		{
			//     Get recruit's next guess
			cout << "You've already guessed" << guess;
			cout << "Enter your guess:";
			cin >> guess;
			guess = toupper(guess);
		}

		used += guess;
		//     Show player how much of the secret word he or she has guessed
						//     While recruit has entered a letter that he or she has already guessed

					//          Get recruit ’s guess
	//     Add the new guess to the group of used letters

		if (THE_WORD.find(guess) != string::npos)
		{
			cout << "That's correct!";
			for (int i = 0; i < THE_WORD.length(); ++i)
			{
				if (THE_WORD[i] == guess)
				{
					soFar[i] = guess;


				}
			}
		}
		//     Otherwise

	//          Tell the recruit the guess is incorrect


		else
		{
			cout << "The word you guessed in incorrect " << userName;
			++wrong;
		}
	}
		//     Tell recruit how many incorrect guesses he or she has left

		if (wrong == MAX_WRONG)
		{
			cout << "I'm sorry" << userName << " but this simulation must shut down.";

		}
		//     If the guess is in the secret word

	//          Tell the recruit the guess is correct

	//          Update the word guessed so far with the new letter
		else
		{
			cout << "You guessed it.";
		}

		cout << "The word was" << THE_WORD;
		return 0;
	}








//          Increment the number of incorrect guesses the recruit has made

// If the recruit has made too many incorrect guesses

//     Tell the recruit that he or she has failed the Keywords II course.

// Otherwise

//     Congratulate the recruit on guessing the secret words

// Ask the recruit if they would like to run the simulation again

// If the recruit wants to run the simulation again

//     Increment the number of simiulations ran counter

//     Move program execution back up to // Display the simulation # is staring to the recruit. 

// Otherwise 

//     Display End of Simulations to the recruit

//     Pause the Simulation with press any key to continue