#include <iostream>
#include <string_view>
# include <array>


enum Colour
{
    black,
    red,
    blue,
};

std::array Colour_array
{
    "balck",
    "red",
    "blue"
};

constexpr std::string_view enumColourName(Colour colour)
{
    switch (colour)
    {
    case black: return "black";
    case red:   return "red";
    case blue:  return "blue";
    default:    return "???";
    }
}

int main()
{
    constexpr Colour shirt{ blue };

    std::cout << "Your shirt is " << enumColourName(shirt) << '\n';
    std::cout<<"Now from array\n";
    std::cout<<"Your shirt is "<<Colour_array[shirt];

    return 0;
}
