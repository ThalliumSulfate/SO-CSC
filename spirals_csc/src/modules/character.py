import os

from datafiles import datafile

@datafile('../player_data/{self.key}.yml')
class Character:
    key: str
    name: str
    def __init__(self, key='', name=''):
        self.name = name
        if key == '':
            temp = name.replace(' ', '_')
            path = os.path.abspath(f"./src/player_data")
            taken = os.path.isfile(path + f"/{temp}.yml")
            i = 0
            while True:
                if taken or os.path.isfile(os.path.isfile(path + f"/{temp}_{1}.yml")):
                    i += 1
                    taken = os.path.isfile(path + f"/{temp}_{i}.yml")
                else:
                    break
            if i == 0:
                self.key = temp
            else:
                self.key = f"{temp}_{i}"
        else:
            self.key = key



    def __str__(self):
        return "name: " + self.name


    def setName(self, name):
        self.key = name.replace(" ", "_")
        self.name = name