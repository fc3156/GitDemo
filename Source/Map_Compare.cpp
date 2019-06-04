//
// Created by fc0310 on 2019/5/23.
//
#include <iostream>                                        // For standard streams
#include <string>                                          // For string class
#include <map>                                             // For multimap container
#include <cctype>                                          // For toupper()
#include <tr1/memory>
using std::string;
class Key_compare
{
public:
	bool operator () (const std::unique_ptr<string>& p1, const std::unique_ptr<string>& p2) const
	{
		return *p1 < *p2;
	}
};

//int main(){
//	std::map<std::unique_ptr<string>,std::string,Key_compare> Phonebook;
//	Phonebook.emplace(std::make_unique<string>("Fred"), "914 626 7897");
//	Phonebook.insert(std::make_pair(std::make_unique<string>("Lily"), "212 896 4337"));
//	for (const auto& p: Phonebook)
//	{
//		std:: cout << *p.first << " " << p.second << std::endl;//Phonebook的第一个参数是unique指针，所以这里使用解引用才能访问到
//	}
//	std::cout<<std::endl;
//	for (auto iter = std::begin (Phonebook) ;iter != std::end (Phonebook) ; ++iter){
//		std:: cout << *iter->first << " " << iter->second << std::endl;
//	}
//}

