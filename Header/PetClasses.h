//
// Created by fc0310 on 2019/5/24.
//

#ifndef LEARNVSC_PETCLASSES_H
#define LEARNVSC_PETCLASSES_H
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
using std::string;
class Pet
{
protected:
	string name {};
public:
	virtual ~Pet(){}  // Virtual destructor for base class析构函数都写成虚函数
	const string& get_name() const { return name;  }
	virtual bool operator<(const Pet& pet) const    //重载小于操作符，虚函数是为了派生类的多态
	{
		//这里使用了运算符 typeid，它会创建一个 type_info 对象，这个对象封装了操作数的类型
		auto result = std::strcmp(typeid(*this).name(), typeid(pet).name());
		return (result < 0) || ((result == 0) && (name < pet.name));
	}
	friend std::ostream& operator<<(std::ostream& out, const Pet& pet);//声明重载的友元函数
};

#endif //LEARNVSC_PETCLASSES_H
