import QtQuick 2.15
import QtQuick.Controls
import "Lib/Pages"

Page {
    id:test

    property int test_width: 1000
    property int test_height: 400

    // width: dashboard.board_width
    // height: dashboard.board_height

    // title: qsTr("Home")
    // Image {
    //     id: bg_image
    //     source: "qrc:/Artboard 1.png"
    //     fillMode: Image.Stretch
    //     anchors.fill: parent
    // }

    Label {
        color: "#f91b02"
        text: qsTr("You are on the test page.")
        font.pointSize: 15
        font.bold: true
        styleColor: "#f95030"
        anchors.centerIn: parent
    }


    Button {
        text: "Go to Detail Page"
        anchors.centerIn: parent
        onClicked: {
            // Pass properties to the Dashboard when pushing
            // stackView.push({
            //                    // item:"qrc:/
            //     // item: Qt.resolvedUrl("Lib/Pages/Dashboard.qml") ,
            //                    item: Qt.resolvedUrl("Ano.qml"),
            //     properties: {
            //         "board_width": test.test_width, // The key must match the property name
            //         "board_height": test.test_height
            //     }
            // });

              stackView.push(Qt.resolvedUrl("Lib/Pages/Dashboard.qml"), {  "board_width": test.test_width, // The key must match the property name
                                          "board_height": test.test_height})
        }
    }



}
