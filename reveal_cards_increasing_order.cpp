class Solution {
public:
        
       vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int> deque;
        sort(deck.begin(), deck.end(), [](int& v1, int& v2) -> bool {
                 return v1 > v2;
        });
        
        
        for(int i = 0; i < deck.size(); i++) {
            deque.push_front(deck[i]);
            deque.insert(deque.begin()+1, *(deque.end()-1));
            deque.pop_back();
        }
        return vector(deque.begin(), deque.end());
        
    }
};
