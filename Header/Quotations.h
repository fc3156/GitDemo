//
// Created by fc0310 on 2019/5/22.
//
#ifndef LEARNVSC_QUOTATIONS_H
#define LEARNVSC_QUOTATIONS_H
#include <vector>                                          // For vector container
#include <string>                                          // For string class
#include <exception>                                       // For out_of_range exception
class Quotations
{
private:
	std::vector<std::string> quotes; // Container for the quotations
public:
	// Stores a new quotation that is created from a string literal
	Quotations& operator<<(const char* quote)  //重载输入操作符，参数是字符串常量
	{
		quotes.emplace_back(quote);//emplace__back() 会调用 string 的构造函数以在适当的位置生成元素
		return *this;
	}
	// Copies a new quotation in the vector from a string object
	Quotations& operator<<(const std::string& quote)//重载输入操作符，输入参数是string类型的引用
	{
		quotes.push_back(quote);
		return *this;
	}
	// Moves a quotation into the vector
	Quotations& operator<<(std::string&& quote) //重载输入操作符，右值引用参数
	{
		quotes.push_back(std::move(quote));//当在函数体中通过名称使用右值引用时，它会变成左值，因此必须使用 move() 函数将它变为右值，然后把它传给 vector 的成员函数 push_back()。这会保证对象总是移动传值，而不是复制传值。
		return *this;
	}
	// Returns a quotation for an index//重载vector容器的下标运算符
	std::string& operator[](size_t index)
	{
		if(index < quotes.size())
			return quotes[index];
		else
			throw std::out_of_range {"Invalid index to quotations."};
	}
	size_t size() const// Returns the number of quotations返回名言的个数
	{
		return quotes.size();
	}
	// Returns the begin iterator for the quotations
	std::vector<std::string>::iterator begin()
	{
		return std::begin(quotes);
	}
	// Returns the const begin iterator for the quotations返回常亮迭代器
	std::vector<std::string>::const_iterator begin() const
	{
		return std::begin(quotes);
	}
	// Returns the end iterator for the quotations
	std::vector<std::string>::iterator end()
	{
		return std::end(quotes);
	}
	// Returns the const end iterator for the quotations返回常量迭代器
	std::vector<std::string>::const_iterator end() const
	{
		return std::end(quotes);
	}
};
#endif //LEARNVSC_QUOTATIONS_H
