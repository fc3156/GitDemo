//
// Created by fc0310 on 2019/5/23.
//
#ifndef LEARNVSC_STUDENT_H
#define LEARNVSC_STUDENT_H
#include <string>                                // For string class
#include <ostream>                               // For output streams
class Student
{
private:
	std::string first {};
	std::string second {};
public:
	Student(const std::string& name1, const std::string& name2) : first (name1), second (name2){}
	Student(Student&& student) : first(std::move(student.first)), second(std::move(student.second)){} // Move constructor
	Student(const Student& student) : first(student.first), second(student.second){}                  // Copy constructor
	Student() {}                                                                                      // Default constructor
	// Less-than operator
	bool operator<(const Student& student) const
	{
		return second < student.second || (second == student.second && first < student.first);
	}
	friend std::ostream& operator<<(std::ostream& out, const Student& student);//友元函数重载了一个流插入运算符来辅助输出
};
// Insertion operator overload
inline std::ostream& operator<<(std::ostream& out, const Student& student)
{
	out << student.first + " " + student.second;
	return out;
}
#endif //LEARNVSC_STUDENT_H
