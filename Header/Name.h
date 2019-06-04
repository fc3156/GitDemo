//
// Created by fc0310 on 2019/5/17.
//

#ifndef LEARNVSC_NAME_H
#define LEARNVSC_NAME_H
// Defines a person's name
#include <string>                                // For string class
#include <ostream>                               // For output streams
#include <istream>                               // For input streams
class Name
{
private:
	std::string first {};   //声明两个成员变量
	std::string second {};
public:
	Name(const std::string& name1, const std::string& name2) : first (name1), second (name2) {}//带一个参数的构造函数
	Name() = default;//默认构造函数
	// Less-than operator//重载小于运算符
	bool operator<(const Name& name) const
	{
		return second < name.second || (second == name.second && first < name.first);
	}
	//重载输入，输出流操作符为友元函数
	friend std::istream& operator>>(std::istream& in, Name& name);
	friend std::ostream& operator<<(std::ostream& out, const Name& name);
};
//定义友元函数
// Extraction operator overload
inline std::istream& operator>>(std::istream& in, Name& name)
{
	in >> name.first >> name.second;
	return in;
}
// Insertion operator overload
inline std::ostream& operator<<(std::ostream& out, const Name& name)
{
	out << name.first + " " + name.second;
	return out;
}
#endif //LEARNVSC_NAME_H
