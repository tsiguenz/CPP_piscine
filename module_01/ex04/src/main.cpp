/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsiguenz <tsiguenz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:13:24 by tsiguenz          #+#    #+#             */
/*   Updated: 2022/05/19 18:27:50 by tsiguenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	getFileContent(char const* fileName) {
	std::ifstream	infile(fileName);
	std::string		line;
	std::string		fileContent;

	if (infile.is_open() == false) {
		std::cerr << "Error while opening the file" << std::endl;
		return (fileContent);
	}
	while (getline(infile, line)) {
		fileContent.append(line);
		if (infile.eof() == 0)
			fileContent.append("\n");
	}
	infile.close();
	return (fileContent);
}

bool	replaceSequence(	std::string& fileContent, 
							std::string const oldSequence, 
							std::string const newSequence) {

	size_t	startOfSequence = fileContent.find(oldSequence);

	if (oldSequence.empty() == 1) {
		std::cerr << "Second argument can't be empty" << std::endl;
		return (true);
	}
	while (startOfSequence < fileContent.size()) {
		fileContent.erase(startOfSequence, oldSequence.size());
		fileContent.insert(startOfSequence, newSequence);
		startOfSequence = fileContent.find(oldSequence, startOfSequence + newSequence.size());
	}
	return (false);
}

bool	createFileReplaced(std::string const fileContent, std::string fileName) {
	fileName.append(".replace");
	std::ofstream	outfile(fileName.c_str());

	if (outfile == 0) {
		std::cerr << "Error while creating file" << std::endl;
		return (true);
	}
	outfile << fileContent;
	return (false);
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "Bad number of arguments" << std::endl;
		return (1);
	}
	std::string	fileContent = getFileContent(av[1]);
	if (replaceSequence(fileContent, av[2], av[3]) || createFileReplaced(fileContent, av[1]))
		return (1);
	return (0);
}
