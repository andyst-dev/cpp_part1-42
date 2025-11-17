#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <exception>

class RPN
{
	public:
		RPN();
		RPN(const RPN &other);
		RPN &operator=(const RPN &other);
		~RPN();

		class InvalidExpressionException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		int evaluate(const std::string &expr) const;
	};

#endif
