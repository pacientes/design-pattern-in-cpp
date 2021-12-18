#ifndef __STORAGE_H__
#define __STORAGE_H__

class Storage
{
public:
    Storage(const int size);

    void setSize(const int size);

    int getSize() const;

private:
    int m_size;
};

#endif // __STORAGE_H__
