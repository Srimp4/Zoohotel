#pragma once

#ifndef ROOM_HPP
#define ROOM_HPP

#include <vector>
#include <string>
#include "Bench.hpp"
#include "Pet.hpp"
#include "Utilities.hpp"


namespace ZooHotel
{
	class Room
	{
	public:

		//space control
		void SetspaceCapacity(int n);
		void SetspaceType(int place_n, Types new_type);
		void RemoveSpace(int place_n);
		void AddSpace(Types new_type);


		//space properties
		int EmptySpaces()const;
		int FilledSpaces()const;
		int AllSpaces()const;

		const Pet* Whoat(int space_n)const;
		const Bench* at(int space_n)const;

	private:
		void NormalizeBenchID();
		int ID_;
		std::string adress_;
		std::string description_;
		std::vector<Bench> spaces_;
	};
}

#endif //!ROOM_HPP