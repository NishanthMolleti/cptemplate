/*THERE'S ALWAYS SOMETHING , NOT THAT YOU WOULD UNDERSTAND . YOU ARE LIKE MY SISTER ,
 EVERYTHING ALWAYS CAME EASY TO HER .
 SHE'S A FIRE BENDING PRODIGY AND EVERY ONE ADORE HER . MY FATHER SAYS
 SHE WAS BORN LUCKY ,HE SAYS I WAS LUCKY TO BE BORN . I DON'T NEED LUCK THOUGH .
 I DON'T WANT IT . I'VE ALWAYS HAD TO STRUGGLE AND FIGHT
 AND THAT'S MADE ME STRONG . IT MADE ME WHO I AM .*/
/*
*WHILE USING UNSIGNED LONG LONG INT MAKE SURE THAT YOU DON'T USE ANYTHING RELATED TO SIGNS
*BE CAREFUL , MEMSET DOESN'T WORK WHILE USING LONG LONG INT
 */
/* WHATEVER DOESNT KILL ME ONLY MAKES ME STRONGER .*/

#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long int
#define mod 1000000007
#define vi vector<int>
#define pb push_back
#define vvi vector<vector<int>>
#define f(x,l,r) for(int x=l;x<r;x++)
#define ii pair<int,int>
#define vii vector<ii>
#define INF 1000000000
#define ld long double 
#define flash ios::sync_with_stdio(false);cin.tie(0);
int binexp(int a,int b){
    int res=1;
    while(b>0){
        if(b&1){
            res=((res*a)%1000000007);
        }
        a=((a*a)%1000000007);
        b=b>>1;
    }
    return res%1000000007;
}
vi primes;
int p[1000006];
void sieve(){
    primes.pb(2);
    for(int i=3;i<100000;i+=2)p[i]=1;
    for(int i=3;i<100000;i+=2){
        if(p[i]){
            primes.pb(i);
            for(int j=2*i;i*i<100000;j+=i){
                p[j]=0;
            }
        }
    }
}
void fun()
{
    string s;cin>>s;
    int a[26],c=0,d=0;
    for(int i=0;i<26;i++)a[i]=0;
    for(int i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]==1)c++;
        else if(a[i]>1)d++;
    }
    cout<<d+c/2<<endl;
  
}
main()
{
 	flash
    sieve();
    int t=1;
    cin>>t;
    while(t--) {
      fun();
    }
}



