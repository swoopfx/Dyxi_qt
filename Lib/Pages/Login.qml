import QtQuick
// import QtGraphicalEffects

Item {
    property string placeholder: "ID"
    property bool passwordMaskEnabled: false
    property string passwordMask: "*"

    // property alias checked: checkBox.checked
    property alias text: textBox.text
    property alias fontColor: textBox.color
    property alias font: textBox.font

    id: root



    Rectangle {
        id: rect
        anchors.fill: parent
        antialiasing: true
        // color: "white"

        Text {
            id: placeholderLabel
            anchors.centerIn: parent
            horizontalAlignment: Text.Center
            text: placeholder
            font {
                pixelSize: textBox.font.pixelSize
            }
            opacity: 0.5

            Behavior on opacity { NumberAnimation { duration: 250 } }
        }

        TextInput {
            id: textBox
            // width: parent.width - checkBox.width * 2
            height: parent.height
            anchors.centerIn: parent
            clip: true
            // focus: root.focus
            font {
                pixelSize: height * 0.5
            }
            verticalAlignment: TextInput.AlignVCenter
            horizontalAlignment: TextInput.AlignHCenter
            onTextChanged: placeholderLabel.opacity = text.length > 0 ? 0 : 0.5;
            echoMode: passwordMaskEnabled ? TextInput.Password : TextInput.Normal
            passwordCharacter: passwordMask
            color: "#34495e"
        }

        // LoginCheckBox {
        //     id: checkBox
        //     longLineWidth: 15
        //     shortLineWidth: 6
        //     lineThickness: 4
        //     anchors {
        //         right: parent.right
        //         rightMargin: checkBox.width * 1
        //         verticalCenter: parent.verticalCenter
        //     }
        // }
    }
}
