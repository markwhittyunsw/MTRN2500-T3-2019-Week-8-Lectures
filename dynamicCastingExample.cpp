// Dynamic casting example
// Mark Whitty UNSW
#include <iostream>
#include <vector>
class Shape {
    private:
        int x, y;
    public:
        Shape(int x_, int y_) { x = x_; y = y_; }
        int getX() { return x;}
        int getY() { return y;}
        void setX(int x_) { x = x_;}
        void setY(int y_) { y = y_;}
        virtual void drawShape() {};
        friend std::ostream& operator<<(std::ostream& os, const Shape& s);
        
};
class Square: public Shape {
    private:
        int side_length;
    public:
        Square(int x_, int y_, int side_length_):Shape(x_, y_) {side_length = side_length_;}
        int getSideLength() { return side_length; }
        void setSideLength(int l) { side_length = l;}
};  
class Circle: public Shape {
    private:
        int radius;
    public:
        Circle(int x_, int y_, int radius_):Shape(x_, y_) {radius = radius_;}
        int getRadius() { return radius;}
        void setRadius(int r) { radius = r;}
        
};
std::ostream& operator<<(std::ostream& os, const Shape& s) { os << "(x, y) = (" << s.x << ", " << s.y << ")"; return os;}

int main() {
    // Initialise shapes
    Shape *s;
    std::vector<Shape *> ShapePtrs = {};
    for(int i = 0; i < 5; i++) {
        s = new Shape(i, i+1);
        ShapePtrs.push_back(s);
    }
    Circle *c = new Circle(10, 11, 12);
    ShapePtrs.push_back(c);
    Square *sq = new Square(100, 120, 200);
    ShapePtrs.push_back(sq);

    for (std::vector<Shape*>::iterator it = ShapePtrs.begin(); it != ShapePtrs.end(); it++) {
		// (*it) will be of type Shape *
        // Hence we try and cast it to a Circle, if it is, then we handle it differently from a regular Shape or Square
		Circle * possible_circle = dynamic_cast<Circle *>(*it);
		if (possible_circle != nullptr) {
			std::cout << "Found item of type Circle" << std::endl;
            possible_circle->setRadius(possible_circle->getRadius() + 5);
			possible_circle->setX(possible_circle->getX() + 4);
			possible_circle->setY(possible_circle->getY() + 1);
			std::cout << (**it) << " radius: " << possible_circle->getRadius() << std::endl;
		} else {
            std::cout << "Found item of type Shape or Square" << std::endl;
			std::cout << (**it) << std::endl;
		}
	}
}
