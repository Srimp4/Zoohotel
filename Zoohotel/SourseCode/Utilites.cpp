#include "./Utilities.hpp"

//thi is how we define a function that was introduced in the hpp file 
int ZooHotel::Demo::F01()
{
	return 0;
}

//and here we actually created a global variable
int ZooHotel::Demo::g_var;

namespace ZooHotel
{
	namespace DateTime
	{
		bool DateTime::ParseISOString(const std::string& iso_time)
		{
			std::tm tm{};

			std::istringstream istring(iso_time);

			istring >> std::get_time(&tm, "%Y-%m-%d %H:%M:%S");

			if (istring.fail())
			{
				return false;
			}

			std::time_t tt = std::mktime(&tm);

			if (-1 == tt)
			{
				return false;
			}
			
			return true;
			
		}

		void DateTime::UpdateString(const
			std::chrono::time_point<
			std::chrono::system_clock,
			std::chrono::seconds>& tp)
		{
			auto tt = std::chrono::system_clock::to_time_t(tp);
			std::tm* tm = std::localtime(&tt);

			if (!tm)
			{
				throw std::runtime_error("failed to load convert time\n");
			}
			std::ostringstream oss;
			oss << std::put_time(tm, "%Y-%m-%d %H:%M:%S");

			iso8601str = oss.str();
		}
	}
}