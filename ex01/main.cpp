/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:29:11 by angerard          #+#    #+#             */
/*   Updated: 2025/04/11 13:53:10 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void signalHandler(int signal)
{
    if (signal == SIGQUIT)
    {
        std::cout << "\nSIGQUIT received. Ignored." << std::endl;
    }
}

int main()
{
    signal(SIGQUIT, SIG_IGN);
    PhoneBook phoneBook;
    std::string cmd;
    while (true) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> cmd;
        if (std::cin.eof())
        {
            std::cout << "\nEnd of input (Ctrl+D). Exiting..." << std::endl;
            break;
        }
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
