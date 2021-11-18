/*
Name: Gavin Xiao
Professor: Tong Yi
Lecture: CSCI 135
Assignment: Exercise 9.5

Implement a class Rectangle. Provide a constructor to construct a rectangle with a given width and height, 
member functions get_perimeter and get_area that compute the perimeter and area, 
and a member function void resize(double factor) that resizes the rectangle by multiplying the width and height by the given factor.
*/

class Rectangle {
	public:
		Rectangle(double input_w, double input_h);
		double get_perimeter();
		double get_area();
		void resize(double factor);
	private:
		double width;
		double height;
};


Rectangle::Rectangle(double input_w, double input_h) { 
    width = input_w;
    height = input_h;
}

double Rectangle::get_area() { 
    return width * height; 
}

double Rectangle::get_perimeter() { 
    return 2 * width + 2 * height; 
}

void Rectangle::resize(double factor) { 
    width *= factor; 
    height *= factor;
}

int main() { 
    return 0;
}