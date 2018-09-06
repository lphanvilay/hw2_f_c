#include <iostream>
using namespace std;
#include <polygon.cpp>

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
cout << "The perimeter of the 5-sided polygon is 15 << 
}
