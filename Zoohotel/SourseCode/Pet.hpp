#pragma once

#ifndef PET_HPP
#define PET_HPP


#include <string>
#include <memory>
#include "./Utilities.hpp"
#include "Owner.hpp"

namespace ZooHotel
{
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
		Pet() = default;
		Pet(std::string name,
			Size size,
			std::string species,
			std::string bride,//???
			DateTime::DateTime birthday_,
			int UID,
			std::shared_ptr<Owner> owner_
		);
		//getters
		//...
		const Owner& Getowner()const
		{
			if (owner_ == nullptr) throw - 1;
			return *owner_;
		}
		const std::string Getname()const;
		const Size Getsize()const;
		const std::string Getspecies()const;
		const std::string Getbride()const;//still got no idea what "bride" means, i mean i know the translation, but i've got no idea why it's used here and what it describes
		const DateTime::DateTime Getbirthday()const;
		const int GetID()const;


		//setters
		//...
		void Setowner(std::shared_ptr<Owner> owner)
		{
			if (owner == nullptr)throw - 1;
			owner_.reset();
			owner_ = owner;
		}
		void Setname(std::string name);
		void Setsize(Size size);
		void Setspecies(std::string species);
		void Setbride(std::string bride);
		void Setbirthday(DateTime::DateTime birthday);
		void SetID(int ID);

	private:
		std::string name_;
		Size size_;
		std::string species_;
		std::string bride_;//???
		DateTime::DateTime birthday_;
		int UID_;
		std::shared_ptr<Owner> owner_;
	};

	class Zoohotel
	{
		std::vector<Employee> staff;
	};

}




#endif