#pragma once
#ifndef GUARD_Student_info
#define GUARD_Student_info

// Student_info.h
#include <iostream>
#include <string>

#include "Vec.h"

using namespace std;

class Student_info {
private:
	string name;
	double midterm, final;
	Vec<double> homework;

public:
	// »ý¼ºÀÚ
	Student_info();
	Student_info(iostream&);

	string get_name() const { return name; }
	double get_midterm() const { return midterm; }
	double ger_final() const { return final; }
	Vec<double> get_hw() const { return homework; }

	void set_name(string n) { name = n; }

	bool valid() const { return !homework.empty(); }
	istream& read(istream&);
	double grade() const;
};

bool compare(const Student_info&, const Student_info&);

#endif