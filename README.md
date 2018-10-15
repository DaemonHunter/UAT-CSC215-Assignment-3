# UAT-CSC215-Assignment-3

# Background
You, having graduated from UAT, were hired by a U.S. Military defense contractor company called Skynet. You are in charge of writing an A.I. program for the Skynet HK-Aerial drones to hunt down ground enemies using a grid sector.

You know many programming languages from your time at UAT. Since this is for our military, you need to choose the fastest and most reliable language you know. You choose C++ since it is closer to the MACHINE(pun intended)  level than other programming language, it is faster than other languages, it has been around for decades which makes C++ a very mature and stable programming language, These are features you want software used in battle. While new features have been added to C++ over the decades, the language has always maintained more backward compatibility with its older versions than other programming languages. Knowing a a new version of a programming language will work without breaking older code is very desirable in military applications when lives are on the line.

The Skynet HK-Aerial drones use a search grid to hunt down enemies and eliminate them.  Right now in simulations the Skynet HK-Aerial drones are using a linear search to hunt down enemies in a grid. This is proving to be a very slow search pattern, giving our enemies enough time to escape the area, before the Skynet HK-Aerial can locate them.  After spending billions to develop, the Skynet HK-Aerial has the impressive ability built in to dodge Human aimed low tech Surface to Air Missiles (SAM) shot right at it. However, this multi-billion dollar SAM defense is being thwarted by the enemy taking advantage of the Skynet HK-Aerial current linear search pattern.  While in HK mode, the Skynet HK-Aerial uses a linear search pattern which allows enemies easily figure out where the Skynet HK-Aerial is going to be next. This is allowing the enemies to use simple human aimed air to ground systems to take out a Skynet HK-Aerials by firing the SAM in the area the Skynet HK-Aerial will be right before it gets there. This does not allow the Skynet HK-Aerial to dodge the SAM, since it was not fired directly at the Skynet HK-Aerial. 

# Requirements
Write a program in C++ for the Skynet HK-Aerial
You should initialize a grid search of 8x8.
On each run, your program should choose a random numbered square on the grid numbered 1-64 to indicate where the enemy is located.
The enemy does not move in this simulation.
This program should be able to search for ground based enemies faster then when in the current linear search HK mode, however, you do not need to code in this comparison.
This program is for it's internal AI only and does not require human other other AI players.
This program should keep track of each turn and display this.
This program should use an unpredictable search pattern (the algorithm below) to the human on the ground.
The AI should used a Binary Search Pattern.
This program should loop until the Grid that the enemy is on is found by the Skynet HK-Aerial. At that point the found and engaging enemy status is displayed along with other information such as how long it took to find them by showing how many grids the HK searched before finding the enemy, what where the coordinates of the grids the HK looked at, and how large the search grid was. 
This code will be upgraded often to stay ahead of the enemy. Be sure to comment each line of code except cout statements, write very readable code using good coding standards.
The Grid does not need to be displayed.
Put this project into your GitHub and take a screenshot of it.
# SAMPLE OUTPUT SCREEN
![alt text](https://uat.instructure.com/courses/1968/files/221455/preview?verifier=U20YROddANg3Z1MeYgilHoxkgVl0oV4jd3MJcUiq)
# Algorithm code to use for our Binary Search
int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
You could also call targetLocationPrediction guess if you would like. 
#Submission
A screen shot of the Skynet HK-Aerial program working.
Your actual .cpp file. Not a screen shot and not the entire project.
A screen shot of your entire project in GitHub
Do not zip these three files.
