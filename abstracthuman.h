#ifndef ABSTRACTHUMAN_H
#define ABSTRACTHUMAN_H

#include<string>
using namespace std;
class AbstractHuman
{
public:
    AbstractHuman();
    //Abstract method implement
    ///
    /// \brief SetName
    /// \param value
    ///
    void virtual SetName(string value)
    {
        this->Name = value;
    }
    ///
    /// \brief GetName
    /// \return
    ///
    string virtual GetName()
    {
        return this->Name;
    }
    ///
    /// \brief SetWeight Set Weight
    /// \param value Weight
    ///
    void virtual SetWeight(int value)
    {
        this->Weight = value;
    }
    ///
    /// \brief GetWeight
    /// \return Weight
    ///
    int virtual GetWeight()
    {
        return this->Weight;
    }
    ///
    /// \brief SetHeight
    /// \param value Height
    ///
    void virtual SetHeight(int value)
    {
        this->Height = value;
    }
    ///
    /// \brief GetHeight
    /// \return Height
    ///
    int virtual GetHeight()
    {
        return this->Height;
    }
protected:
    string Name = "";//Name
    int Weight = 0;//Weight
    int Height = 0;//Height
};

#endif // ABSTRACTHUMAN_H
