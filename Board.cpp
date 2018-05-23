#include "Board.h"

#include <iostream>
using namespace std;

Board::~Board()
{
	delete  []mat;
}

const unsigned int Board::size() const {
	return length;
}





