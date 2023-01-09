#include <iostream>

#include "HttpListener.h"

namespace project
{
    HttpListener::HttpListener(const std::string& arg)
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
}