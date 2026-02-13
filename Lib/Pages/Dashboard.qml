import QtQuick 2.15
import QtQuick.Controls

Page {
    id:dashboard

    property int board_width: 600
    property int board_height: 400

    width: dashboard.board_width
    height: dashboard.board_height

    // title: qsTr("Home")
    Image {
        id: bg_image
        source: "qrc:/Artboard 1.png"
        fillMode: Image.Stretch
        anchors.fill: parent
    }

    Label {
        color: "#f91b02"
        text: qsTr("You are on the Dashboard page.")
        font.pointSize: 15
        font.bold: true
        styleColor: "#f95030"
        anchors.centerIn: parent
    }

}
