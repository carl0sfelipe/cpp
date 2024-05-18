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

#include <iostream>

int main(int argc, char **argv) {//argc is the number of arguments passed to the program, including the name of the program. argv is an array of strings containing the arguments.
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;//std::endl is a manipulator that inserts a newline character into the output stream.
    } else {
        for (int i = 1; i < argc; i++) {//i is the index of the argument 
            for (int j = 0; argv[i][j] != '\0'; j++) {//j is the index of the character in the argument
                std::cout << (char)(argv[i][j] - 32);//std::toupper converts the character to uppercase
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
