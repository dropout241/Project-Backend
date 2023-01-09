#ifndef HTTP_LISTENER_H_
#define HTTP_LISTENER_H_

#include <httplib.h>
#include <string>

namespace project
{

class HttpListener
{
    public:

    [[nodiscard]] explicit HttpListener(const std::string& port);
};

}
#endif