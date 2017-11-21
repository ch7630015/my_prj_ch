#ifndef _MANAGER_H_
#define _MANAGER_H_

#include <string>

template <typename T> T getnumb(const T &value){
	return value*value;
}

class Manager{

public:
	Manager(int code);
	~Manager();

	std::string getinfo(); 
	int parse(const Manager &value);
	
private:

	int code;
	
};


#endif
