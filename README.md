# The First Project: How Many JellyBeans in a Jar
In the project, I calculated the number of jelly beans in a jar. The Jar is a cylinder. The glass sides of a jar have some thickness.
We will need to subtract that dimension for our calculations. The jelly beans are genuine Starburst jelly beans that are oblate ellipsoids, and are 5/8 of an inch
long and 1/4 of an inch in diameter. 
# The Program:
If we can calculate the volume of one jelly bean and the interior volume of our jar, we should be able to figure out how many jelly beans will fit in the jar.
First, we know that the volume that the volume of a cylinder is π* r2 h, where h is the height and r is the radius. And we know π = 3.14159, or so. 

<img width="104" height="119" alt="image" src="https://github.com/user-attachments/assets/37546aab-2d71-4fe1-85c4-6b9053f36256" />

And we can look up the volume of our fat little jelly beans and see this. Not too bad, we have a, the length, and b is the diameter. 

<img width="299" height="122" alt="image" src="https://github.com/user-attachments/assets/85aaec26-b98a-4b1e-bed8-923e93e9e880" />

There is only one thing.  Jelly beans are uneven and will not fill up all the space in a jar.  There will be voids
that are not filled by a bean.  We will estimate that 20% of the jar volume will not be filled by a bean and will essentially be air.
This is the packing factor.  Make this a constant, too.

In main, declare variables and declare PI as a constant.  The measurements should be doubles or floats.  You will need the decimal equivalents of the fractions.  
Write your header using cout. This will be your name, program title, and program objective.  Ask the user for the dimensions of the jar using cout. 
You need the height, the diameter, and the thickness of the walls.  Use cin to read the user’s answers. We will still be filling the jar with Starburst jellybeans.

First, calculate the inner radius of the jar by first calculating the radius of the jar and then subtracting the thickness of the glass wall. 
Then calculate the inside volume of the jar.  Adjust the inside volume of the jar by the packing factor. Then calculate the volume of one jelly bean, and the number of jelly beans that will fit in the jar.

Report the results of your calculations to the user, showing the jelly bean dimensions, the jar dimensions, and the volume of the jar and the volume of each jelly bean, 
the estimated packing factor, and the answer of how many jelly beans will fit in the jar.  If your calculation ends up with a decimal part, round down by casting the number into an int, 
as you can’t have part of a jelly bean!  Write a good-bye message before exiting.
# Sources: 
# Usage: 
  * Cout statements
  * Program output is presented neatly to the user.
  * Calculations and coding. 
# Contributions
I welcome contributions to the program! Who knows? It might not run on the user's end. If you have any suggestions, bug reports, or any kind of feature requests, please contact me or submit a pull request.




