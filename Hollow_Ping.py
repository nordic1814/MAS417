import numpy as np
import requests
import API_mony_mock as mony

class Main_Parent:
    def __init__(self, joke):
        self.joke = joke
        #self.APImony = API_mony


    def __str__(self):
        return '\n Joke fore Chuck: ' + self.joke

class Good_Stuck(Main_Parent):
    pass

Chuck_request = requests.get("https://api.chucknorris.io/jokes/random")
ChuckJoke = Chuck_request.json()
Chuck = ChuckJoke["value"]
CN_Joke = Good_Stuck(Chuck)

noe = type(Chuck)
#print(noe)
GetData = mony.changeme()


