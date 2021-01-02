#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> vect)
{
	for(auto i:vect)
		cout<<i<<"  ";
}

int main()
{
	vector<int> vect1={1,2,3,4,5,6};
	vector<int> vect2={7,8,9,10};
	vector<int> vect3,vect4;
	vector<int> vect5={1,2,3,5,7,9,10};
	vector<int>::iterator low,up;

	int user_input;

	cout<<"  Vector 1 contains: "<<endl;
	printVector(vect1);

	cout<<"\n \n Vector 2 contains"<<endl;
	printVector(vect2);

	set_union(vect1.begin(), vect1.end(), vect2.begin(), vect2.end(),
			back_inserter(vect3));

	cout<<"\n\n Union of Vector1 and Vector2"<<endl;
	printVector(vect3);

	vect3.emplace(vect3.begin(), 0);
	cout<<"\n\n New Vector3 contains: "<<endl;
	printVector(vect3);

	vect3.emplace(vect3.end(),11);
	cout<<"\n\n New Vector3 contains: "<<endl;
	printVector(vect3);

	vect3.emplace_back(12);
	cout<<"\n\n New Vector3 contains: "<<endl;
	printVector(vect3);

	cout<<"\n\n Enter numbers to put in new Vector and enter 0 to stop entering"<<endl;
	do{
		cin>>user_input;
		vect4.push_back(user_input);
	}while(user_input);


	cout<<"\n\n New Vector4 made by user contains: "<<endl;
	printVector(vect4);

	vect4.pop_back();//Removes the last element in the vector
	cout<<"\n\n New Vector4 made by user contains: "<<endl;
	printVector(vect4);

	cout<<"\n\n Type the number to find if it exists in hidden Vector5"<<endl<<"Enter 0 to stop"<<endl;
	do{
		cin>>user_input;
		if (binary_search(vect5.begin(), vect5.end(), user_input))
			cout<<endl<<user_input<<" exist in hidden Vector5"<<endl;
		else
			cout<<endl<<user_input<<" does not exist in hidden Vector5"<<endl;
	}while(user_input);



	return 0;
}
