class Solution {
    public int elevatorRequests(int n, int[] requests) {
        int timer=0;
        int cur_floor=0;
        int res=requests.length;
        for(int i=0;i<res;i++)
        {   
            int difference=Math.abs(requests[i]-cur_floor);
            cur_floor=requests[i];
            timer+=difference;
        }
        return timer;
    }
    
}