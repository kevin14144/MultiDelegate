#ifndef ABSTRACTHUMAN_H
#define ABSTRACTHUMAN_H

#include<string>
using namespace std;

class AbstractHuman
{
public:

    AbstractHuman();


    AbstractHuman(string Name,int Weight,int Height):_Name(Name),_Weight(Weight),_Height(Height)
    {
        //Initial
    }

    //Abstract method implement
    ///
    /// \brief SetName
    /// \param value
    ///
    void virtual SetName(string value)
    {
        this->_Name = value;
    }
    ///
    /// \brief GetName
    /// \return
    ///
    string virtual GetName()
    {
        return this->_Name;
    }
    ///
    /// \brief SetWeight Set Weight
    /// \param value Weight
    ///
    void virtual SetWeight(int value)
    {
        this->_Weight = value;
    }
    ///
    /// \brief GetWeight
    /// \return Weight
    ///
    int virtual GetWeight()
    {
        return this->_Weight;
    }
    ///
    /// \brief SetHeight
    /// \param value Height
    ///
    void virtual SetHeight(int value)
    {
        this->_Height = value;
    }
    ///
    /// \brief GetHeight
    /// \return Height
    ///
    int virtual GetHeight()
    {
        return this->_Height;
    }
protected:
    string _Name;//Name
    int _Weight;//Weight
    int _Height;//Height
};

#endif // ABSTRACTHUMAN_H
