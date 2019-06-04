//
// Created by fc0310 on 2019/5/16.
//
#include <iostream>
#include <map>
#include <algorithm>
#include <iomanip>
#include <vector>
#include "../Header/Name.h"
using namespace std;

//int main() {
//	std::map<std::string, size_t> people{{"Ann",  25},
//										 {"Bill", 46},
//										 {"Jack", 32},
//										 {"Jill", 32}};
//	std::map<std::string, size_t> person{people};
//	std::map<std::string, size_t> peeer{++std::begin(people), std::end(people)};
//
//	auto pr = std::make_pair("freq", 22);
//	auto ret_ptr = people.insert(pr);
//	std::cout << ret_ptr.first->first << " " << ret_ptr.first->second << " " << std::boolalpha << ret_ptr.second
//			  << "\n";
//
//	std::map<std::string,size_t>crowd {{"May", 55}, {"Pat",66}, {"Al", 22}, {"Ben", 44}};
//	auto iter=std::begin(people);
//	std::advance(iter,4);
//	crowd.insert(++std::begin(people),iter);
//	for (const auto &q:crowd) {
//		std::cout << std::setw(10) << std::left << q.first << "  " << q.second << "\n";
//	}
//	std::cout<<endl;
//	for (const auto &p:people) {
//		std::cout << std::setw(10) << std::left << p.first << "  " << p.second << "\n";
//	}

//	vector<int> val = {1, 2, 3, 4, 5, 6};
//	vector<int>::iterator iter;
//	for(iter = val.begin();iter != val.end();){
//		cout<<*iter<<endl;
//		if(3 == *iter){
//			iter = val.erase(iter);  //返回下一个有效的迭代器，无需+1
////		}else{
//			++iter;
//		}
//	}


/*
 * Map插入元素
 * */
//	struct person
//	{
//		string name;
//		int age;
//		person(string name, int age)
//		{
//			this->name =  name;
//			this->age = age;
//		}
//		bool operator < (const person& p) const
//		{
//			return this->age < p.age;
//		}
//	};
//	map<person,int> m;
//	int main()
//	{
//		person p1("Tom1",20);
//		person p2("Tom2",22);
//		person p3("Tom3",22);
//		person p4("Tom4",23);
//		person p5("Tom5",24);
//		m.insert(make_pair(p3, 100));
//		m.insert(make_pair(p4, 100));
//		m.insert(make_pair(p5, 100));
//		m.insert(make_pair(p1, 100));
//		m.insert(make_pair(p2, 100));
//		cout<<m.size()<<endl;
//		//for(map<person, int>::iterator iter = m.begin(); iter != m.end(); iter++)
//		for(auto &p:m)
//		{
//			//cout<<iter->first.name<<"\t"<<iter->first.age<<endl;
//			cout<<p.first.name<<" "<<p.first.age<<endl;
//		}
//		cout<<m.size()<<endl;
//		return 0;
//	}
//}


/*
 * Map构造元素
 * */
//int main(){
//	std::map<Name, size_t> people;
//	auto pr = people.emplace(Name{"Dan","Druff"}, 77);  //构造一个map中的成员
//	//auto iter = people.emplace_hint (pr.first, Name {"Cal","Cutta"}, 62);
//	if(pr.second){
//		std::cout <<"Success_emplace!\n";
//	}
////	std::cout<<people.size()<<endl;
//
//	auto prr=people.emplace(Name{"Dan","Druff"},77);
//	auto count=people.size();
//	auto iterr=people.emplace_hint(prr.first,Name{"Cal","Cutta"},62);
//	if(count < people.size ()) std::cout <<"Success_emplace_hint!\n";
//}

/*
 * Map获取访问元素
 * */
//int main(){
//	Name key;
//	std::map<Name, size_t> people;
//	auto pr = people.emplace(Name{"Dan","Druff"}, 77);  //构造一个map中的成员
//	try
//	{
//		key = Name{"Dan", "Druff"};
//		auto value = people.at(key);
//		std:: cout << key << "is aged " << value << std:: endl;
//		key = Name {"Don", "Druff"};
//		value = people.at(key);
//		std::cout << key << " is aged " << value << std::endl;
//	}
//	catch(const std::out_of_range& e)
//	{
//		std::cerr << e.what() << '\n'<< key << " was not found." <<std::endl;
//	}
//}