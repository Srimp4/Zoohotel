#pragma once

#ifndef OWNER_HPP
#define OWNER_HPP

#include <string>
#include <iostream>

namespace ZooHotel
{
	class Owner
	{
	public:
		Owner() = default;
		Owner
		(
			std::string name,
			std::string lastname,
			std::string patrinomic,
			std::string passport,
			std::string phonenumber,
			std::string email,
			int UID
		);
		Owner
		(
			std::string name,
			std::string lastname,
			std::string patrinomic,
			std::string phonenumber,
			std::string email,
			int UID
		);

		//setters
		void Setname(const std::string name);
		void Setlastname(const std::string lastname);
		void Setpatrinomic(const std::string patrinomic);
		void Setpassport(const std::string passport);
		void Setphone(const std::string phonenumber);
		void Setemail(const std::string email);
		void SetID(int ID);
		
		//getters me when i get you:
		const std::string& Getname()const;
		const std::string & Getlastname()const;
		const std::string & Getpatrinomic()const;
		const std::string & Getpassport()const;
		const std::string & Getphone()const;
		const std::string & Getemail()const;
		int GetID()const;

		//iostream operators
		friend std::ostream& operator<<(std::ostream& out, const Owner& obj);
		friend std::istream& operator>>(std::istream& in,  Owner& obj);


	private:
		std::string name_;
		std::string lastname_;
		std::string patrinomic_;
		std::string passport_;
		std::string phonenumber_;	
		std::string email_; 
		int UID_;
	};
}




#endif // !OWNER_HPP