//
// Created by fc0310 on 2019/5/23.
//
#include <iostream>                              // For standard streams
#include <cctype>                                // For toupper()
#include <map>                                   // For map containers
#include <string>                                // For string class
#include "../Header/Quotations.h"
#include "../Header/Name.h"

using std::string;
using namespace std;

//int main() {
//	std::multimap<string, string>pets; // Element is pair{pet_type, pet_name}
//	auto iter = pets.insert (std::pair<string, string>{string{"dog"}, string{"Fang"}});
//	iter = pets.insert(iter, std::make_pair("dog", "Spot")); 	// Insert Spot before Fang
//	pets.insert(std::make_pair("dog", "Rover"));				// Inserts Rover after Fang
//	pets.insert (std::make_pair ("cat", "Korky"));				// Inserts Korky before all dogs
//	pets.insert ({{ "rat", "Roland"}, {"pig", "Pinky" }, {"pig", "Perky"}});	//Inserts list elements
//
//	auto iterr = pets.emplace("rabbit","Flopsy");
//	iterr = pets.emplace_hint (iterr, "rabbit", "Mopsy");		// Create preceding Flopsy
//	std::cout<<"size: "<<pets.size()<<std::endl;
//	for(const auto& p:pets)
//	{
//		std::cout<<"animal: "<<p.first<<" name: "<<p.second<<std::endl;
//		std::cout<<std::endl;
//	}

//	std::multimap<std::string, size_t> people{{"Ann",  25},
//											  {"Bill", 46},
//											  {"Jack", 77},
//											  {"Jack", 32},
//											  {"Jill", 32},
//											  {"Ann",  35}};
//	std::string name{"Bill"};
//	auto iter = people.find(name);
//	if (iter != std::end(people))
//		std::cout << name << " is " << iter->second << std::endl;
//	iter = people.find("Ann");
//	if (iter != std::end(people))
//		std::cout << iter->first << " is " << iter->second << std::endl;
//	//一般来说，我们想访问给定键对应的所有元素。成员函数 equal_range() 就可以做到这一点
//	auto pr = people.equal_range("Ann");
//	if(pr.first != std::end(people))
//	{
//		for (auto iter = pr.first ; iter != pr.second; ++iter)
//			std:cout << iter->first << " is " << iter->second << std::endl;
//	}
//
//	auto iter1 = people.lower_bound("Ann");
//	auto iter2 = people.lower_bound("Ann");
//	if(iter1 != std::end(people))
//	{
//		for(auto iter = iter1 ; iter != iter2; ++iter)
//			std::cout << iter->first << " is " << iter->second << std::endl;
//	}
//
//	auto n = people.count("Jack"); // Returns 2
//	std::cout << "count: "<<n<<std::endl;
//}
