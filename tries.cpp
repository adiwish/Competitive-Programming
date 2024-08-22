class Node{
public:
    Node* Links[26];
    bool isEnd;

    Node(){
        for(int i=0;i<26;++i){
            Links[i]=nullptr;
        }
        isEnd = false;
    }
};

class Trie{
public:
    Node* root;
    Trie(){
        root = new Node();
    }

    void insert(string& s){
        auto tmp = root;

        for(auto c: s){
            if(tmp->Links[c-'a']==nullptr){
                tmp->Links[c-'a'] = new Node();
            }

            }
    }

};