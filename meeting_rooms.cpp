/* RUn time 16ms and beats 41% CPP Submissions */
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:

    void print_intervals(vector<Interval> v){
        for(int i = 0; i < v.size(); i++){
            cout << "Start: " << v[i].start << " End: " << v[i].end << endl;
        }
    }

    static bool cmp(Interval i1, Interval i2){

        return (i1.start < i2.start);

    }

    bool canAttendMeetings(vector<Interval>& intervals) {

        int n = intervals.size();

        if(n == 0){
            return true;
        }

        sort(intervals.begin(), intervals.end(), cmp);
        //print_intervals(intervals);

        stack<Interval> s;
        s.push(intervals[0]);

        for(int i = 1; i < n; i++){
            Interval tmp = s.top();

            if(tmp.end <= intervals[i].start){
               // cout << "Coming" <<  endl;
                s.push(intervals[i]);
            }

            else if(tmp.end > intervals[i].start){
                tmp.start = min(tmp.start, intervals[i].start);
                tmp.end = max(tmp.end, intervals[i].end);
                s.pop();
                s.push(tmp);
            }

        }

        return (s.size() == n);

    }
};
