//
// Created by fc0310 on 2019/5/24.
//

#ifndef LEARNVSC_MOUSE_CLASSES_H
#define LEARNVSC_MOUSE_CLASSES_H

#include "PetClasses.h"
class Mouse : public Pet {
public:
	Mouse() = default;
	Mouse(const string &mouse_name) {
		name = mouse_name;
	}
};

#endif //LEARNVSC_MOUSE_CLASSES_H
