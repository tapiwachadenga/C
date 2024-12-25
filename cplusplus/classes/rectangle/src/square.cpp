#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "square.h"

using namespace std;

Square::Square(float length):
	Rectangle(length, length)
{}

Square::~Square()
{}

void Square::print_str()
{
	cout << "pvt_str: " << pvt_str <<endl; 
}

FileReader::FileReader(string fileName):
fileName(fileName)
{}

FileReader::~FileReader()
{}

void FileReader::readFile()
{
        ifstream in(fileName);
        string line;
	vector<string> v;

        while(getline(in, line))
                v.push_back(line);
        
	for (int i = 0; v.size(); i++)
		cout << i << v[i] << endl;
}
