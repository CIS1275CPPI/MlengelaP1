/*****************************************************************************************
* Program: How many Jerrybeans in a jar.
* Programmer: Daudi Mlengela (dmlengela@cnm.edu)
* Date: 11 September 2021 @ 11:59:59
* Purpose: To calculate how many jellybeans are in a Jar.
*****************************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std; 

int main()

{
	/********************************************************
	* First, we need to declare the constant PI that we will use to calculate 
	* the jar's volume and the volume of a jerrybean. 
	* ********************************************************/
	const double PI = 3.1415926535897F;


	/******************************************************************************
     * Second, we need to get Jar's height, diameter, and thickness form the user.
     * ****************************************************************************/

	double height = 0.0;
	cout << "Please enter the jar height: ";
	cin >> height;
	   
	double diameter = 0.0;
	cout << "Please enter the jar diameter: ";
	cin >> diameter;

	double thickness = 0.0;
	cout << "Please enter the jar thickness: ";
	cin >> thickness;

	/*********************************************************************************
	* Third, we need jar's radius to do the volume calculation which is: pi * r^2 * h. 
	* We can also do not forget that the jar has a thickness. 
	* Therefore, we need to consider that thickness when solving for radius.
	* ********************************************************************************/

	double radius = diameter / 2 - thickness;
	double volume = PI * radius * radius * height; 

	/* *************************************************************************
	 * Fourth, out of the shape of jerrybeans, there will be empty space in the jar. 
	 * We estimate 20% of the jar's volume will be voids or essentially the air.  
	 * ****************************************************************************/

	const double PACKING_FACTOR = .2;

	/* *********************************************************************************
	 * Fifth, we use the packing factor to calculate the adjusted volume out of the jar. 
	 * *********************************************************************************/

	double adjustedVolume = volume * (1 - PACKING_FACTOR); 

	/*****************************************************************************
	* Sixth, the Starburst jelly beans are 5/8 inches long and 1/4 inch diameter.
	* ****************************************************************************/

	const double JellyBean_Length = 5.0 / 8.0; 
	const double JellyBean_Diameter = 1.0 / 4.0;

	/******************************************************************************
	* Seventh, to calculate the volume of a jellybean which is:
	* 4/3 * PI * a * b^2 where; 
	* a = the length, and 
	* b = the diameter. 
	* *****************************************************************************/
	const double JellyBean_Volume = 
	4.0 / 3.0 * PI * JellyBean_Length * JellyBean_Diameter * JellyBean_Diameter;

	/* **************************************************************************** 
	 * Eigth, to calculate the number of jellybeans by dividing the adjusted volume
	 * out of our jar by the volume of a jellybean. 
	 * ***************************************************************************/

	double Number_of_Jellybean = adjustedVolume / JellyBean_Volume;

	/* *************************************************************************************
	 * Nineth, to cast jellybean as an integer because we can not have a partial jelly bean. 
	 * *************************************************************************************/
	int count = int(Number_of_Jellybean);
	cout << "Number of Jellybeans: " << count << "\n"; 

	/* *************************************************************************
	 * Tenth, To display the result and set it into two decimal places:
	 * setprecision(2)
	 * **********************************************************************/

	cout << fixed << setprecision(2);
	cout << "\n JellyBean_length: " << JellyBean_Length << " inches. ";
	cout << "\n JellrBean_Diameter: " << JellyBean_Diameter << "inches. ";
	cout << "\n adjustedVolume: " << adjustedVolume << "inches. ";
	cout << "\n thickness: " << thickness << " inches. ";
	cout << "\n JellyBean_Volume: " << JellyBean_Volume << " inches. "; 
	cout << "\n height: " << height << " inches. ";
	cout << "\n diameter: " << diameter << "inches. "; 
	cout << "\n radius: " << radius << " inches. "; 

	/* ***********************************************************************
	 * Lastly, to write a goodbye message before exiting. 
	 *************************************************************************/

	cout << " \n\n Thanks for watching my Demo: "; 

	return 0;
}