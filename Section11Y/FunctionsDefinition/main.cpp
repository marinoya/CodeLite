// Section 11
// Function Definitions
// Area of a circle nd volume of a cylinder
#include <iostream>
#include <cmath>
using namespace std;

//function prototypes
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double radius);
void area_circle ();
void volume_cylinder();

const double pi {3.14159};

int main ()
{
	
	area_circle();
	volume_cylinder();
	
	
	cout << "Hello world" << endl;
	return 0;
}

double calc_area_circle(double radius)
{
	return pi * pow(radius, 2.0);
}

double calc_volume_cylinder(double radius, double height)
{
	//return pi * pow(radius, 2.0) * height;
	return calc_area_circle(radius) * height;
}

void area_circle ()
{
	double radius {0};
	cout <<"\nPlease enter the radius of the circle: ";
	cin >> radius;
	
	cout << "\nThe area of the circle with radius " << radius<< " is " << calc_area_circle(radius)<< endl;
}

void volume_cylinder()
{
	double radius {0};
	double height {0};
	cout <<"\nPlease enter the radius of the cylinder: ";
	cin >> radius;
	cout <<"\nPlease enter the height of the cylinder: ";
	cin >> height;
	
	cout << "\nThe volume of cylinder with radius " << radius <<" and height "<<height<< " is "<<calc_volume_cylinder(radius, height)<< endl;
}

