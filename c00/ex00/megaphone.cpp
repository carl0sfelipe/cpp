/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:05:05 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/18 16:05:55 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // cout, endl
#include <cstdlib> // EXIT_* macros

using std::cout;
using std::endl;

std::string string_to_upper(std::string arg)
{
    for (size_t i = 0; i < arg.length(); i += 1)
        arg[i] = toupper(arg[i]);
    return arg;
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return EXIT_SUCCESS;
    }
    for (int i = 1; i < argc; i += 1)
        cout << string_to_upper(argv[i]);
    cout << endl;
    return EXIT_SUCCESS;
}