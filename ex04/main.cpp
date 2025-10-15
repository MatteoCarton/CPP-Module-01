#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

std::string readFile(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open()) {
        std::cout << "Error, the file doesn't exist or it is not accessible." << std::endl;
        exit(1);
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    file.close();

    return buffer.str();
}

std::string replaceAll(const std::string& content, const std::string& s1, const std::string& s2)
{
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = content.find(s1, pos)) != std::string::npos) {
        result += content.substr(pos, found - pos);
        result += s2;
        pos = found + s1.length();
    }
    result += content.substr(pos);

    return result;
}

void writeFile(const std::string& filename, const std::string& content)
{
    std::ofstream file(filename.c_str());
    if (!file.is_open()) {
        std::cout << "Error: Cannot create output file." << std::endl;
        exit(1);
    }

    file << content;
    file.close();
}

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cout << "Need three parameters in the following order: a filename and two strings, s1 and s2." << std::endl;
        return (1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cout << "Error: s1 cannot be empty." << std::endl;
        return (1);
    }

    std::string content = readFile(filename);
    std::string result = replaceAll(content, s1, s2);

    std::string outputFilename = filename + ".replace";
    writeFile(outputFilename, result);

    std::cout << "File created: " << outputFilename << std::endl;
    return (0);
}