/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:39:36 by angerard          #+#    #+#             */
/*   Updated: 2025/02/07 11:22:24 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string fst_name;
    std::string lst_name;
    std::string nickname;
    std::string phone_nbr;
    std::string darkest_secret;

public:
    void setContact();
    void displayContact() const;
    void displaySummary(int index) const;
};

#endif
