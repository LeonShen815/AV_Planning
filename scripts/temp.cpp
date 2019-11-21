#include <iostream>
#include <bits/stdc++.h>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

 int main()
 {
 	
	//  Eigen matrix test
	Matrix<double, 2,2> M1;
 	M1.row(0) << 2.0,1.0;
 	M1.row(1) << 3.0, 4.0;
 	cout<<" matrix is: \n"<<M1<<endl;
 	cout<<M1.row(1)[0]<<endl;

	//--------------
	set<int> pp;
	pp.insert(55);
	pp.insert(25);
	pp.insert(100);
	pp.insert(2);
	for(int h : pp)
	{
		cout<<h<<"\n";
		pp.erase(pp.begin());
		cout<<"pp size: "<<pp.size()<<endl;
	} 
	cout<<endl;

 	return 0;
 }