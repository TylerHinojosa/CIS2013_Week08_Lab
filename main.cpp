#include <iostream>
#include <string>
#include "Board.cpp"

using namespace std;

int main(){
	
	Board spaces;
	
	spaces.setup();
	spaces.print();
	spaces.choice();
	// spaces.reveal();

	return 0;
}