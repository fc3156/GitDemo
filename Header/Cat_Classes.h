//
// Created by fc0310 on 2019/5/24.
//

#ifndef LEARNVSC_CAT_CLASSES_H
#define LEARNVSC_CAT_CLASSES_H

#include "PetClasses.h"

class Cat : public Pet
{
public:
	Cat() = default;
	Cat(const string& cat_name)
	{
		name = cat_name;
	}
};
#endif //LEARNVSC_CAT_CLASSES_H
