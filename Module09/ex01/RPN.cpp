/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:08:44 by zel-bouz          #+#    #+#             */
/*   Updated: 2024/01/29 14:48:46 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include "RPN.hpp"

void	doOp(std::stack<int>& stk, char op) {
    int a, b;

    b = stk.top(); stk.pop();
    a = stk.top(); stk.pop();

	if (op == '/' && b == 0) {
		std::cerr << "Error: Division by zero" << '\n';
		exit(1);
	}

	switch (op) {
		case '+': stk.push(a + b); break;
		case '-': stk.push(a - b); break;
		case '*': stk.push(a * b); break;
		case '/': stk.push(a / b); break;
	};

}

bool evaluate(const std::string& input, int& result) {
    std::stack<int>		stk;
    std::stringstream	ss(input);
	char				tok;
    
    while (ss >> tok) {
        if (tok >= '0' && tok <= '9')
            stk.push((tok - '0'));
        else if (tok == '-' || tok == '+' || tok == '/' || tok == '*') {
            if (stk.size() < 2) return false;
            doOp(stk, tok);
        } else return false;
    }
    if (stk.size() != 1) return false;
    result = stk.top();
    return true;
}