// Tutorial 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fstream"
#include "iostream"

using namespace std;

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		cout<<(atoi(argv[1])+atoi(argv[2]))<<endl;
	}
	else
	{
		return -1;
	}
	return 0;
}
