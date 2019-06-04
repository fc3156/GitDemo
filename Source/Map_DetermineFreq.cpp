//
// Created by fc0310 on 2019/5/22.
//
// Determining word frequency
//#include <iostream>                               // For standard streams
//#include <iomanip>                                // For stream manipulators
//#include <string>                                 // For string class
//#include <sstream>                                // For istringstream
//#include <algorithm>                              // For replace_if() & for_each()
//#include <map>                                    // For map container
//#include <cctype>                                 // For isalpha()
//#include <iterator>
//#include "../Header/Name.h"
//using namespace std;
//using std::string;
//int main()
//{
//	std::cout << "Enter some text and enter * to end:\n";
//	string text_in {};   //定义一个变量用于接收控制台输入的字符
//	std::getline(std::cin, text_in, '*'); //由控制台输入并存入变量text_in
//	// Replace non-alphabetic characters by a space（将不是字母的字符替换为空格）
//	std::replace_if(std::begin(text_in), std::end(text_in), [](const char& ch){ return !isalpha(ch); }, ' ');
//	std::istringstream text(text_in);             // Text input string as a stream
//	std::istream_iterator<string> begin(text);    // Stream iterator 开始流迭代器
//	std::istream_iterator<string> end;            // End stream iterator 结束流迭代器
//	std::map<string, size_t> words;               // Map to store words & word counts
//	size_t max_len {};                            // Maximum word length，保存最大的单词长度值
//	std::for_each(begin, end, [&max_len, &words](const string& word)//使用for_each函数，给单词计数
//	{
//		words[word]++;	//map以word单词做键，此单词的个数为值
//		max_len = std::max(max_len, word.length());
//	});
//	size_t per_line {4}, count {};
//	for(const auto& w : words) //遍历map进行打印
//	{
//		std::cout << std::left << std::setw(max_len + 1) << w.first << std::setw(3) << std::right << w.second << "  ";
//		if(++count % per_line == 0)  std::cout << std::endl;//4个单词一换行
//	}
//	std::cout << std::endl;
//}