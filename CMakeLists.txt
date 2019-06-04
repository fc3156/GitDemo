# cmake_minimum_required(VERSION <specify CMake version here>)
project(LearnVSC)

set(CMAKE_CXX_STANDARD 14)

add_executable(LearnVSC main.cpp Source/TestSort.cpp Source/CustomerCheckout.cpp Source/SmartPtr.cpp Source/Map.cpp Source/Map_DetermineFreq.cpp Source/Map_Quotations.cpp Source/Map_Erase.cpp Source/Map_Pair.cpp Source/Map_Tuple.cpp Source/Map_Multimap.cpp Source/Map_MultimapDemo.cpp Source/Map_Compare.cpp Source/Set.cpp Source/Set_Demo.cpp Header/Student.h Header/List_Course.h Source/Set_MultiSet.cpp Header/PetClasses.h Header/Dog_Classes.h Source/Set_PetsDemo.cpp Header/Cat_Classes.h Source/Default-Delete.cpp)