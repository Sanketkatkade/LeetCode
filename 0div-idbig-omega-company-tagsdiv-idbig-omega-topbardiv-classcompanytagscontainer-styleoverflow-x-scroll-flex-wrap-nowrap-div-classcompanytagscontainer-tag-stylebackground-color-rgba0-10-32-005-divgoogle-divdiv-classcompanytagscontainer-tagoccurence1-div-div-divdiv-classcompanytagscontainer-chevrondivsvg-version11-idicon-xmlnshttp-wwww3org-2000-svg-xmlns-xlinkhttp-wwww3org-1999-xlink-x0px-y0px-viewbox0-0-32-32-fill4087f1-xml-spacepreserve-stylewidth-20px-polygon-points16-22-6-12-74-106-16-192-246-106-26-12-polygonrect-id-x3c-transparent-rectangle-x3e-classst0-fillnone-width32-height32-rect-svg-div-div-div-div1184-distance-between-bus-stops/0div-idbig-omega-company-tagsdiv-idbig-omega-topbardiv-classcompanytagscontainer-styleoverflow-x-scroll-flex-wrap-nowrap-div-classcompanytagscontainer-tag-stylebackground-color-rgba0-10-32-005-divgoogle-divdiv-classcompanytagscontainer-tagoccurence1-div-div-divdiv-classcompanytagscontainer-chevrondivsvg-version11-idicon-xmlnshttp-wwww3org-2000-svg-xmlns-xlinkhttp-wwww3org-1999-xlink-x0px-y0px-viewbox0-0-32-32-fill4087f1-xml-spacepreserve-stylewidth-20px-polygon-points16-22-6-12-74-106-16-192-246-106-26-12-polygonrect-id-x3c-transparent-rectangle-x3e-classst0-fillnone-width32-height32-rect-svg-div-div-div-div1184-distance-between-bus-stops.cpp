class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n = distance.size();
        int startDist = 0;
        int endDist = 0;
        for(int i = start; i != destination; i = (i + 1) % n){
            startDist += distance[i];
        }

        for(int i = destination; i != start; i = (i + 1) % n){
            endDist += distance[i];
        }
        return min(startDist,endDist);
    }
};