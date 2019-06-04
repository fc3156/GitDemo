//
// Created by fc0310 on 2019/5/22.
//
#include <iostream>                              // For standard streams
#include <cctype>                                // For toupper()
#include <map>                                   // For map containers
#include <string>                                // For string class
#include "../Header/Quotations.h"
#include "../Header/Name.h"

using std::string;

//int main() {
//	auto my_tuple = std::make_tuple(Name{"Peter", "Piper"}, 42, std::string{"914 626 7890"});
//
//	std::tuple<std::string, size_t> my_tl;//Default initialization
//	std::tuple<Name, std::string> my_t2{Name{"Andy", "Capp"}, std::string{"Programmer"}};
//	std::tuple<Name, std::string> copy_my_t2{my_t2}; // Copy constructor
//	std::tuple<std::string, std::string> my_t3{"this", "that"};
//	// Implicit conversion
//	auto the_pair = std::make_pair("these", "those");
//	std::tuple<std::string, std::string> my_t4{the_pair};
//	std::tuple<std::string, std::string> my_t5{std::pair<std::string, std::string>{"this", "that"}};
//
//	auto my_tuple1 = std::make_tuple (Name {"Peter","Piper"}, 42, std::string {"914 626 7890"});
//	std::cout << std::get<0>(my_tuple1)<< "age = "<<std::get<1>(my_tuple1)<< " tel: " << std::get<2>(my_tuple1) << std::endl;
//
//	auto my_tuple2 = std::make_tuple(Name{"Peter", "Piper"}, 42, std::string {"914 626 7890"});
//	std::cout << std::get<Name>(my_tuple2)<<" age = " << std::get<int> (my_tuple2)<< " tel: " <<std::get<std::string>(my_tuple2) << std::endl;
//
//	auto my_tuple3 = std::make_tuple(Name{"Peter","Piper"}, 42, std::string{"914 626 7890"});
//	Name name{};
//	size_t age{};
//	std::string phone{};
//	std::tie(name, age, phone) = my_tuple3;
//}



