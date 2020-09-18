#include <iostream>
#include <string>

int main()
{
    std::string Text{ "jrioewjmrt" };

    std::cout << "Text = " << Text << "\n";
    std::cout << "Length = " << Text.length() << "\n";
    std::cout << "First symbol = " << Text[0] << "\n";
    std::cout << "Last symbol = " << Text[Text.length() - 1] << "\n";
}
