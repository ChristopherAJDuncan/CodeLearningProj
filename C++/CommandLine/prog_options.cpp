#include <boost/program_options.hpp>
#include <iostream>

/* Working through: http://www.boost.org/doc/libs/1_61_0/doc/html/program_options/tutorial.html#idp308734800 */

int main(int argc, char **argv)
{

  int intt;
  double doubb;
  std::string strr;

  /*Generic command line options */
  namespace po = boost::program_options;
  po::options_description desc("Allowed Options:");
  desc.add_options()
    ("help", "produce help message")
    ("int, i", po::value<int>(&intt)->default_value(5), "Integer Value")
    ("doub, d", po::value<double>(&doubb)->default_value(10), "Double Value")
    ("str, s", po::value<std::string>(&strr)->default_value("Def"), "String value")
    ("string, ss", po::value<std::string>()->default_value("DEF"), "Optional String")
    ;

  /*Positional Options - those cna be used relative to position only (no need to put in precursor values)*/
  po::positional_options_description pos;
  pos.add("Pos", -1); //Q: What is second option here?

  /* Read in variables */
  po::variables_map vm;
  po::store(po::command_line_parser(argc, argv).options(desc).positional(pos).run(), vm);
  po::notify(vm);

  if(vm.count("help")){
    std::cout << desc << "\n";
    return 1;
  }

  std::cout << "Stored options: " << strr << " " << intt << " " << doubb << " " << vm["string"].as<std::string>() <<std::endl;


}
