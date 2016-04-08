#pragma once
#include <string>

using namespace std;

enum result{

	win='w',
	lose='l',
	draw='d'

};
 
 class Card{

 public:
 	Card(); //konstruktor
 	result compare(Card*);
 	string description();

 private:
 	int figure, colour;
 	static int counter;

 };