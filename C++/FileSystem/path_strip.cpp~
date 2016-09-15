#include <boost/filesystem.hpp>
#include <boost/filesystem/path.hpp>
#include <iostream>

int main(){

  std::string dir = "/THIS/IS/A/DIR";

  boost::filesystem::path pth(dir);

  std::string sdir = pth.parent_path().string();

  std::cout << sdir << " ::: " << std::endl;

}
