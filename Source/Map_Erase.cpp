////
//// Created by fc0310 on 2019/5/22.
////
//#include <iostream>                              // For standard streams
//#include <cctype>                                // For toupper()
//#include <map>                                   // For map containers
//#include <string>                                // For string class
////#include "../Header/Quotations.h"
////#include "../Header/Name.h"
//using std::string;
//using namespace std;
//
//int main() {
//	std::map<std::string, size_t> people{{"Fred", 45},
//										 {"Joan", 3},
//										 {"Jill", 22}};
//	std::cout<<std::endl;
//	auto it=people.erase(++std::begin(people),--std::end(people));
//	std::cout<<it->first<<it->second<<std::endl;
//
//	std::string name{"Joan"};
////	for(auto &p:people){
////		std::cout<<"name："<<p.first<<" age: "<<p.second<<endl;
////	}
//	std::map<std::string, size_t>::iterator iter;
//	for (iter = std::begin(people); iter != std::end(people); iter++) {
//		std::cout << "name: " << iter->first << " age: " << iter->second << std::endl;
//	}
//	if (people.erase(name)) {
//		std::cout << name << " was removed." << std::endl;
//	} else {
//		std::cout << name << " was not found" << std::endl;
//	}
////	for (auto &p:people) {
////		std::cout << "删除后的 name: " << p.first << " age: " << p.second << std::endl;
////	}
//	iter=people.begin();
//	while(iter!=people.end()){
//		std::cout << "name: " << iter->first << " age: " << iter->second << std::endl;
//		iter++;
//	}
//
////	auto it=people.erase(std::begin(people));
////	if(it==std::end(people)){
////		std::cout << "The last element was removed."<< std::endl;
////	}else{
////		std::cout << "The element preceding " << it->first << "was removed." << std::endl;
////	}
////    std::cout<<std::endl;
////	auto it=people.erase(++std::begin(people),--std::end(people));
////	std::cout<<it->first<<it->second<<std::endl;
////	auto iterr=people.begin();
////	while(iterr!=people.end()){
////		std::cout << "name: " << iterr->first << " age: " << iterr->second << std::endl;
////		iterr++;
////	}
//}
