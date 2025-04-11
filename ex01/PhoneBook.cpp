/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:39:54 by angerard          #+#    #+#             */
/*   Updated: 2025/04/11 14:00:32 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

PhoneBook::PhoneBook() : contact_count(0) {}

void PhoneBook::addContact()
{
    static int oldest_index = 0;
    if (contact_count < 8)
    {
        contacts[contact_count].setContact();
        contact_count++;
    }
    else
    {
        contacts[oldest_index].setContact();
        oldest_index = (oldest_index + 1) % 8;
    }
}

void PhoneBook::searchContact() const
{
    displayContact();
    int index;
    std::cout << "Entre index: ";
    std::cin >> index;
    if (std::cin.fail() || index < 1 || index > contact_count) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Invalid index" << std::endl;
    }
    else {
        contacts[index - 1].displayContact();
    }
}

void PhoneBook::displayContact() const
{
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < contact_count; i++) {
        contacts[i].displaySummary(i);
    }
}
