#include "Pony.cpp"
#include <iostream>
/*
void ponyOnTheHeap( void )
{
	std::cout << "Heap Zone" << std::endl;
	Pony *Heapy = new Pony("Ahmed", "Blue", "10");
	std::cout << Heapy->getName( ) << "is" << Heapy->getColor() << " and his horn to be " << Heapy->getHorn() << " CM" << std::endl;
	std::cout << Heapy->getName( ) << "can use his horn for something move" << std::endl;

	delete Heapy;
	return ;
}

void ponyOnTheStack( void )
{
	std::cout << "Stack Zone" << std::endl;
	Pony Stacky = Pony("Mohammed", "Yellow", "20");
	std::cout << Stacky.getName( ) << "is" << Stacky.getColor() << "and his horn to be " << Stacky.getHorn() << std::endl;
	std::cout << Stacky.getName( ) << "is hlel so he just can eat" << std::endl;

	return ;
}

int main( void )
{
	std::cout << "Welcome in my Little Poney" << std::endl;
	//ponyOnTheHeap( );
	std::cout << std::endl;
	//ponyOnTheStack( );

	return 0;
}
*/

void ponyOnTheStack( void )
{
	std::cout << "On the Stack" << std::endl;
	Pony ponyStack = Pony("Eden", "white", "80");

	std::cout << "this pony is " << ponyStack.getColor( ) << " and it weight " << ponyStack.getHorn( ) << std::endl;

	std::cout << ponyStack.getName( ) << " running like a bitch because he is afraid about gangsta !" << std::endl;

	return ;
}

void ponyOnTheHeap( void )
{
	std::cout << "On the Heap" << std::endl;

	Pony *ponyHeap = new Pony("Edouard", "blue", "100");

	std::cout << "this pony is " << ponyHeap->getColor( ) << " and it weight " << ponyHeap->getHorn( ) << std::endl;

	std::cout << ponyHeap->getName( ) << " eating !" << std::endl;

	delete ponyHeap;

	return ;
}

int		main( void )
{
	ponyOnTheStack();
	std::cout << std::endl;
	ponyOnTheHeap();

	return 0;
}
