#include <filesystem>
#include <iostream>
#include <string>

#include "one/two/filesystem.hpp"

namespace one::two {
    
void create_directories(const std::string path) {
    std::filesystem::path path_path{path};
    std::filesystem::create_directories(path_path);
    
    std::cout << path_path.string() << "\n";
}


}