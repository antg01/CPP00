/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:39:36 by angerard          #+#    #+#             */
/*   Updated: 2025/02/08 12:24:08 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

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
