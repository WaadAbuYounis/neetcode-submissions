class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        length = len(position)
        if length == 1:
            return 1
        sortedPos = [(position,car) for car,position in enumerate(position)]
        sortedPos.sort(reverse= True)
        fleetStack = []
        position,car = sortedPos[0]
        time = (target - position) / (speed[car])
        fleetStack.append(time)

        for i in range(1,length):
            position,car = sortedPos[i] # behind
            behindTime = (target - position) / (speed[car]) 
            if fleetStack[-1] < behindTime: # the car doesnt catch up with the next fleet
                fleetStack.append(behindTime)
        return len(fleetStack)

            


        