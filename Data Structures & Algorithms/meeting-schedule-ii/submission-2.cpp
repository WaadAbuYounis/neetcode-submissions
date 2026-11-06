/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int> startTimes;
        vector<int> endTimes;
        for(auto& inter : intervals){
            startTimes.push_back(inter.start);
            endTimes.push_back(inter.end);
        }
        sort(startTimes.begin(),startTimes.end());
        sort(endTimes.begin(),endTimes.end());

        int counter = 0, i = 0 , j = 0, maxx = 0;
        while(i < intervals.size() && j < intervals.size()){
            if(startTimes[i] < endTimes[j]){
                i++;
                counter++;
                maxx = max(counter,maxx);
            }
            else{
                j++;
                counter--;
            }
        }
        return maxx;
        
    }
};
