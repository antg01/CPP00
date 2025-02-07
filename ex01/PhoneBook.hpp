/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:30:41 by angerard          #+#    #+#             */
/*   Updated: 2025/02/07 10:58:57 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <istream>
#include <iomanip>

class PhoneBook
{
private:
    Contact contacts[8];
    int contact_count;
    int oldest_index;

public:
    PhoneBook();
    void addContact();
    void searchContact() const;
    void displayContact() const;
};

#endif
