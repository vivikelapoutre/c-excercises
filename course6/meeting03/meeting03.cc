#include <iostream>
#include <cstdint>

class Vector
{
public:

	using coord = double;

	coord x;
	coord y;

	void print(int x);
	static void hello() { std::cout << "hello" << std::endl; }

	static int v;
};

void hey()
{
	static int x = 0;
	std::cout << "X=" << x << std::endl;
	x++;
}

int main(int argc, char** argv)
{
	hey();
	hey();
	hey();

	Vector s;
	
	s.x = 6;
	s.y = 7.7;

	s.print(8);

	s.hello();
	Vector::hello();

	Vector::coord f = 7;
}

void Vector::print(/* Vector* this */ int x)
{
	std::cout << "Vector(" << this->x << ", " << y << ")" << std::endl;
}

