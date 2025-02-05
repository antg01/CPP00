/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:44:58 by angerard          #+#    #+#             */
/*   Updated: 2025/02/05 12:18:43 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char* av[])
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < ac; i++)
    {
        char* str = av[i];
        for (int j = 0; str[j] != '\0'; j++)
        {
            std::cout << (char)std::toupper(str[j]);
        }
    }
    // adds \n
    std::cout << std::endl;
    return 0;
}
