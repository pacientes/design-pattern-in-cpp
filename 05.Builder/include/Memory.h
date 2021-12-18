#ifndef __MEMORY_H__
#define __MEMORY_H__

class Memory
{
public:
    Memory(const int size);

    void setSize(const int size);

    int getSize() const;

private:
    int m_size;
};

#endif // __MEMORY_H__
