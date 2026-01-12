#pragma once

#ifndef PET_HPP
#define PET_HPP


#include <string>

int const arrsize = 3;
namespace Zoohotel
{
	class Owner;
	enum Size
	{
		tiny,
		small,
		medium,
		big,
		giant
	};
	class Pet
	{
	public:

	private:
		std::string name;
		Size size;
		std::string species;
		std::string bride;//???
		int BirthDate[arrsize];
		int uid;
		Owner* owner_;
	};
	class employee
	{
	public:
	private:
		std::string name;

	};
}




#endif