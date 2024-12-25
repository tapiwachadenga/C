#ifndef SQUARE_H
#define SQUARE_H

#include <string>
#include <iostream>
#include "rectangle.h"

using namespace std;

class Square : public Rectangle
{
	public:
		Square(float length);
		virtual ~Square();
		void print_str();

	protected:

	private:
		// std::string prv_str = "private string in Square";
};

class FileReader {

	public:
		FileReader() = delete;
		FileReader(string fileName);
		virtual ~FileReader(); 

		void readFile();
	protected:

	private:
		string fileName;
};
#endif
