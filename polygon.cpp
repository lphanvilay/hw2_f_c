class Polygon {
	double perimeter = 0.0;
	int sides = 0;
	public :
		Polygon(): perimeter(),sides() {};
		double add_side(double length) {
			sides++;
			return perimeter+=length;}
		double get_perimeter() {
			return perimeter;}
		int get_sides() {
			return sides;}
};
