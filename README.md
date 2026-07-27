# Enum to String Mapping in C++

A simple C++ program demonstrating how to work with **enums**, **`std::array`**, and **`std::string_view`**.

## Concepts Covered

* Creating and using `enum`
* Mapping enum values to strings using a `switch` statement
* Using `std::array` for direct enum-to-string lookup
* `constexpr` functions
* Basic output with `std::cout`

## What the Program Does

The program defines a `Colour` enum with three values:

* Black
* Red
* Blue

It then prints the selected colour in two different ways:

1. Using a `constexpr` function with a `switch` statement.
2. Using a `std::array` where the enum value acts as the array index.

## Sample Output

```text
Your shirt is blue
Now from array
Your shirt is blue
```

## Why I Made This

This is part of my C++ learning journey. The goal of this program is to understand different approaches to converting enum values into human-readable strings while practicing modern C++ features.

## Future Improvements

* Add more colours.
* Make the enum-to-string conversion fully compile-time.
* Explore bidirectional mapping (string ↔ enum).
