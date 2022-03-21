#include <string>
#include <iostream>
 
int main()
{
  std::string foo("quuuux");
  char bar[3]{};
  foo.copy(bar, sizeof bar);
  std::cout << bar << '\n';
}