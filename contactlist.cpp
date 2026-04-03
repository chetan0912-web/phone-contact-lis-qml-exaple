#include "contactlist.h"


ContactList::ContactList(QObject *parent):QObject(parent)
{
    m_contactList.push_back("Chetan M S");
    m_contactList.push_back("yeshu H");
    m_contactList.push_back("Rohith Kumar");
    m_contactList.push_back("Anil Kumar");
    m_contactList.push_back("Manjunath H");
    m_contactList.push_back("Suresh B");
    m_contactList.push_back("Ramesh K");
    m_contactList.push_back("Naveen P");
    m_contactList.push_back("Praveen S");
    m_contactList.push_back("Kiran Kumar");
    m_contactList.push_back("Mahesh R");
    m_contactList.push_back("Vijay Kumar");
    m_contactList.push_back("Arjun N");/*
    m_contactList.push_back("Lokesh M");
    m_contactList.push_back("Deepak S");
    m_contactList.push_back("Harish K");
    m_contactList.push_back("Darshan P");
    m_contactList.push_back("Rakesh N");
    m_contactList.push_back("Sunil Kumar");
    m_contactList.push_back("Vinay K");
    m_contactList.push_back("Girish B");
    m_contactList.push_back("Sandeep R");
    m_contactList.push_back("Santosh K");
    m_contactList.push_back("Yogesh M");
    m_contactList.push_back("Chandan S");
    m_contactList.push_back("Raghu N");
    m_contactList.push_back("Abhishek R");
    m_contactList.push_back("Pavan Kumar");
    m_contactList.push_back("Shashank H");
    m_contactList.push_back("Tejas M");
    m_contactList.push_back("Aditya S");
    m_contactList.push_back("Rahul K");
    m_contactList.push_back("Siddharth N");
    m_contactList.push_back("Varun R");
    m_contactList.push_back("Akash M");
    m_contactList.push_back("Nithin Kumar");
    m_contactList.push_back("Ajay S");
    m_contactList.push_back("Karthik B");
    m_contactList.push_back("Mohan Kumar");
    m_contactList.push_back("Prakash R");
    m_contactList.push_back("Srinivas K");
    m_contactList.push_back("Umesh B");
    m_contactList.push_back("Ravi Kumar");
    m_contactList.push_back("Jagadeesh M");
    m_contactList.push_back("Dinesh R");
    m_contactList.push_back("Krishna N");
    m_contactList.push_back("Shivakumar H");
    m_contactList.push_back("Ganesh K");
    m_contactList.push_back("Shankar R");
    m_contactList.push_back("Vikram S");*/

}

// QList<QString> ContactList::contacts() const
// {
//     return m_contactList;
// }

QString ContactList::getContacts(int index) const
{
    return m_contactList.at(index);
}
