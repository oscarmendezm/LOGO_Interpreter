/*
 *  baseCommand.cpp
 *  LOGO Interpreter
 *
 *  Created by Oscar Alejandro Mendez Maldonado on 29/11/2012.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "baseCommand.h"
#include <iostream>

baseCommand::baseCommand(float v){
	value=v;
}

baseCommand::baseCommand(){
	value=1.0;
}

baseCommand::~baseCommand(){
	std::cout << "Out of Scope, value: " << value << std::endl;
	
}

std::istream& operator>> (std::istream& in, baseCommand& a){

	in >> std::ws >> a.value;
	
	return in;

}