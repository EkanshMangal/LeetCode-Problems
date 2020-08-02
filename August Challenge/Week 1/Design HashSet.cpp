Problem Name:   Design HashSet
https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/549/week-1-august-1st-august-7th/3410/


class MyHashSet {
public:
        /** Initialize your data structure here. */
    
    bool array[1000001]={0};
    MyHashSet() {
        
        
        
    }
    
    void add(int key) {
        array[key]=1;
        
    }
    
    void remove(int key) {
        array[key]=0;
        
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return array[key];
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */