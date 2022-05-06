#include <iostream>
#include <cmath>


const double PI {3.14};

using namespace std;

double area_circle(double r){
	return r*r*PI;
}

double area_cylinder(double r, double h){
	return 2*area_circle(r) + 2*r*PI*h;
}

double volume_cylinder(double r, double h){
	return area_circle(r)*h;
}




int main(){
	
	double radius {}, height {};
	
	cout << "Enter the radius: ";
	cin >> radius;
	cout << "\nThe area of the circle is: " << area_circle(radius) << endl;
	cout << "Enter the height of the cylinder: ";
	cin >> height;
	cout << "The area of the cylinder is: " << area_cylinder(radius, height) << " and the volume is: " << volume_cylinder(radius, height) << endl;
	
	
	
	return 0;
}
