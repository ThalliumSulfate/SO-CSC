import os
from datafiles import datafile

from path import appPath

newPath = appPath + '/characters'

@datafile(newPath + '/{self.key}.yml')
class Character:
    key: str
    name: str
    ancestry: str
    def __init__(self, key='', name='', ancestry=''):
        self.name = name
        self.ancestry = ancestry
        if key == '':
            temp = name.replace(' ', '_')
            taken = os.path.isfile(newPath + f"/{temp}.yml")
            i = 0
            while True:
                if taken or os.path.isfile(os.path.isfile(newPath + f"/{temp}_{1}.yml")):
                    i += 1
                    taken = os.path.isfile(newPath + f"/{temp}_{i}.yml")
                else:
                    break
            if i == 0:
                self.key = temp
            else:
                self.key = f"{temp}_{i}"
        else:
            self.key = key



    def __str__(self):
        return f'name: {self.name} \nancestry: {self.ancestry}'


    def setName(self, name):
        self.key = name.replace(" ", "_")
        self.name = name