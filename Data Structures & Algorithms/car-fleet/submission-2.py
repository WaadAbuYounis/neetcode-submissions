class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        length = len(position)
        if length == 1:
            return 1
        sortedPos = [(position,car) for car,position in enumerate(position)]
        sortedPos.sort(reverse= True)
        fleetStack = []
        for i in range(1,length):

            position,car = sortedPos[i] # behind
            if not fleetStack:
                nxtPosition,nxtCar = sortedPos[i-1] #front
                behindTime = (target - position) / (speed[car]) 
                time = (target - nxtPosition) / speed[nxtCar]
                if time >= behindTime:
                    #meaning that they catch up before getting to target 
                    fleetStack.append(time)
                else:
                    fleetStack.append(time)
                    fleetStack.append(behindTime)
            else:
                behindTime = (target - position) / (speed[car]) 
                if fleetStack[-1] < behindTime: # the car doesnt catch up with the next fleet
                    fleetStack.append(behindTime)
        return len(fleetStack)


            
            
           
           
        return setNum
            


        