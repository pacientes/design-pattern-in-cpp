#ifndef __FILE_SYSTEM_H__
#define __FILE_SYSTEM_H__

#include <string>

class FileSystem
{
public:
    void setName(const std::string &name);

    const std::string &getName() const;

    virtual void print(const int index) = 0;

private:
    std::string m_name;
};

#endif // __FILE_SYSTEM_H__
