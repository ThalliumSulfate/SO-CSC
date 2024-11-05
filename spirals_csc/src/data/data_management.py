import os
from os import walk
from datafiles import Missing

from spirals_csc.src.modules.character import Character

characterList = []

def hasData():
    data = False
    path = os.path.abspath("./src/player_data")

    if not os.path.isdir(path):
        os.mkdir(path)

    filenames = next(walk(path), (None, None, []))[2]

    print(filenames)

    if not len(filenames) == 0:
        data = True
        characterList.clear()
        for fileName in filenames:
            restored = Character(fileName.replace(".yml", ""), Missing)
            characterList.append(restored)

    return data