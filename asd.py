import simpy
import random
import statistics
wait_times = []
 
class Theater(object):
    def __init__(self,env,num_cashiers):
        self.env = env
        self.cashier = simpy.Resource(env, num_cashiers)

    