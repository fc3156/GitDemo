//
// Created by fc0310 on 2019/5/23.
//
#include <iostream>                                        // For standard streams
#include <string>                                          // For string class
#include <map>                                             // For multimap container
#include <cctype>                                          // For toupper()
#include <tr1/memory>
#include <set>

using std::string;
using namespace std;

/*
 * set 中没有实现成员函数 at()，也没有实现 operator[]() 。除了这些操作外，set 容器提供 map 容器所提供的大部分操作。
 * 可以使用 insert()、emplace()、emplace_hint() 成员函数来向 set 中添加元素。
 * */
//int main() {
//	std::set<string, std::greater<string>> words{"one", "two", "three"};
//	auto pr1 = words.insert("four");
//	auto pr2 = words.insert("two");
//	auto iter3 = words.insert(pr2.first, "seven");
//	words.insert({"five", "six"});
//	string wrds[]{"eight", "nine", "ten"};
//	words.insert(std::begin(wrds), std::end(wrds));
//	for (const auto &p:words) {
//		std::cout << p << std::endl;
//		std::cout<<std::endl;
//	}
//
//	std::set<std::pair<string,string>> names;
//	auto pr=names.emplace("Lisa","Carr");
//	auto iter=names.emplace_hint(pr.first,"Joe","King");
//	/*
//	 * 成员函数 clear() 会删除 set 的所有元素。成员函数 erase() 会删除迭代器指定位置的元素或与对象匹配的元素
//	 * */
//	std::set<int> numbers {2, 4, 6, 8, 10, 12, 14};
//	auto iterr = numbers.erase(++std::begin(numbers));
//	auto n = numbers.erase(12);
//	n = numbers.erase(13);
//	numbers.clear();

//	std::set<int> number{2, 4, 6, 8, 10, 12, 14};
//	auto iter1 = std::begin(number); // iter1 points to 1st element
//	advance(iter1, 5); // Points to 6th element-12
//	auto iter = number.erase(iter1,std::end(number));// Remove 2nd to 5th inclusive. iter points to 12
//	for (const auto &p:number) {
//		std::cout << p << std::endl;
//		std::cout<<std::endl;
//	}
	/*
	 *set 的成员函数 find() 会返回一个和参数匹配的元素的迭代器。如果对象不在 set 中，会返回一个结束迭代器
	 * */
//	std::set<string> words {"one", "two","three", "four","five"};
//	auto iter = words.find ("one") ; // iter points to "one"
//	iter = words.find(string{"two"});   // iter points to "two"
//	iter = words.find ("six");   // iter is std:: end (words)
//}
