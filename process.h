/*
 * process.h
 *
 *  Created on: 29 Jun 2015
 *      Author: "Ananta Yudica"
 */

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
	void run(int);
public:
	Looping();
	virtual ~Looping();
	void run();
};

} /* namespace process */

#endif /* PROCESS_H_ */
