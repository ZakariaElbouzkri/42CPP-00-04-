/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-bouz <zel-bouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 05:33:40 by zel-bouz          #+#    #+#             */
/*   Updated: 2023/09/02 04:03:31 by zel-bouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact();
		~Contact();
		void		addUpdateContact(void);
		void		displayContactInfo(void);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getSecret(void);
		std::string	getPhoneNumber(void);
};

void	readLine(std::string& dest, std::string prompt);
bool	empty(std::string	str);

#endif