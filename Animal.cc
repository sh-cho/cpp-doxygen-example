#include "Animal.h"

#include <iostream>

namespace vince {
    std::string Cat::meow() {
        return "meow meow";
    }

    std::string Cat::do_something() {
        return meow();
    }

    void Cat::eat_something(int amount) {
        std::cout << "cat eats " << amount << " fishes" << std::endl;
    }

    std::string Dog::bark() {
        return "bow wow";
    }

    std::string Dog::do_something() {
        return bark();
    }

    void Dog::eat_something(int amount) {
        std::cout << "dog eats " << amount << " bones" << std::endl;
    }
} // vince
