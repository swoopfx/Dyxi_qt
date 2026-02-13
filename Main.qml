import QtQuick
import QtQuick.Controls
import QtQuick.Window
import "Lib"
import "Lib/Pages"

// Item {
//     id: main_root
//     width: 640
//     height: 480
//     visible: true
    // title: qsTr("Hello World")

    Window {
        id: main_window
        visible: true
        width: 640
        height: 480
        // title: qsTr("Stack")
        // visibility: Window.Maximized


        property int screen_maximumHeight: 768
        property int screen_maximumWidth: 1024
        readonly property real aspectRatio: 4.0/3.0

        // maximumHeight: Screen.desktopAvailaleHeight
        // maximumWidth: Screen.desktopAvailaleWidth

        minimumHeight: main_window.screen_maximumHeight
        minimumWidth: main_window.screen_maximumWidth


        onWidthChanged: {
            if(visibility === Window.Windowed){
                height = width / aspectRatio
            }
        }

        onHeightChanged: {
            if(visibility === Window.Windowed){
                width = height * aspectRatio
            }
        }


        Image {
            id: bg_image
            source: "qrc:/Artboard 1.png"
            fillMode: Image.Stretch
            anchors.fill: parent
        }

        StackView {
            id: stackView
            initialItem: "Test.qml"
            anchors.fill: parent
            // Component{
                // id: initialPage
                // Page {
                //       id: mainPage
                //       title: "Main Page"

                //       Button {
                //           text: "Go to Detail Page"
                //           anchors.centerIn: parent
                //           onClicked: {
                //               // Pass properties to the Dashboard when pushing
                //               stackView.push({
                //                                  // item:Dashboard
                //                   item: "Lib/Pages/Dashboard.qml",

                //                   properties: {
                //                       "board_width": main_window.minimumWidth, // The key must match the property name
                //                       "board_height": main_window.minimumHeight
                //                   }
                //               });
                //           }
                //       }
                //   }

            // }
        }
    }


   // Rect


// }
