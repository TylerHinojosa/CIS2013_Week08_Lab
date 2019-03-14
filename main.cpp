#include <iostream>
#include <string>
#include "Board.cpp"

using namespace std;

int main(){
	
	Board chess;
	
	chess.setup();
	chess.print();
	
	
 

	cout << "Give me an x cord (1-8): " << endl;
	
	cout << "Give me a y cord (1-8): " << endl;
	

	return 0;
}