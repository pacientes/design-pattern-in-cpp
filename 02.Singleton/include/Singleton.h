#ifndef __SINGLETON_H__
#define __SINGLETON_H__

class Singleton
{
public:
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;

    static Singleton &getInstance();

    void setId(const int id);

    int getId() const;

private:
    Singleton();

    int m_id;
};

#endif // __SINGLETON_H__
