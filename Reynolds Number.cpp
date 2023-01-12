#include <iostream>

using namespace std;

double reynoldsnumber(double a, double b, double c, double d);

int main(int argc, char *argv[]) {
		double num1,num2,num3,num4;
		cout<<"********************************** CALCULATE 1REYNOLDS NUMBER *************************************"<<endl;
		cout<<"Enter the Velocity of the Flow(m/s): ";cin>>num1;
		cout<<"Enter the Diameter of the Pipe(m): ";cin>>num2;
		cout<<"Enter the Density of the Fluid (kg/cm3): ";cin>>num3;
		cout<<"Enter the Viscosity of Fluid (N-s/m2): ";cin>>num4;
		cout<<"Reynolds Number: "<<reynoldsnumber(num1, num2, num3, num4)<<". ";
	
		if (reynoldsnumber(num1, num2, num3, num4)==2100 || reynoldsnumber(num1, num2, num3, num4) < 2100 ) {
			cout<<"The Fluid Flow is considered Laminar."<<endl;
			return 0;
		}
		else if (reynoldsnumber(num1, num2, num3, num4)==4000 || reynoldsnumber(num1, num2, num3, num4) > 4000 ) {
		cout<<"The Fluid Flow is considered Turbulent."<<endl;
		return 0;
	}
		else if (reynoldsnumber(num1, num2, num3, num4) > 2100 && reynoldsnumber(num1, num2, num3, num4) < 4000) {
		cout<<"In the translation phase between 2100 and 4000, the fluid flow may be either laminar or turbulent."<<endl;
	}
	else {
		cout<<"Invalid Number !!"<<endl;
	}
		return 0;
}

double reynoldsnumber(double a, double b, double c, double d){
	double e = (a*b*c)/d;
	return e;
	
}