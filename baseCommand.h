/*
 *  baseCommand.h
 *  LOGO Interpreter
 *
 *  Created by Oscar Alejandro Mendez Maldonado on 29/11/2012.
 *  Copyright 2012 guapOscar Enterprises. All rights reserved.
 *
 */
#include <iostream>

class baseCommand{
	
private:
	float value;
	
public:
	
	baseCommand(float v);
	baseCommand();
	
	~baseCommand();
	
	friend std::istream& operator>> (std::istream& in, baseCommand& a);
};

