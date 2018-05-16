# Definition for an interval.
# class Interval:
#     def __init__(self, s=0, e=0):
#         self.start = s
#         self.end = e

class Solution:
    # @param intervals, a list of Intervals
    # @param new_interval, a Interval
    # @return a list of Interval
    def insert(self, intervals, new_interval):
        ans = []
        if new_interval.start > new_interval.end:
            temp = new_interval.start
            new_interval.start = new_interval.end
            new_interval.end = temp
        i = 0
        while i < len(intervals):
            if new_interval.start > intervals[i].end and new_interval.start > intervals[i].start:
                ans.append(intervals[i])
                i += 1
            else:
                break
        interv = Interval()
        if i != len(intervals) and intervals[i].start < new_interval.start:
            interv.start = intervals[i].start
        elif i != len(intervals):
            interv.start = new_interval.start
        if i == len(intervals):
            interv.start = new_interval.start
            interv.end = new_interval.end
        ind = 0
        while i < len(intervals):
            if new_interval.end >= intervals[i].start and new_interval.end < intervals[i].end:
                interv.end = intervals[i].end
                i += 1
                ind = 1
                break
            elif new_interval.end < intervals[i].start:
                interv.end = new_interval.end
                ind = 1
                break
            i += 1
        if ind == 0:
            interv.end = new_interval.end
        ans.append(interv)
        while i < len(intervals):
            ans.append(intervals[i])
            i += 1
        return ans
