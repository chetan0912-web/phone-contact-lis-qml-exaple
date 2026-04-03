#ifndef CONTACTLIST_H
#define CONTACTLIST_H

#include <QObject>
#include <QList>
#include <QString>

class ContactList : public QObject
{
    Q_OBJECT
    // Q_PROPERTY(QList<QString> contactdata READ contacts NOTIFY contactsChanged)

public:
    explicit ContactList(QObject *parent = nullptr);

    // QList<QString> contacts() const;
    Q_INVOKABLE QString getContacts(int index) const;


signals:
    void contactsChanged();

private:
    QList<QString> m_contactList;
};

#endif
