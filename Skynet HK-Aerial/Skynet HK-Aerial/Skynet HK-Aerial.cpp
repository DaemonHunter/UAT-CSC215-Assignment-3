// University of Advancing Technology
// CSC-215
// Assignment 03 - Skynet HK-Aerial
// Josh Sharrer

#include "pch.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <Windows.h>
using namespace std;

int main()
{
	srand((int)time(0)); // Create a seed using the current time to ensure we are getting different results

	int searchGridLowNumber = 1; // Set the searchGridLowNumber as an integer so that it may be used later
	int searchGridHighNumber = 64; // Set the searchGridHighNumber as an integer so that it may be used later

	int targetLocation = rand() % 64 + 1; // Create a random number for targetLocation between 1 and 64
	int pingNumber = 0; // Set the current ping count to zero so that it will be accurate on the first run

	cout << "Generating Random enemy location on 8x8 grid...." << endl;
	cout << "The enemy is located at location #" << targetLocation << " on 8x8 grid with 1-64 sectors." << endl;
	cout << "Initializing Skynet HK-Aerial Software....." << endl;

	cout << "----------------------------------------------------------------------" << endl;
	cout << "----------------------------------------------------------------------" << endl;

	while (true)
	{
		int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		pingNumber++;

		if (targetLocationPrediction == targetLocation) {
			cout << "Skynet HK-Aerial Radar sending out ping #" << pingNumber << endl;
			cout << "Enemy was hiding at location #" << targetLocation << endl;
			cout << "Target was found at location #" << targetLocationPrediction << endl;
			cout << "Skynet HK-Aerial Software took " << pingNumber << " predictions to find the enemy location on a grid size of 8x8 (64)." << endl;
			break;
		}
		else if (targetLocationPrediction > targetLocation) {
			cout << "Skynet HK-Aerial Radar sending out ping #" << pingNumber << endl;

			cout << "The target location prediction of " << targetLocationPrediction << " was higher than the actual enemy location of " << targetLocation << "." << endl;
			searchGridHighNumber = targetLocationPrediction - 1;
			cout << "The new searchGridHighNumber = " << searchGridHighNumber << endl;

			cout << "----------------------------------------------------------------------" << endl;
		}
		else if (targetLocationPrediction < targetLocation) {
			cout << "Skynet HK-Aerial Radar sending out ping #" << pingNumber << endl;
			cout << "The target location prediction of " << targetLocationPrediction << " was lower than the actual enemy location of " << targetLocation << "." << endl;

			searchGridLowNumber = targetLocationPrediction + 1;
			cout << "The new searchGridLowNumber = " << searchGridLowNumber << endl;

			cout << "----------------------------------------------------------------------" << endl;
		}
	}
	return system("PAUSE");
}