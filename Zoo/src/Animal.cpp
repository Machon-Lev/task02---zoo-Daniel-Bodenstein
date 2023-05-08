#include "Animal.h"
#include"Util.h"



 

Animal::Animal(string name, Location loc) {
	this->loc = loc;

	this->isRight = Util::GetRandBool();
	this->isUp = Util::GetRandBool();

	this->isStop = false;
	this->name = name;
 }


void Animal:: move()
{
	isStop = false;
	this->isUp = Util::GetRandBool();
	this->isRight = Util::GetRandBool();
}


 bool Animal:: TryChangeLoc(Location newLoc) {
	if (Util::CheckValidLocation(newLoc)) {
		loc = newLoc;
		return true;
	}
	return false;
}

 std::ostream& operator<<( std::ostream& os, const Animal& animal) {

	 os << "name:" << animal.name << animal.loc << std::endl;
	 return os;
}
 
