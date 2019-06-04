//
// Created by fc0310 on 2019/5/24.
//

#ifndef LEARNVSC_DOG_CLASSES_H
#define LEARNVSC_DOG_CLASSES_H
#include "PetClasses.h"
class Dog : public Pet
{
public:
	Dog() = default;
	Dog(const string& dog_name)
	{
		name = dog_name;
	}
};
#endif //LEARNVSC_DOG_CLASSES_H
