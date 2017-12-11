#coding=utf-8

from transitions import Machine
# from transitions import
import random

class SuperHero():

    states = ['asleep', 'hanging out', 'hungry', 'sweaty', 'saving the world']
    def __init__(self, name):

        self.name = name

        self.kittens_rescued = 0
        self.machine = Machine(model=self, states=SuperHero.states, initial='asleep')

        self.machine.add_transition(trigger='wake_up', source='asleep', dest='hanging out')
        self.machine.add_transition('work_out', 'hanging out', 'hungry')
        self.machine.add_transition('eat', 'hungry', 'hanging out')
        self.machine.add_transition('distress_call', '*', 'saving the world',\
                                    before='change_into_super_secret_costume')

        self.machine.add_transition('complete_mission', 'saving the world', 'sweaty', \
                                    after='update_journal')

        self.machine.add_transition('clean_up', 'sweaty', 'asleep', conditions=['is_exhausted'])
        self.machine.add_transition('clean_up', 'sweaty', 'hanging out')

        self.machine.add_transition('nap', '*', 'asleep')

    def update_journal(self):
        self.kittens_rescued += 1

    def is_exhausted(self):
        return random.random() < 0.5

    def change_into_super_secret_costume(self):
        print('beauty, eh?')



if __name__ == '__main__':
    batman = SuperHero('batman')
    print batman.state

    batman.wake_up()
    print batman.state

    batman.nap()
    print batman.state

    batman.wake_up()
    batman.work_out()
    print batman.state

    print batman.kittens_rescued

    batman.distress_call()
    print batman.state

    batman.complete_mission()
    print batman.state

    batman.clean_up()
    print batman.state

    print batman.kittens_rescued

