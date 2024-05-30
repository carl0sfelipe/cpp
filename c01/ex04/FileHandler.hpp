#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include <string>

class FileHandler {
public:
    FileHandler(const std::string &filename, const std::string &s1, const std::string &s2);
    void processFile() const;

private:
    std::string filename;
    std::string s1;
    std::string s2;

    std::string replaceOccurrences(const std::string &line) const;
};

#endif
