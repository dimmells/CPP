/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 18:25:50 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/27 18:25:52 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

class Base {
public:
	virtual ~Base(){}
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

Base *	generate(void) {
	srand(time(0));
	if (rand() % 2)
		return (new A);
	else if (rand() % 2)
		return (new B);
	else
		return (new C);
}

void identify_from_pointer(Base * p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	}
	else
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p) {
	if (dynamic_cast<A*>(&p)) {
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(&p)) {
		std::cout << "B" << std::endl;
	}
	else
		std::cout << "C" << std::endl;
}

int		main() {
	Base *base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	return (0);
}
