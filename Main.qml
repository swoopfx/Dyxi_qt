import QtQuick
import QtQuick.Controls
import QtQuick.Window
import "Lib"
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
        Board{


        }

        Image {
            id: bg_image
            source: "qrc:/Artboard 1.png"
            fillMode: Image.Stretch
            anchors.fill: parent
        }
    }


   // Rect


// }
