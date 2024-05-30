#include "FileHandler.hpp"
#include <fstream>
#include <iostream>

FileHandler::FileHandler(const std::string &filename, const std::string &s1, const std::string &s2)
    : filename(filename), s1(s1), s2(s2) {}

void FileHandler::processFile() const {
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile) {
        std::cerr << "Error: Unable to create file " << outputFilename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        outputFile << replaceOccurrences(line) << std::endl;
    }

    inputFile.close();
    outputFile.close();
}

std::string FileHandler::replaceOccurrences(const std::string &line) const {
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(s1, pos)) != std::string::npos) {
        result.append(line, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(line, pos, std::string::npos);
    return result;
}
