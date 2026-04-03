import QtQuick
// import QtQuick.Controls

Rectangle{
    id: contact
    width: parent.width-20
    height: parent.height/15
    radius: 10
    property alias contactText: contactName.text
    property bool showIcon: true
    anchors.left: parent.left
    anchors.leftMargin: 10
    border.color: "black"
    border.width: 1
    Row{
        anchors.left: contact.left
        anchors.leftMargin: 10
        anchors.verticalCenter: contact.verticalCenter

        spacing: 20
        Rectangle{
            id: icon
            width: height
            height: contact.height -10
            radius: width/2
            color: "silver"
            border.color: "black"
            border.width: 1
            visible: contact.showIcon
            Text {
                id: iconText
                text: contactName.text[0]
                anchors.centerIn: parent

            }
        }
        Text{
            id: contactName
            anchors.verticalCenter: parent.verticalCenter
            font.pixelSize: 15
            font.bold: true

        }

        }
    }
