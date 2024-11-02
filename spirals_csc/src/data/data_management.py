import os

def hasData():
    data = False
    path = os.path.abspath("./src/player_data")

    directory = os.listdir(path)

    if not len(directory) == 0:
        data = True

    return data