import QtQuick 2.15
import QtQuick.Controls

Item {

    id:draw

    property alias name: drawer

    Drawer {
        id: drawer

        width: window.width * 0.66
        height: window.height

        Column {
            anchors.fill: parent

            ItemDelegate {
                text: qsTr("Page 1")
                width: parent.width
                onClicked: {
                    stackView.push("Pages/Dashboard.qml")
                    drawer.close()
                }
            }
            ItemDelegate {
                text: qsTr("Page 2")
                width: parent.width
                onClicked: {
                    stackView.push("Pages/Welcome.qml")
                    drawer.close()
                }
            }
            ItemDelegate {
                text: qsTr("Page 3")
                width: parent.width
                onClicked: {
                    stackView.push("Pages/ScratchPad.qml")
                    drawer.close()
                }
            }
        }
    }

}
