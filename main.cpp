#include <iostream>
#include "polygon.cpp"
using namespace std;

int main() {
Polygon polygon{};
double temp;
for(int i=1;i<=5;i++){
	cout << "Enter the length of side " << i << " of the polygon: " << endl; 
	cin >> temp;
	polygon.add_side(temp);
	if (temp < 0){
		cout << "A negative length was given, try again " << endl;
		exit(0);}
}
cout << "The perimeter of the " << polygon.get_sides() <<"-sided polygon is " << polygon.get_perimeter() << endl;
return 0;
}
