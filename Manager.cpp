#include "Manager.h"
Manager::Manager(int type){
	this->code = type;
}

Manager::~Manager(){}

std::string Manager::getinfo(){
	std::string str = "Manager";
	str += " code:"+std::to_string(this->code);
	return str;
}

int Manager::parse(const Manager & value){
	return this->code*value.code;
}

