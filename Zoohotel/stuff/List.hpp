#pragma once

#ifndef LIST_HPP
#define LIST_HPP

template<typename Type> 
class List
{
public:
	//constructors
	List()
	{
		begin_ = nullptr;
		end_ = nullptr;
		size_ = 0;
	}
	List(unsigned size)
	{
		if (!size)
		{
			begin_ = nullptr;
			end_ = nullptr;
			size_ = 0;
			return;
		}
		size_ = size;
		auto tmp = new Node;
		begn_ = tmp;
		end_ = tmp;
		size -= 1;
		while (size)
		{
			Node* tmp = new Node;
			end_->Setnext(tmp);
			tmp->Setprev(end_);
			end_ = tmp;
		}
	}
	List(const List& other)
	{
		begin_ = new Node;
		*begin_->GetData() = other.begin_->GetData();
		auto current = other.begin_->Getnext();
		size_ = other.size_;
		while (current != nullptr)
		{
			auto tmp = new Node;
			tmp->GetData() = current->GetData();
			end_->Setnext(tmp);
			(*tmp).Setprev(end_);
			end_ = tmp;
			current = current->Getnext();
		}
	}
	List(List&& other)noexcept
	{
		begin_ = nullptr;
		end_ = nullptr;
		size_ = 0;
		std::swap(begin_, other.begin_);
		std::swap(end_, other.end_);
		std::swap(size_, other.size_);
	}
	~List()//delete for every node in the list, task 1 for homework
	{ }

	//operators
	//=, =, [], []
	
	List& operator=(const List& other)
	{
		auto it_our = begin_;
		auto it_other = other.begin_;
		for (size_t i = 0; i < size; i++)
		{
			it_our->GetData() = it_other->GetData();
			it_our = it_our->Getnext();
			it_other = it_other->Getnext();
		}
		if (size_ > other.size)
		{
			end_ = it_our;
		 	auto delete end_->Getnext();
			while (deleted)
			{
				auto next = deleted->Getnext();
				if (deleted) delete deleted;
				deleted = next;
			}
		}
		//we are shorter than other
	}

	List& operator=(List&& other)
	{
		std::swap(begin_, other.begin_);
		std::swap(end_, other.end_);
		std::swap(size_, other.size_);
	}

	List& operator[](int n)
	{
		if (n == 0)
		{
			return begin_->GetData();
		}
		auto current = begin_;
		while (n > 0)
		{
			current = current->Getnext();
			n -= 1;
		}
		return current->GetData();
	}

	const List& operator[](int n) const
	{
		if (n == 0)
		{
			return begin_->GetData();
		}
		auto current = begin_;
		while (n > 0)
		{
			current = current->Getnext();
			n -= 1;
		}
		return current->GetData();
	}

	//acces and changing
	//at, push, pop, insert, emplase, erase, clean
	
	//at - method, logical clone of [] but it's easier to call through pointers and it can throw exceptions

	//clean - method that releases the memory from the collection and voids it for the user

	void push_back(const Type& obj)
	{
		auto tmp = new Node;
		tmp->GetData() = obj;
		end_->Setnext(tmp);
		tmp->Setprev(end_);
		end_ = tmp;
	}
	void push_forward(const Type& obj);

	void pop_back();
	void pop_forward();

	//iterators++
	//special classes for walking through collections
private:
	class Node
	{
	public:
		Type& GetData(return data_;);
		Node* Getnext(return next_;);
		Node* Getprev(return prev_;);

		const Type& GetData()const { return data_; }
		const Node* Getnext()const { return next_; }
		const Node* Getprev()const { return prev_; }

		void Setnext(Node* next) { next_ = next; }
		void Setprev(Node* prev) { prev_ = prev; }
	private:
		Node* next_;
		Node* prev_:
		Type data_;
	};

	Node* begin_;
	Node* end_;
	unsigned size_;
};

#endif // !LIST_HPP
