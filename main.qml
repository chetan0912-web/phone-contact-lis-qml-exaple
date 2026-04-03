import QtQuick

Window {
    width: 400
    height: 800
    color: "silver"
    visible: true
    title: qsTr("Hello World")

    Column{

        anchors.fill: parent
        anchors.topMargin: 5
        spacing: 5

        Rectangle{
            id: searchField
            width: parent.width-20
            radius: 10
            height: parent.height/30
            anchors.left: parent.left

            anchors.leftMargin: 10
            border.color: "black"
            border.width: 1

            TextEdit{
                id: searchBox
                anchors.verticalCenter: searchField.verticalCenter
                anchors.fill: parent
                text: "    = Search Contacts "
            }
            MouseArea{
                anchors.fill: parent
                onClicked: {

                }
            }

        }
        ContactRectangle{
            id: createNewContact
            contactText: "+ Create New Contact"
            showIcon: false
        }

        ContactRectangle{
            id: c1
            contactText: contactList.getContacts(0)
        }

        ContactRectangle {
            id: c2
            contactText: contactList.getContacts(1)
        }

        ContactRectangle{
            id: c3
            contactText: contactList.getContacts(2)
        }

        ContactRectangle{
            id: c4
            contactText: contactList.getContacts(3)
        }

        ContactRectangle {
            id: c5
            contactText: contactList.getContacts(4)
        }

        ContactRectangle{
            id: c6
            contactText: contactList.getContacts(5)
        }

        ContactRectangle{
            id: c7
            contactText: contactList.getContacts(6)
        }
        ContactRectangle {
            id: c8
            contactText: contactList.getContacts(7)
        }
        ContactRectangle {
            id: c9
            contactText: contactList.getContacts(8)
        }
        ContactRectangle {
            id: c10
            contactText: contactList.getContacts(9)
        }
        ContactRectangle {
            id: c11
            contactText: contactList.getContacts(10)
        }
        ContactRectangle {
            id: c12
            contactText: contactList.getContacts(11)
        }
    }

}
