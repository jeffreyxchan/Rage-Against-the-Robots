# Rage-Against-the-Robots
## Description
It's a very simple game coded in C++. I originally started this project in Fall 2015; the
state it's in now is a result of adding a new feature to it during Winter 2016. At the time
I was assigned this project, we had just learned about classes and structs. In order to
complete this project, we were given a code skeleton and tasked to finish implementing all
the functions within the skeleton. This final project tested our abilities to understand
and implement functions of certain classes in order to create a simple yet entertaining game.

## Instructions
If you're interested in playing the game, finish reading this section. It'll touch upon
how to run the game (if you already don't know how) and the directions on how to play the game.
<br><br>
##### Running the Game
Download the zip folder for this repo. After extracting all the files within the folder, you should
be able to navigate into the 'Debug' folder. Within there, you should be able to find the
CS 32 Project 1.exe file and double click it.
<br><br>
Note: When you lose the game, the exe file will immediately close. In the future, I might implement a
'Play Again' feature so that players won't have to continuously double click the exe file every time
they want to procrastinate some work.
##### How to Play
Alien robots have captured you and have forced you to fight for your life against other robots for joyous entertainment.
Fortunately, they are merciful enough to give you a bat to help you fight your way through all of them.
You, the player, are placed in an arena with 25 robots. Your goal is to kill all of them before they
kill you. In the rectangular arena (marked by periods), the player is shown as the @ symbol.
All the robots are initialized into random positions on the game and are shown as R's (R for Robot). If there are two 
or more robots in the same position, that spot will be marked with the number of robots on that spot 
(i.e. 3 means there are 3 robots at that position). If a robot ends up in the same arena spot as the player, 
they die and you lose the game.

##### Controls
The player and the robots take turns moving around the arena. Whenever it's your turn to do something, the program will
ask you for a specific command. You can enter any of these commands:
<pre>
u   - Move Up One Space or attacks 1 robot above you
d   - Move Down One Space or attacks 1 robot below you
r   - Move Right One Space or attacks 1 robot to your right
l   - Move Left One Space or attacks 1 robot to your left
h   - Lets you check your kill history. Robots that have died will be represented by an alphabetical letter 
      corresponding to how many robots have died in that one spot.
q   - Lets you prematurely quit the game, thus exiting the program.
[Enter] - Pressing Enter skips over your turn so you don't have to make a move if you don't want to.
</pre>
If you choose a directional command and there exists a robot in that direction, the player will attack that robot,
knocking it back one space. The player will <b>NOT</b> move in that direction. Each robot takes 2 regular hits to die.
If a robot can't be pushed back in that direction (like if they were already at the edge of the arena), 
they will take fatal damage and die. If there are multiple robots in that direction, only one will take the damage.
Afterwards, every robot will move in a random direction (and will not move if they choose to try to move outside of the
arena).
<br><br>
Kill every robot and become a Robo-Slayer HERO! See you in the arena!
