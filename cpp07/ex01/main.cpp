#include "Iter.hpp"

class Awesome
{
public:
	Awesome(void) : _n(42) { return; }
	int get(void) const { return this->_n; }

private:
	int _n;
};
std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get();
	return o;
}
template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
	return;
}

template <typename T>
void func(T a)
{
	std::cout << "iter " << a << std::endl;
}

int main()
{
	int tab[] = {0, 1, 2, 3, 4}; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];

	::iter(tab, 5, print);
	::iter(tab2, 5, print);

	
	std::string a[3];
	a[0] = "I";
	a[1] = "you";
	a[2] = "they";
	::iter(a, 3, func);
	std::cout << std::endl;

	int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	::iter(b, 10, func);
	
	return (0);
}
