#pragma once

#ifndef PET_HPP
#define PET_HPP


#include <string>
#include "./Utilities.hpp"

namespace ZooHotel
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

	class Ticket;

	class Room;

	class Bench;

	class Pet
	{
	public:

	private:
		std::string name;
		Size size;
		std::string species;
		std::string bride;//???
		//DateTime:: birthday_;
		int uid;
		Owner* owner_;
	};

	class Role;

	class Employee
	{
	public:
	private:
		std::string name;

	};

	class Zoohotel
	{
		std::vector<Employee> staff;
	};

}




#endif