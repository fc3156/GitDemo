//
// Created by fc0310 on 2019/5/23.
//

// Using a multimap
#include <iostream>                                        // For standard streams
#include <string>                                          // For string class
#include <map>                                             // For multimap container
#include <cctype>                                          // For toupper()
#include <tr1/memory>
using std::string;
using Pet_type = string;    //简化
using Pet_name = string;
//int main()
//{
//	std::multimap<Pet_type, Pet_name> pets;
//	Pet_type type {};
//	Pet_name name {};
//	char more {'Y'};
//	while(std::toupper(more) == 'Y')//循环输入
//	{
//		std::cout << "Enter the type of your pet and its name: ";
//		std::cin >> std::ws >> type >> name;
//		// Add element - duplicates will be LIFO
//		auto iter = pets.lower_bound(type);
//		if(iter != std::end(pets))
//			pets.emplace_hint(iter, type, name);
//		else
//			pets.emplace(type, name);
//		std::cout << "Do you want to enter another(Y or N)? ";
//		std::cin >> more;
//	}
//	// Output all the pets
//	std::cout << "\nPet list by type:\n";
//	auto iter = std::begin(pets);
//	while(iter != std::end(pets))
//	{
//		//iter->first是动物种类，
//		auto pr = pets.equal_range(iter->first);  //找出相同的键对应的值的范围
//		std::cout << "\nPets of type " << iter->first << " are:\n";
//		for(auto p = pr.first; p != pr.second; ++p)
//			std::cout << "  " << p->second;
//		std::cout << std::endl;
//		//用 equal_range() 返回的迭代器列出这种 pet 类型的全部序列。最后将 iter 设为这个序列的结束迭代器，它也是一个指向下一个 pet 类型的迭代器，或是容器的结束迭代器
//		iter = pr.second;
//
//	}
//}