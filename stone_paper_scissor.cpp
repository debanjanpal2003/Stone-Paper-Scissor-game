#include<bits/stdc++.h>
#include<map>
#include<algorithm>
#include<vector>
#include<string>
#include<windows.h>
using namespace std;

void print(map<int,string>mp){
    for(int i=0;i<3;i++){
        cout<<i<<" -> "<<mp[i]<<endl;
    }
}
int main(){
    map<int,string>mp;
    mp[0]="STONE";
    mp[1]="PAPER";
    mp[2]="SCISSOR";
    int usercount=0,compcount=0;
    int gamepoint=0;
    char c;
    do{
        cout<<"How Much Game Point:"<<endl;
        cin>>gamepoint;
        char ch;
        do{
            print(mp);
            cout<<"Enter Your Choice: ";
            int num;
            cin>>num;
            if(num>=0 && num<=2){
                cout<<"                       Your Choice --->>> "<<mp[num]<<endl<<endl;
                cout<<"Now, It's COMPUTER turn: "<<endl;
                int cp=rand()%3;
                cout<<"    wait..."<<endl;
                Sleep(1000);
                cout<<"                       Computer Choice --->>> "<<mp[cp]<<endl<<endl;
                if(cp==num){
                    cout<<"       Match Tie!!!!          "<<endl<<endl;
                    cout<<"          score is: "<<"user : "<<usercount<<"          "<<"comp :  "<<compcount<<endl;
                }
                else if(num==0 && cp==1){
                    cout<<"COMPUTER win !!!!          "<<endl;
                    compcount++;
                    cout<<"          score is:"<<"user :  "<<usercount<<"          "<<"comp :  "<<compcount<<endl;
                    
                }
                else if(num==1 && cp==0){
                    cout<<"USER win !!!!"<<endl;
                    usercount++;
                    cout<<"          score is:"<<"user :  "<<usercount<<"          "<<"comp :  "<<compcount<<endl;
                }
                else if(num==0 && cp==2){
                    cout<<"USER win !!!!"<<endl;
                    usercount++;
                    cout<<"          score is:"<<"user :  "<<usercount<<"          "<<"comp :  "<<compcount<<endl;
                }
                else if(num==2 && cp==0){
                    cout<<"COMPUTER win !!!!"<<endl;
                    compcount++;
                    cout<<"          score is:"<<"user :  "<<usercount<<"          "<<"comp :  "<<compcount<<endl;
                }
                else if(num==1 && cp==2){
                    cout<<"COMPUTER win !!!!"<<endl;
                    compcount++;
                    cout<<"          score is:"<<"user :  "<<usercount<<"          "<<"comp :  "<<compcount<<endl;
                }
                else if(num==2 && cp==1){
                    cout<<"USER win !!!!"<<endl;
                    usercount++;
                    cout<<"          score is:"<<"user :  "<<usercount<<"          "<<"comp :  "<<compcount<<endl;   
                }
            }
            else{
                cout<<"    WRONG INPUT "<<endl;
            }

            if(usercount==gamepoint || compcount==gamepoint){
                break;
            }
            cout<<"DO YOU WANT TO CONTINUE THIS MATCH:(y/n) "<<endl;
            cin>>ch;
        }while(ch=='y' || ch=='Y');

        cout<<"          !!!!!! MATCH COMPLETED  !!!!!!"<<endl<<endl;
        cout<<"  RESULT----->>>>>>"<<endl;
        cout<<"          score is:"<<"user :  "<<usercount<<"          "<<"comp :  "<<compcount<<endl;
        if(usercount==gamepoint){
            cout<<"     !!!! USER WIN !!!!"<<endl;
        }
        else if(compcount==gamepoint){
            cout<<"     !!!!  COMPUTER WIN  !!!! "<<endl;
        }
        else{
            cout<<"  MATCH INCOMPLETED "<<endl;
        }
        cout<<"do you want to play again with gamepoint (y/n)"<<endl;
        cin>>c;
    }while(c=='y'|| c=='Y');
}