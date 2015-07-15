/*
 * process.h
 *
 *  Created on: 29 Jun 2015
 *      Author: "Ananta Yudica"
 */

#include <stdexcept>
#ifndef PROCESS_H_
#define PROCESS_H_


namespace process {
/**
 *
 * */
void sayHello();

class Process {
protected:
	static const char EXIT;
	static const char RUN;
public:
	Process();
	virtual ~Process();
	virtual char process() = 0;
};

class Looping: public Process {
private:
	static const char INTERUPT;
	static const int MAX_STACK;
	char running(int);
	void run(int) throw(std::exception);
public:
	Looping();
	virtual ~Looping();
	void run() throw(std::exception);
};

} /* namespace process */

#endif /* PROCESS_H_ */
