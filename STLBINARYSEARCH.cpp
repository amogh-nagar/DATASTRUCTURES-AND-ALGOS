
// ALL WILL  WORK IN LOG(N)

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// 1. check if X exists in sorted array or not?
// a[]={1,4,5,8,9}

// bool res=binary_search(a,a+n,3);
// not found

// bool res=binary_search(a,a+n,4);
// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
// a[]={1,4,5,6,9,9}

// int id=lower_bound(a,a+n,4)-a; - 1

// int id=lower_bound(a,a+n,7)-a; - 4

// int id=lower_bound(a,a+n,10)-a; - 6


// in id=lower_bound(a.begin(),a.end(),x)-a.begin();

// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
// int id=upper_bound(a,a+n,4) - a; - 2

// int id=lower_bound(a,a+n,7)-a; - 4

// int id=lower_bound(a,a+n,10)-a; - 6
// -----------------------------------------------
// FIRST OCCURENCE

// a[]={1,4,4,4,4,9,9,10,11}
// int ind=lower_bound(a,a+n,X);

// if(ind!=n && a[ind]==X) cout<<ind;
// else count<<-1;
// --------------------------------------------------

// 8888888888888888888888888888888888888888888888888888
// LAST OCCURENCE
// int ind=upper_bound(a,a+n,X);
// ind--;
// if(ind>=0 && a[ind]==X) cout<<ind;
// else count<<-1;

// 888888888888888888888888888888888888888888888888
// 000000000000000000000000000000000000000000000
// LARGEST NUMBER SMALLER THAN X

// int ind=lower_bound(a,a+n,X) -a;
// ind--;

// if(ind>=0)cout<<ind;
// else cout<<-1;
// 00000000000000000000000000000000000000000000
// 000000000000000000000000000000000000000
// Smallest number grater than X
// int ind=upper_bound(a,a+n,) - a;
// if(index<n)cout<<ind;
// else cout<<-1;
// 0000000000000000000000000000000000000000000
