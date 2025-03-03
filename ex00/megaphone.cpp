/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angerard <angerard@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 11:44:58 by angerard          #+#    #+#             */
/*   Updated: 2025/03/03 13:57:29 by angerard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char *av[])
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    int i = 1;
    while (i < ac)
    {
        char *str = av[i];
        int j = 0;
        while (str[j] != '\0')
        {
            std::cout << (char)std::toupper(str[j]);
            j++;
        }
        if (i < ac - 1)
        {
            std::cout << " ";
        }
        i++;
    }

    std::cout << std::endl;
    return 0;
}
