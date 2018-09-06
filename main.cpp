#include <iostream>
#include "polygon.cpp"
using namespace std;

int main() {
Polygon polygon{};
double temp;
for(int i=1;i<=5;i++){
	cout << "Enter the length of side " << i << " of the polygon: " << endl; 
	cin >> temp;
	if (temp > 0)
	cout << polygon.add_side(temp)  << endl;
	else{
		cout << "A negative length was given, try again " << endl;
		break;}
}
cout << "The perimeter of the " << polygon.get_sides() <<"-sided polygon is" << polygon.get_perimeter() << endl;
return 0;
}
