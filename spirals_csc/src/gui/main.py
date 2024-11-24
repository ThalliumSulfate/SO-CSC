import sys

from PyQt6.QtCore import *
from PyQt6.QtWidgets import *

from src.data.data_management import characterList, hasData, ancestryList
from src.modules import character
from src.modules.character import Character


class App(QApplication):
    def __init__(self):
        super().__init__(sys.argv)
        self.geometry = QApplication.primaryScreen().geometry()
        self.window = (MainWindow(self.geometry))

    def setGeometry(self, geometry):
        self.geometry = geometry
        self.window.setGeometry(self.geometry)

    def run(self):
        self.window.initUI()
        self.window.show()

        self.exec()

class MainWindow(QWidget):
    def __init__(self, geometry):
        super().__init__()
        self.setGeometry(geometry)
        self.setWindowTitle('Spirals CSC')

    def initUI(self):
        box = QGridLayout(self)
        buttonBox = QHBoxLayout()

        w1 = QWidget()

        list = QListWidget(parent=self)
        box.addWidget(list, 1, 1)

        if not hasData():
            noCharacters = QLabel("No characters created", self)
            noCharacters.setAlignment(Qt.AlignmentFlag.AlignCenter)
            box.addWidget(noCharacters, 1, 1)
        else:
            list.clear()
            for c in characterList:
                list.addItem(c.__str__())

        createButton = QPushButton('Create Character', self)
        createButton.clicked.connect(self.create_character)
        createButton.setFixedWidth(150)

        buttonBox.addWidget(createButton)
        buttonBox.setAlignment(Qt.AlignmentFlag.AlignCenter)

        box.addLayout(buttonBox, 2, 1)
        box.setAlignment(Qt.AlignmentFlag.AlignCenter)

        self.setLayout(box)
        self.show()


    def create_character(self):
        self.widget = CreateWindow(self.geometry())
        self.close()

class CreateWindow(QWidget):
    def __init__(self, geometry):
        super().__init__()
        self.ancestry = None
        self.setWindowTitle('Create Character')
        self.setGeometry(geometry)
        self.initUI()

    def initUI(self):
        def set():
            self.character = Character(name=name.text(), ancestry=self.ancestry)
            self.submit()
        def on_clicked(item):
            text = item.text().split(':')
            print(text[0])
            self.ancestry = text[0]

        box = QVBoxLayout()
        buttonBox = QHBoxLayout()

        save = QPushButton('Save', self)
        save.clicked.connect(set)
        save.setFixedWidth(60)
        buttonBox.addWidget(save)
        buttonBox.setAlignment(Qt.AlignmentFlag.AlignCenter)

        nameBox = QHBoxLayout()
        nameLabel = QLabel('Name:', self)
        nameLabel.setFixedWidth(50)
        name = QLineEdit(parent=self)
        name.setFixedWidth(450)

        list = QListWidget(parent=self)

        for a in ancestryList:
            list.addItem(a.__str__())

        list.itemClicked.connect(on_clicked)

        nameBox.addWidget(nameLabel)
        nameBox.addWidget(name)
        nameBox.setAlignment(Qt.AlignmentFlag.AlignLeft)

        box.addLayout(nameBox)
        box.addWidget(list)
        box.addLayout(buttonBox)
        box.setAlignment(Qt.AlignmentFlag.AlignHCenter)
        box.setAlignment(Qt.AlignmentFlag.AlignTop)


        self.setLayout(box)
        self.show()

    def submit(self):
        characterList.append(character)
        self.widget = MainWindow(self.geometry())
        self.widget.initUI()
        self.close()