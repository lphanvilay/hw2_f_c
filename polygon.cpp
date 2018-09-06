#include <string>
using namepsace std;

class Polygon {
	double perimeter = 0.0;
	int sides = 0;
	Public:
	Polygon():  {}
	double add_side(double length) {
		perimeter+=length;
		sides++;
		return;}
	double get_perimeter() {
		return perimeter;}
	int get_sides() {
		return sides;}
};
