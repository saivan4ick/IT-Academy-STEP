#pragma once
#include <iostream>
#include <string>
std::string reverseString(const std::string& str)
{
	if (str.length() <= 1) {
		return str;
	}
	return str.back() + reverseString(str.substr(0, str.length() - 1));
}
