#pragma once
 
#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <chrono>
#include <string>
#include <sstream>
#include <iomanip>
#include <stdexcept>

namespace ZooHotel
{

	namespace Demo
	{
		//function is introduced and defined in the header file
		int F00() { return -1; }

		//function is only introduced in the header file
		int F01();

		//this will be a problem
		//because of this compiler will think that this is the defining of the variable, if we put it into multiple parts of code it'll cause compilation problems
		//int g_var;
		
		//extern - defining of an outer element, it INTRODUCES it, so the program knows it exists but doesn't actually create anything
		extern int g_var;
	}

	namespace DateTime
	{
		//for working with time we use 2 libraries
		//ctime and chrono 
		//ctime - holds functions of time proccesing in unix-time meaning everything is tied to the ammount of milliseconds that have passed since the start of the unix epoch
		//one way or another
		//1.1.1970 - start of the unix epoch 
		//chrono - extended library of template solutions for time units, time stamps and system hours of various precisness 
		//(i dunno dude my brain is too smooth to remember the right words)


		/*class Time
		{
		public:
			std::chrono::hours hours_;
			std::chrono::minutes minutes_;
			std::chrono::seconds seconds_;
		};

		class Date
		{
		public:
			std::chrono::years years_;
			std::chrono::months months_;
			std::chrono::days days_;
		};

		class DateTime
		{
		public:
			Date date_;
			Time time_;
		};*/

		//solutions above are naive and don't really got anything for automation,
		//for storing the tima and date t the same time there is a specific data type that is usually used: std::chrono::time_point, this type can be converted into a human-readable
		//data instantly and not through self written algorithms

		//for a more normal interaction with the user we need to present data in ISO 8601 format: "YYYY-MM-DD HH:MM:SS"

		class DateTime
		{
		public:
			DateTime();
			DateTime(const ::std::string& iso_time);

			std::chrono::time_point<std::chrono::seconds> TimePoint()const;
			std::string IsoTime()const;

			void SetYear(std::chrono::years year);
			void SetYear(int year);
			void SetYear(std::string year);

			void SetMonths(std::chrono::months months);
			void SetMonths(int months);
			void SetMonths(std::string months);

			void SetDays(std::chrono::days days);
			void SetDays(int days);
			void SetDays(std::string days);

			bool operator ==(const DateTime& other)const;
			bool operator >(const DateTime& other)const;

		private:
			::std::string iso8601str;

			bool ParseISOString(const std::string& iso_time);

			void UpdateString(const
				std::chrono::time_point<
				std::chrono::system_clock,
				std::chrono::seconds> &tp);
		};

	}

}
 
#endif // !UTILITIES_HPP

