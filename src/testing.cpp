#include <iostream>
#include <httplib.h>

void listen()
    {
        // HTTP
        httplib::Server svr;

        svr.Get("/hi",
        [](const httplib::Request &, httplib::Response &res)
        {
            res.set_content("Hello World!", "text/plain");
        }
        );

        svr.listen("0.0.0.0", 8080);
    }

int main(int argc, char** argv)
{
    std::cout << "Setting up Http Connections..." << std::endl;

    listen();
    // TODO, need to have signal handlers especially if im gonna be polling
    std::cout << "Terminating Application" << std::endl;
    return 0;
}