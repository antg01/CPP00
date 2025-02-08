/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:40:07 by angerard          #+#    #+#             */
/*   Updated: 2025/02/08 12:21:50 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

void Contact::setContact()
{
    std::cout << "First Name: "; std::cin >> fst_name;
    std::cout << "Last Name: "; std::cin >> lst_name;
    std::cout << "Nickame: "; std::cin >> nickname;
    std::cout << "Phone Number: "; std::cin >> phone_nbr;
    std::cout << "Darkest Secret: "; std::cin >> darkest_secret;
}

void Contact::displayContact() const
{
    std::cout << "First Name: " << fst_name << std::endl;
    std::cout << "Last Name: " << lst_name << std::endl;
    std::cout << "Nickame: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_nbr << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

void Contact::displaySummary(int index) const
{
    std::cout << std::setw(10) << index << "|"
              << std::setw(10) << (fst_name.length() > 10 ? fst_name.substr(0,9) + "." : fst_name) << "|"
              << std::setw(10) << (lst_name.length() > 10 ? lst_name.substr(0,9) + "." : lst_name) << "|"
              << std::setw(10) << (nickname.length() > 10 ? nickname.substr(0,9) + "." : nickname) << std::endl;
}

