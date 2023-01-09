#include <iostream>
#include <boost/filesystem.hpp>

#include "HttpListener.h"

int main(int argc, char** argv)
{
    std::cout << "Setting up Http Connections..." << std::endl;

    auto temp = project::HttpListener("hello");
    // TODO, need to have signal handlers especially if im gonna be polling
    std::cout << "Terminating Application" << std::endl;
    return 0;
}