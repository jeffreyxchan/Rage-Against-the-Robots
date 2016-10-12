# Rage-Against-the-Robots
### Description
A console game coded in C++. The player is placed within an arena along with a swarm of evil robots.
The player must avoid and destroy all the robots in order to claim victory.

You can demo the game by running the executable within the Debug folder.

#### Instructions
After the player's turn, each robot moves randomly in a single direction. Upon landing on
the player, the game ends. Each robot needs to be struck twice to be destroyed. When struck,
the robot moves back one space in that direction, and can take one extra strike of damage
when pushed back into the edge of the arena.

#### Controls
During your turn, the program will prompt you for one of the following commands:
<pre>
u   - Move Up One Space or attack 1 robot above you
d   - Move Down One Space or attack 1 robot below you
r   - Move Right One Space or attack 1 robot to your right
l   - Move Left One Space or attack 1 robot to your left
h   - Check your kill history. Robots that have died will be represented by an alphabetical letter   
      corresponding to how many robots have died in that one spot
q   - Prematurely quit the game  
[Enter] - Do nothing
</pre>
