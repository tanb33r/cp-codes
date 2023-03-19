int trie[100005][53];
bool wordEnds[100005][53];
int sz;
int ROOT;
void init() {
    CLR(trie);
    CLR(wordEnds);
    sz=0;
    ROOT=0;
}
void insertWord(char str[], int len) {
    int currentNode=ROOT;
    for(int i=0; i<(len); i++) {
        int next=hashof(str[i]);
        if(!trie[currentNode][next]) trie[currentNode][next]=++sz;
        if(i<(len-1));
        else wordEnds[currentNode][next]=true;
        currentNode=trie[currentNode][next];
    }
}


