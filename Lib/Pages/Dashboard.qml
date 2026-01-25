import QtQuick 2.15
import QtQuick.Controls

Page {
    id:dashboard

    width: 600
    height: 400

    // title: qsTr("Home")

    Label {
        color: "#f91b02"
        text: qsTr("You are on the home page.")
        font.pointSize: 15
        font.bold: true
        styleColor: "#f95030"
        anchors.centerIn: parent
    }

}
