#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate(void)
{
        int num = time(0) % 3;
        Base *base;

        switch (num)
        {
                case 0:
                        base = new A();
                        break;
                case 1:
                        base = new B();
                        break;
                case 2:
                        base = new C();
                        break;
        }
        return (base);
}

void identify(Base* p)
{
	A *testA = dynamic_cast<A *>(p);
	B *testB = dynamic_cast<B *>(p);
	C *testC = dynamic_cast<C *>(p);
	
	if (testA != 0)
			std::cout << "A" << std::endl;
	else if (testB != 0)
			std::cout << "B" << std::endl;
	else if (testC != 0)
			std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
    	A testA = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch(std::bad_cast e)
	{}


	try
	{
    	B testB = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch(std::bad_cast e)
	{}


	try
	{
    	C testC = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch(std::bad_cast e)
	{}
}

int main()
{
        Base *base = generate();

        identify(base);
        identify(*base);
        delete (base);
}
