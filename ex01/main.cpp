/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:29:11 by angerard          #+#    #+#             */
/*   Updated: 2025/02/07 11:17:16 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string cmd;
    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> cmd;
        if (cmd == "ADD") {
            phoneBook.addContact();
        } else if (cmd == "SEARCH") {
            phoneBook.searchContact();
        } else if (cmd == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command" << std::endl;
        }
    }
    return 0;
}
