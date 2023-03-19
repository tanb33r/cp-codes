#include<bits/stdc++.h>
#define  f(i,n)             for(int i=0; i<(n); i++)
#define  ff(i,j,n)          for(int i=int(j);i<int(n);++i)
#define  ps(x)              cout<<(#x)<<"\n"
#define  pb(x)              push_back(x)
#define  pr(x)              cout<<x<<"\n"
#define  endl               "\n"
#define  newl               cout<<"\n"
#define  all(v)             (v).begin(), (v).end()
#define  vout(v)            for(int I=0;I<(v).size();I++)cout<<v[I]<<" ";cout<<"\n"
#define  arrp(v,n)          for(int I=0;I<n;I++)cout<<a[I]<<" ";cout<<"\n"
#define  deb(x)             cerr<<(#x)<<" = "<<(x)<<"\n"
#define  hmm(x)             cout<<(x?"YES":"NO")<<"\n";
#define  ll                 long long
using namespace std;
struct Node {
    string word,meaning;
    int key;
    Node *L,*R;
    Node() {
        L=R=NULL;
    }
    Node(string w,string m) {
        word = w;
        meaning = m;
        L=R= NULL;
    }

};

struct BST {
    Node *root;
    BST() {
        root=NULL;
    }
    Node *Insert(Node *root, string word, string meaning) {
        if(root == NULL) {
            Node *new1=new Node(word,meaning);
            root=new1;
            root->L==NULL;
            root->R==NULL;
        } else if(word < root->word)
            root->L=Insert(root->L,word,meaning);
        else
            root->R=Insert(root->R,word,meaning);

        return root;
    }
    void preOrder(Node *r) {
        if(r!=NULL) {
            cout<<r->word<<endl;
//            cout<<r->word<<" "<<r->meaning<<endl;
            preOrder(r->L);
            preOrder(r->R);
        }
    }
    void search_by_meaning(Node *r, string mean) {

        if(r==NULL) {
            return;
        }
        if(r!=NULL) {
            if(r->meaning==mean)
                cout<<r->word<<"\n";
            if(r->word>mean)
                search_by_meaning(r->L,mean);
            else
                search_by_meaning(r->R,mean);
        }
    }
    bool SearchMeaning(Node *r, string w) {


        if(r!=NULL) {
            if(r->word==w)
                cout<<r->meaning<<endl;
            else if(r->word>w)
                SearchMeaning(r->L,w);
            else
                SearchMeaning(r->R,w);
        }
    }
    bool Search(Node *r, string w) {
        if(r==NULL)
            return false;

        if(r!=NULL) {
            if(r->word==w)
                return true;
            else if(r->word>w)
                Search(r->L,w);
            else
                Search(r->R,w);
        }
    }
    /*  string min(Node *r) {
          Node *temp = r;
          while(temp->L!=NULL) {
              temp=temp->L;
          }
          return temp->word;
      }
      string max(Node *r) {
          Node *temp = r;
          while(temp->R!=NULL) {
              temp=temp->R;
          }
          return temp->word;
      }
    */
    Node *Delete(Node *r, string word) {
        if(r==NULL)
            return r;
        else if(word < r->word)
            r->L=Delete(r->L,word);
        else if(word > r->word)
            r->R= Delete(r->R,word);
        else {
            if(r->L==NULL && r->R==NULL) {
                delete r;
                r=NULL;
                return r;
            } else if(r->L==NULL) {
                Node *temp =r;
                r=r->R;
                delete temp;
                return r;
            } else if(r->R==NULL) {
                Node *temp =r;
                r=r->L;
                delete temp;
                return r;
            } else {

                delete r;
                r=NULL;
                return r;
//                Node *temp = new Node(min(r->R),r->word,r->meaning);
//                r->word = temp->word;
//                r->R= Delete(r->R,temp->word);
            }
        }
    }

    int Height(Node *r) {
        if(r==NULL)
            return 0;
        else {
            if(r->L==NULL && r->R==NULL)
                return 0;

            int mhL = Height(r->L);
            int mhR = Height(r->R);

            if(mhL>mhR)
                return (mhL + 1);
            else
                return (mhR + 1);

        }
    }
};
