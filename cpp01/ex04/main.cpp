#include <iostream>
#include <fstream>

std::string replace(std::string temp, std::string s1, std::string s2)
{
    int find_idx = 0;
    while (1)
    {
        find_idx = temp.find(s1);
        if (find_idx == (int)std::string::npos)
            break;
        temp.erase(find_idx, s1.length());
        temp.insert(find_idx, s2);
    }
    return (temp);
}

int main(int argc, char *argv[])
{
    if (argc != 4){
        std::cout << "value Error: filename, word1, word2" << std::endl;
        return(-1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream fin(filename);
    std::string temp;
    fin >> temp;
    temp = replace(temp, s1, s2);
    std::ofstream fon(filename + ".replace");
    fon << temp;
    return (0);
}
