/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 13:30:22 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/04/06 12:43:11 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_HPP
# define QUEUE_HPP

# include <deque>
#include "../list/list.hpp"
#include "../list/list_iterator.hpp"



namespace ft
{
	template <class T, class Container = std::deque<T> >
	class queue
	{
		public:
			typedef T									value_type;
			typedef Container							container_type;
			typedef size_t								size_type;

		private:
			container_type								_myqueue;
		public:
			explicit 									queue (const container_type& ctnr = container_type())
			{
				_myqueue = ctnr;
			}

			queue& 										operator= (const queue& x)
			{
				*this->_myqueue = x._myqueue;
				return (*this);
			}

			size_type 									size() const
			{
				return(_myqueue.size());
			}
			
			bool 										empty() const
			{
				return(_myqueue.empty());
			}

			value_type& 								front()
			{
				return (_myqueue.front());
			}
			const value_type& 							front() const
			{
				return (_myqueue.front());
			}
			value_type& 								back()
			{
				return (_myqueue.back());
			}
			const value_type& 							back() const
			{
				return (_myqueue.back());
			}

			void 										push (const value_type& val)
			{
				return (_myqueue.push_back(val));
			}

			void 										pop()
			{
				return (_myqueue.pop_front());
			}
			
			friend bool 								operator==(const queue<T, Container> &lhs, const queue<T, Container> &rhs)
			{
				if(lhs._myqueue == rhs._myqueue)
					return (true);
				else
					return (false);
			}
			friend bool 								operator!= (const queue<T,Container>& lhs, const queue<T,Container>& rhs)
			{
				if(lhs._myqueue != rhs._myqueue)
					return (true);
				else
					return (false);
			}
			friend bool	 								operator<  (const queue<T,Container>& lhs, const queue<T,Container>& rhs)
			{
				if(lhs._myqueue < rhs._myqueue)
					return (true);
				else
					return (false);
			}
			friend bool 								operator<= (const queue<T,Container>& lhs, const queue<T,Container>& rhs)
			{
				if(lhs._myqueue <= rhs._myqueue)
					return (true);
				else
					return (false);
			}
			friend bool 								operator>  (const queue<T,Container>& lhs, const queue<T,Container>& rhs)
			{
				if(lhs._myqueue > rhs._myqueue)
					return (true);
				else
					return (false);
			}
			friend bool 								operator>= (const queue<T,Container>& lhs, const queue<T,Container>& rhs)
			{
				if(lhs._myqueue >= rhs._myqueue)
					return (true);
				else
					return (false);
			}
	};

};

#endif