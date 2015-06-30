/*
 * process.cpp
 *
 *  Created on: 29 Jun 2015
 *      Author: "Ananta Yudica"
 */

#include "process.h"
#include <iostream>
#include <assert.h>

#define AUTHOR_NAME "Ananta Yudica"

#define EXIT_CODE 0
#define RUN_CODE 1
#define INTERUPT_CODE 14
#define MAXIMUM_STACK 1000

namespace process {

void sayHello() {
	std::cout << "hello, my name is " << AUTHOR_NAME << std::endl;
};

Process::Process() {}

Process::~Process() {}

const char Process::EXIT = EXIT_CODE;

const char Process::RUN = RUN_CODE;

char Process::process() {
	return this->EXIT;
};

Looping::Looping() {};
Looping::~Looping() {};

const char Looping::INTERUPT = INTERUPT_CODE;

const int Looping::MAX_STACK = MAXIMUM_STACK;

char Looping::running(int counter) {
	if (counter >= this->MAX_STACK) {
		return this->INTERUPT;
	}
	if (this->process() == this->EXIT) {
		return this->EXIT;
	}
	return this->running(++counter);
};

void Looping::run(int counter) {
	assert(counter < this->MAX_STACK);
	if (this->running(0) == this->EXIT) {
		return;
	}
	this->run(++counter);
};

void Looping::run() {
	this->run(0);
};

} /* namespace process */
