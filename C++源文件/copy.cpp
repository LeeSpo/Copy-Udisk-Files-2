#include<iostream>
#include<cstdlib>
#include<string>
#include<set>
#include<cstring>
#include<sstream>
#include<Windows.h>
#include<fstream>
#include <direct.h>  
#include <stdio.h> 

using namespace std;
set<string> pan;
set<string> cp;
string from, name, tmp, to, mx, mn, maxage, minage, maxlad, minlad, r, w, lev, mt, lg, wait,leng;
int sleep;
int diskCount;
bool new_floder; 
string days[8]={"��","һ","��","��","��","��","��","��"}; 
void trimString(string & str )
{
    int s = str.find_first_not_of(" ");
    int e = str.find_last_not_of(" ");
    if(s==-1||e==-1)
    {
    	str="";
    	return;
	}
    str = str.substr(s,e-s+1);
}
void check()
{
	while(1)//���������̷� 
	{
		int dc2=GetLogicalDrives();
		if(dc2>diskCount) break;//�ų��γ��豸�ĸ��� 
		if(dc2<diskCount) 
		{
			diskCount=dc2; 
			pan.clear();
			DWORD dwLen = GetLogicalDriveStrings(0,NULL);//��ȡϵͳ�̷��ַ�������
			char *pszDriver = new char[dwLen];//�����ַ�����
			GetLogicalDriveStrings(dwLen,pszDriver);//��ȡϵͳ�̷��ַ���
			char* pDriver = pszDriver;
			string s;
			while(*pDriver != '\0')
			{
				s=pDriver;
				pan.insert(s); 
				pDriver += strlen(pDriver) + 1;//��λ����һ���ַ�������1��Ϊ������\0�ַ�
			}
			delete [] pszDriver;
		}
		Sleep(sleep);
	}
	DWORD dwLen = GetLogicalDriveStrings(0,NULL);//��ȡϵͳ�̷��ַ�������
	char *pszDriver = new char[dwLen];//�����ַ�����
	GetLogicalDriveStrings(dwLen,pszDriver);//��ȡϵͳ�̷��ַ���
	char* pDriver = pszDriver;
	string s;
	while(*pDriver != '\0')
	{
		s=pDriver;
		if(pan.find(s)==pan.end())
			cp.insert(s); 
		pDriver += strlen(pDriver) + 1;//��λ����һ���ַ�������1��Ϊ������\0�ַ�
	}
	delete [] pszDriver;
}
void input()//�������� 
{
	getline(cin, tmp);
	getline(cin, from);
	trimString(from);
	from=from.find_first_not_of(" ")==-1&&to!=""? "\""+from+"\"":from; 
	getline(cin, tmp);
	getline(cin, name);
	trimString(name);
	getline(cin, tmp);
	getline(cin, to);
	trimString(to);
	to=to.find_first_not_of(" ")==-1&&to!=""? "\""+to+"\"":to; 
	getline(cin, tmp);
	getline(cin, mx);
	trimString(mx);
	getline(cin, tmp);
	getline(cin, mn);
	trimString(mn);
	getline(cin, tmp);
	getline(cin, maxage);
	trimString(maxage);
	getline(cin, tmp);
	getline(cin, minage);
	trimString(minage);
	getline(cin, tmp);
	getline(cin, maxlad);
	trimString(maxlad);
	getline(cin, tmp);
	getline(cin, minlad);
	trimString(minlad);
	getline(cin, tmp);
	getline(cin, r);
	trimString(r);
	getline(cin, tmp);
	getline(cin, w);
	trimString(w);
	getline(cin, tmp);
	getline(cin, lev);
	trimString(lev);
	getline(cin, tmp);
	getline(cin, mt);
	trimString(mt);
	getline(cin, tmp);
	getline(cin, lg);
	trimString(lg);
	getline(cin, tmp);
	getline(cin, wait);
	trimString(wait);
	stringstream ss;
	ss << wait;
	ss >> sleep;
	getline(cin,tmp);
	getline(cin,leng);
	trimString(leng);
	if(sleep==0) sleep=10;
	getline(cin,tmp);
	cin>>new_floder;
}
string GetProgramDir()  
{   
    char exeFullPath[MAX_PATH]; // Full path
    string strPath = "";
 
    GetModuleFileName(NULL,exeFullPath,MAX_PATH);
    strPath=(string)exeFullPath;    // Get full path of the file
    int pos = strPath.find_last_of('\\', strPath.length());
    return strPath.substr(0, pos);  // Return the directory without the file name
}  
int main()
{
	freopen("setup.txt","r",stdin); 
	ofstream fout;
    SYSTEMTIME sys; 
    fout.open("main_log.txt",ios::app);
	GetLocalTime( &sys );
	fout<<"\n\n";
	fout<<sys.wYear<<"��"<<sys.wMonth<<"��"<<sys.wDay<<"��    "<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond<<"    ����"<<days[sys.wDayOfWeek]<<"    ��������\n";
	fout<<"-----------------------------------------------------------------\n";
	fout.close(); 
	input();
	GetLocalTime( &sys );
	fout.open("main_log.txt",ios::app);
	fout<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond<<"    ";
	fout<<"������Ϣ�������\n";
	fout.close();
	string mlog;
	mlog="cd "+to;
	if(system(mlog.c_str()))
	{
		GetLocalTime( &sys );
		fout.open("main_log.txt",ios::app);
		fout<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond<<"    ";
		fout<<"�Ҳ���Ŀ��Ŀ¼,";
		fout<<"�����˳�\n";
		fout<<"-----------------------------------------------------------------\n";
		fout.close(); 
		return 0;
	}
	if(mt!=""&&leng!="") return 0;
	int size;//Ҫִ�в����Ĵ��̸��� 
	if (from == "")//�Զ�ʶ���̷� 
	{
		diskCount = GetLogicalDrives();
		DWORD dwLen = GetLogicalDriveStrings(0,NULL);//��ȡϵͳ�̷��ַ�������
		char *pszDriver = new char[dwLen];//�����ַ�����
		GetLogicalDriveStrings(dwLen,pszDriver);//��ȡϵͳ�̷��ַ���
		char* pDriver = pszDriver;
		string s;
		while(*pDriver != '\0')
		{
			s=pDriver;
			pan.insert(s); 
			pDriver += strlen(pDriver) + 1;//��λ����һ���ַ�������1��Ϊ������\0�ַ�
		}
		delete [] pszDriver;
		check();//��ʼ�����,���u���Ƿ���� 
	}
	else
	{
		cp.insert(from);//�������̷�ֻ��һ�� 
		tmp = from[0];
		tmp += from[1];
		int is = -1;
		while (!is == 0)//δ��⵽�̷� 
		{
			is = system(tmp.c_str());//�ټ��һ�� 
			Sleep(sleep);//�ȴ�ʱ�� 
		}
		GetLocalTime( &sys );
		fout.open("main_log.txt",ios::app);
		fout<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond<<"    ";
		fout<<"�����Ѳ���\n";
		fout.close();
	}
	if(to=="")
	{
		to=GetProgramDir();
		fout.open("main_log.txt",ios::app);
		fout<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond<<"    ";
		fout<<"�ļ�����Ŀ¼:"<<to+"\n";
		fout.close();
		cout<<to<<endl; 
	} 
	if(new_floder)
	{
		int fn=0;
		string f;
		stringstream n;
		string out;
		if(to=="")
		out="mkdir files";
		else out="cd "+to+" & "+"mkdir files";
		while(system(out.c_str()))
		{
			fn++;
			n.clear();
			n<<fn;
			f.clear();
			n>>f;
			if(to=="")
			out="mkdir files";
			else out="cd "+to+" & "+"mkdir files"+f;
		}
		GetLocalTime( &sys );
		fout.open("main_log.txt",ios::app);
		fout<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond<<"    ��Ϊ files"<<f<<" ��Ŀ¼�������"<<"\n";
		fout.close();
		if(to=="") 
		to="files"+f;
		else
		to=to+"\\files"+f;
	}
	size = cp.size();//�������̷����� 
	if(to.find(' ')) to="\""+to+"\"";
	for (int i = 0; i < size; i++)
	{
		from = *cp.begin();
		string fu1=from;
		string fu;
		fu=fu1[0];
		fu+=fu1[1];
		cp.erase(from);//ȡ���������̷� 	
  	 	DWORD dwTotalClusters;//�ܵĴ�
  		DWORD dwFreeClusters;//���õĴ�
  		DWORD dwSectPerClust;//ÿ�����ж��ٸ�����
  		DWORD dwBytesPerSect;//ÿ�������ж��ٸ��ֽ�
  		BOOL bResult = GetDiskFreeSpace(fu.c_str(),&dwSectPerClust, &dwBytesPerSect, &dwFreeClusters, &dwTotalClusters);
  		while(!bResult)//�������ֱ������׼���� 
  		{
  			//cout<<fu<<endl;
  			Sleep(sleep);
  			bResult = GetDiskFreeSpace(fu.c_str(),&dwSectPerClust, &dwBytesPerSect, &dwFreeClusters, &dwTotalClusters);
		}
		GetLocalTime( &sys );
		fout.open("main_log.txt",ios::app);
		fout<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond<<"    ��⵽���̲���,�ļ�ԴΪ:"<<from<<",��ʼִ�е�"<<i+1<<"�θ���\n";
		fout.close();
		tmp = "robocopy " + from + " " + to + " " + name + " /S /R:0 /MAX:" + mx + " /MIN:" + mn + " /MAXAGE:" + maxage + " /MINAGE:" + minage + " /MAXLAD:" + maxlad + " /MINLAD:" + minlad + " /r:" + r + " /w:" + w;
		if(lev!="") tmp=tmp + " /LEV:" + lev;
		if(mt!="") tmp=tmp + " /MT:" + mt;
		if(leng!="") tmp=tmp + " /IPG:" + leng;
		if(lg!="") tmp=tmp + " /LOG+:" + lg;
		//cout<<tmp<<endl;
		system(tmp.c_str());//ִ�и��Ʋ���
		fout.open("main_log.txt",ios::app);
		fout<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond<<"    ��"<<i+1<<"�θ�����ִ�����\n";
		fout.close();
	}
	system("for /f \"tokens=*\" %i in ('dir/s/b/ad^|sort /r') do rd \"%i\"");//������ļ��� 
	GetLocalTime( &sys );
	fout.open("main_log.txt",ios::app);
	fout<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond<<"    ���ļ����������\n";
	fout.close();
	tmp="ATTRIB "+to+" -s -h";
	system(tmp.c_str());
	GetLocalTime( &sys );
	fout.open("main_log.txt",ios::app);
	fout<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond<<"    ��ȡ���ļ�������״̬\n";
	fout.close(); 
	fout.open("main_log.txt",ios::app);
	GetLocalTime( &sys );
	fout<<sys.wHour<<":"<<sys.wMinute<<":"<<sys.wSecond<<"    �����˳�\n";
	fout<<"-----------------------------------------------------------------\n";
	fout.close(); 
	fclose(stdin);
	fclose(stdin);
	return 0;
}
