#pragma once

#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>
#include <iostream>

namespace ZooHotel
{
	

	class Employee
	{
		
	public:
		
		enum class Role
		{
			admin,
			staff
		};

		Employee() = default;
		Employee
		(
			Role role_,
			std::string &name_,
			std::string &lastname_,
			std::string &password_,
			std::string &passport_,
			std::string &phonenumber_,
			std::string &email_,
			int EID_
		);

		//setters
		Role Setrole_(Role newrole);
		void Setname_(const std::string& new_name);
		void Setlastname_(const std::string& new_lastname);
		void Setpassword_(const std::string& new_password);
		void Setpassport_(const std::string& new_passport);
		void Setphonenumber_(const std::string& new_phone);
		void Setemail_(const std::string& new_email);
		int SetEID_(int new_EID);


		//getters
		Role Getrole_();
		const std::string& Getname_();
		const std::string& Getlastname_();
		const std::string& Getpassword_();
		const std::string& Getpassport_();
		const std::string& Getphonenumber_();
		const std::string& Getemail_();
		int GetEID_();


		friend std::ofstream& operator<< (std::ostream& out, const Employee& obj);
		friend std::istream& operator>> (std::istream& in, Employee& obj);

	private:
		Role role_;
		std::string name_;
		std::string lastname_;
		std::string passport_;
		std::string phonenumber_;
		std::string email_;
		std::string password_;
		int EID_;
	};

}

#endif // !EMPLOYEE_HPP
