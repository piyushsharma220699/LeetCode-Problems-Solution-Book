/*
Link of question: https://leetcode.com/problems/lru-cache/
Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

Implement the LRUCache class:

LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
int get(int key) Return the value of the key if the key exists, otherwise return -1.
void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key.
The functions get and put must each run in O(1) average time complexity.
*/
class LRUCache {
    
// We can use stl container list as a double
// ended queue to store the cache keys, with
// the descending time of reference from front
// to back and a set container to check presence
// of a key. But to fetch the address of the key
// in the list using find(), it takes O(N) time.
// This can be optimized by storing a reference
//     (iterator) to each key in a hash map.
public:
        unordered_map<int,pair<list<int>::iterator,int> >dictionary;/*map of key, {iterator for position of value, value} */
        list<int>cache;
        int capacity;
         
    LRUCache(int capacity) {
            this->capacity=capacity;
    }
    
    int get(int key) {
        if(dictionary.find(key)==dictionary.end())return -1;
        cache.erase(dictionary[key].first);
        cache.push_front(key);
        dictionary[key].first=cache.begin();
        return dictionary[key].second;
    }
    
    void put(int key, int value) {
        if(dictionary.find(key)==dictionary.end()){
            if(cache.size()==capacity){
                int last=cache.back();
                cache.pop_back();
                dictionary.erase(last);
            }
        }
        else{
            cache.erase(dictionary[key].first);
        }
        cache.push_front(key);
        dictionary[key]={cache.begin(),value};
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

/*
Sample Input: 
["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]

Sample Output:
[null, null, null, 1, null, -1, null, -1, 3, 4]

Explanation
LRUCache lRUCache = new LRUCache(2);
lRUCache.put(1, 1); // cache is {1=1}
lRUCache.put(2, 2); // cache is {1=1, 2=2}
lRUCache.get(1);    // return 1
lRUCache.put(3, 3); // LRU key was 2, evicts key 2, cache is {1=1, 3=3}
lRUCache.get(2);    // returns -1 (not found)
lRUCache.put(4, 4); // LRU key was 1, evicts key 1, cache is {4=4, 3=3}
lRUCache.get(1);    // return -1 (not found)
lRUCache.get(3);    // return 3
lRUCache.get(4);    // return 4

Time Complexity: O(1)
Space Complexity: O(N)
*/
