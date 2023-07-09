#include<fstream>
#include<boost/archive/text_iarchive.hpp>
#include<boost/archive/text_oarchive.hpp>
using namespace std;
class employee{
	private:
		friend class boost:: serialization::access;
		int id;
		string name;
		template<class archive>
		void serialize(archive &a,const unsigned version){
			a & id name &salary;
		}
	public:
		employee(){}
		employee(int i,string n,float s):id(i),name(n),salary(s)
		{
			
		}
};
int main()
{
	const string filename="emp.dat";
	employee e1(11,"harry",4500.00f);
	employee e2(22,"ravi",8800.00f);
	employee e3(33,"rajiv",8800.00f);
	employee e4(44,"tim",8800.00f);
	//serialize and persist the object
	{
		std::fostream outfile(filename);
		boost::archive::text_oarchive archive(outfile);
		archive<<e1<<e2<<e3<<e4;
	}
	//deserilize and restore the object
	employee restored_e1;
	employee restored_e2;
	employee restored_e3;
	employee restored_e4;

{
	std::ifstream  infile(filename);
	boost::archive::text_iarchive archive(infile);
	archive>>restore_e1>>restore_e2>>restore_e3>>restore_e4;
}
return 0;
}
