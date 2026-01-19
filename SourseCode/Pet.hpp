#pragma once

#ifndef PET_HPP
#define PET_HPP


#include <string>
#include "./Utilities.hpp"

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
		DateTime::DateTime birthday_;
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