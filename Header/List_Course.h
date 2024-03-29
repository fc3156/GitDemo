//
// Created by fc0310 on 2019/5/23.
//

#ifndef LEARNVSC_LIST_COURSE_H
#define LEARNVSC_LIST_COURSE_H

#include <iostream>                              // For standard streams
#include <string>                                // For string class
#include <set>                                   // For set container
#include <algorithm>                             // For copy()
#include <iterator>                              // For ostream_iterator
#include <memory>
#include "Student.h"

using Subject = std::string;                     // A course subject
using Group = std::set<std::weak_ptr<Student>, std::owner_less<std::weak_ptr<Student>>>;  // A student group for a subject
using Course = std::pair<Subject, Group>;        // A pair representing a course
class List_Course {
public:
	void operator()(const Course &course) {
		std::cout << "\n\n" << course.first << "  " << course.second.size() << " students:\n  ";
		std::copy(std::begin(course.second), std::end(course.second),
				  std::ostream_iterator<std::weak_ptr<Student>>(std::cout, "  "));
	}
};

inline std::ostream &operator<<(std::ostream &out, const std::weak_ptr<Student> &wss) {
	out << *wss.lock();
	return out;
}

#endif //LEARNVSC_LIST_COURSE_H
