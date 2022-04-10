#ifndef TEACHER_H
#define TEACHER_H
#include <map>
#include <queue>
#include <tuple>
#include "Equation.h"
class Teacher {
public:
	explicit Teacher(std::map <std::string, int > &res) : _results(res) {};
	void review(std::queue < std::tuple <Equation, Solution, std::string> > &studQueue);
	void publishResults();
private:
	std::map <std::string, int> _results;
};
#endif // !TEACHER_H

