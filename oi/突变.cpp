#include<bits/stdc++.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
using namespace std;
int mzhg,zd,swhm,qxs,swx,sn,mp,tongguan,sw1,zd1,sn1,mz1,mp1,zbbj,ccg,mzzd,mz,tongguan1,sw,x,s,cdd,jg,qiang,gun,by,vv,gjj[100],hjj[100],zjj[100];
void Read()
{
    ifstream in("����Σ��.in");
    in>>mzhg>>zd>>swhm>>qxs>>swx>>sn>>mp>>tongguan>>sw1>>zd1>>sn1>>mz1>>mp1>>zbbj>>ccg>>mzzd>>mz>>tongguan1>>sw>>x>>s>>cdd>>jg>>qiang>>gun>>by>>vv;
    for(int i=0;i<=99;i++) in>>gjj[i];
    for(int i=0;i<=99;i++) in>>hjj[i];
    for(int i=0;i<=99;i++) in>>zjj[i];
    in.close();
}
void Save()
{
    ofstream out("����Σ��.in");
    out<<mzhg<<' '<<zd<<' '<<swhm<<' '<<qxs <<' '<<swx<<' '<<sn<<' '<<mp<<' '<<tongguan<<' '<<sw1<<' '<<zd1<<' '<<sn1<<' '<<mz1<<' '<<mp1<<' '<<zbbj<<' '<<ccg<<' '<<mzzd<<' '<<mz<<' '<<tongguan1<<' '<<sw<<' '<<x<<' '<<s<<' '<<cdd<<' '<<jg<<' '<<qiang<<' '<<gun<<' '<<by<<' '<<vv<<'\n';
    for(int i=0;i<=99;i++) out<<' '<<gjj[i];out<<'\n';
    for(int i=0;i<=99;i++) out<<' '<<hjj[i];out<<'\n';
    for(int i=0;i<=99;i++) out<<' '<<zjj[i];out<<'\n';
    out.close();
}
void Slowsay(string a) {int l=a.size();for(int i=0;i<l;i++){cout<<a[i];if(vv==0) Sleep(20);}printf("\n");if(vv==1) Sleep(100);}
int read()
{
    char ch=_getch();
    while(ch>'9'||ch<'0') ch=_getch();
    return ch-48;
}
void qp()
{
    system("cls");if(swx==2) Slowsay("����"),zd=99999,sw=99999;
    Slowsay("��ǰ���״̬��\n");
    printf("�ӵ� %d��ʳ�� %d\n",zd,sw);
}
int esl()
{
    system("cls");
    char ch;
    Slowsay("�㣬�����ˡ�\n");
    if(vv==0) ch=_getch();
    hjj[1]=1;
    Slowsay("Bad End  1\n");
    ch=_getch();
    s++;
    return 0;
}
int mzd()
{
    hjj[2]=1;
    system("cls");
    char ch;
    Slowsay("�㣬�����ˡ�\n");
    if(vv==0) ch=_getch();
    Slowsay("Bad End   2\n");
    ch=_getch();
    s++;
    return 0;
}
int hd1()
{
    system("cls");
    Slowsay("��ĳһ�죬����ſ�������������������ţ�����ķ���������ϲ����\n");
    Slowsay("�����ľ�Ԯ�����Ѿ�������������е�ͻ���壬\n������������еĸ������������ſ��ܴ��ڵ��Ҵ���.\n");
    Slowsay("Happy End-----�������\n");Sleep(1000);gjj[1]=1;
    return 0;
}
int hd2()
{
    system("cls");
    int sw;
    char ch;
    Slowsay("���������ദ����Щʱ����������మ��\n");
    Slowsay("���ǵ��������������Ҹ�\n");
    Slowsay("ֱ����һ��......\n");
    Slowsay("��������ϣ����ȥִ��һ��������ѡ��\n");
    Slowsay("1.����һ��ǰ��\n");
    Slowsay("2.������һ��ȥ\n");
    while(true)
    {
        int x;
        x=read();
        if(x<1||x>2)
        {
            Slowsay("����������\n");
            continue;
        }
        if(x==1)
        {
            Slowsay("����������������ʱ�򣬷��֡���\n");
            Slowsay("���ر�ͻ���幥����\n");
            Slowsay("������ص������˶���ͻ����ɱ�ˣ�һ���˶�û�ܳ���\n");
            hjj[4]=1;
            Slowsay("Bad End    4");
            s++;
        }
        if(x==2)
        {
            Slowsay("�������������������ʱ��\n");
            Slowsay("�����Ѿ����һƬ������\n");
            Slowsay("�������û�а취��ֻ�ܵ�������\n");
            Slowsay("�������������ܱ�һ����Ҫ��\n");
            gjj[2]=1;
            Slowsay("Happy End------���ɾ���"); 
        }
        break;
    }    Sleep(1000); 
    return 0;
}
int hd3()
{
    system("cls");
    char ch;
    Slowsay("�������ƽ�������������������\n");
    Slowsay("ֱ��ĳһ�죬������ͻ�������������\n");
    if(zd>9)
    {
        Slowsay("ÿ���˶��ھ��Լ���Ŭ��ȥ��������\n");
        Slowsay("ÿ���˶��������Լ���������\n");
        Slowsay("����漣������\n");
        Slowsay("��ҳɹ���ס�˻���\n");
        Slowsay("���㣬Ҳ��Ϊ���������������´󹦳�Ϊ��������ص�Ӣ��\n");
        Slowsay("˳��˵һ�䣬��������ҲûŮ����\n");
        gjj[3]=1;
        Slowsay("Happy End-----Ӣ�۲���");
        return 0;
    }
    Slowsay("ɥʬ������ʵ��̫���ˣ�\n");
    Slowsay("���ܻ��صĴ�Ҷ��ھ�ȫ������\n");
    Slowsay("�ɻ��ػ��Ǳ�������\n");
    Slowsay("���㣬Ҳ����������\n");
    s++;
    hjj[5]=1;
    Slowsay("Bad End     5"); Sleep(1000); 
}
int hd4()
{
    system("cls");
    Slowsay("���������ദ����Щʱ����");
    Slowsay("�㾡���ر�������");
    Slowsay("����Ҳ�������������ϲ");
    Slowsay("�����ģ��㿪ʼ�������Լ�");
    Slowsay("���Ǹ�gay");
    Slowsay("���ǣ���ͺ������Ը����ֵ���������һ��");
    Slowsay("Happy End-----�����Լ�");
    gjj[4]=1;  Sleep(1000); 
}
int td()
{
    system("cls");
    char ch;
    Slowsay("������������ǹһ�𷢳���ǿ��\n");
    Slowsay("�����ţ�������Ϊ��һ��\n");
    Slowsay("����âɢȥʱ���������綼�����˱仯\n");
    Slowsay("���е�ͻ���嶼���������\n");
    Slowsay("ΰ�����ʿ������Σ�����ڽ���ˣ�����������������ͬ��Ĵ�񻶣�����\n");
    Slowsay("True End-----��������\n");Sleep(1000); 
    Slowsay("???????????????????????????????????");
    Slowsay("......������ô����......");
    Slowsay("......Ϊʲô......");
    Slowsay("......������ͨ��......");
    Slowsay("......�Ӻζ���......");Sleep(1000); 
    Slowsay("�� �� �� �� �� ����˭�� �� �� �� �� ��");
    Slowsay("�������˼��");
    if(zjj[1]!=1)
    {
        Slowsay("�������-----���ص�ǹ�����");
    }
    zjj[1]=1; Sleep(1000); 
}
int td2()
{
    system("cls");
    char ch;
    Slowsay("��ı����Ѿ���ʼ��");
    Slowsay("�㿪ʼ���Ľ�ʳ��ֱ�����Լ���θ����");
    Slowsay("Ȼ�󣬾���ǰһ��ʧȥ��ʶ");
    Slowsay("�ٴ�����ʱ�����Ѿ���һ��ɥʬ��");
    Slowsay("��ֵ��ǣ��㻹�������Լ�����ʶ");
    Slowsay("��о����Լ���������ø����ٶȱ�ø���");
    Slowsay("������ɥʬҲ��������������������");
    Slowsay("True End-----���壡������"); 
    if(zjj[2]!=1)
    {
        Sleep(2000);
        Slowsay("�������-----�ӳٱ��죡������");
    }
    zjj[2]=1; Sleep(1000); 
}
int bd8()
{
    Slowsay("���������ϵ���һ��15�����ҵ�����");
    Slowsay("��������Ϊ�������������ʱ");
    Slowsay("����ȴվ������������������������");
    Slowsay("������˰ɡ�����������˵��");
    Slowsay("�������ˡ�����������Ļش�");
    Slowsay("Ȼ����͸е�����һ���ʹ");Sleep(1000);
    Slowsay("����ʧȥ��ʶǰ������һֱû���ɿڡ�");
    s++;
    Slowsay("Bad End     8");
    if(hjj[8]==0)
    {
        Sleep(2000);
        Slowsay("�������-----���ѱ��죡������");
    }
    hjj[8]=1;  Sleep(1000); 
}
int td3()
{
    system("cls");
    Slowsay("������ӳ����ɥʬ��Χɱ��");
    Slowsay("���ǵ����������Ǹ��Ҵ��߻���ʱ");
    Slowsay("ȴ�����Ǹ�������һЩ����");
    Slowsay("�����˶�����������");
    Slowsay("����ֱ������������ķ���");Sleep(1000);
    if(zjj[2]==1&&zjj[3]==1) 
    {   
        bd8();
        return 0;
    }
    Slowsay("�����ӵ��������뿪");
    Slowsay("�������Ҫ�뿪��ʱ������ץס�������");
    Slowsay("����ϲ���㣬���ߡ�,������˵");
    Slowsay("���ǣ�����������");
    Slowsay("���ǵ��������������Ҹ�"); 
    Slowsay("ֱ����һ��......");Sleep(1000);
    Slowsay("��������ϣ����ȥִ��һ������\n");
    Slowsay("��ִ������Ĺ�����");
    Slowsay("��������ͻ����ҧ����һ��");
    Slowsay("����Ϊ��û�з���");
    Slowsay("����ȴ��Զ����������һĻ");
    Slowsay("��ֵ��ǣ���ȴ��û�б���\n");
    Slowsay("��һɲ����ͻȻ����");
    Slowsay("���ǵķ��������������һ��Ѫ�ȵ�ζ��......");Sleep(1000);
    Slowsay("Happy End------���ɾ���");Sleep(1000);
    Slowsay("???????????????????????????????????");
    Slowsay("True End------���壿������");
    if(zjj[3]==0)
    {
        Sleep(2000);
        Slowsay("�������-----�����죿������"); 
    }
    zjj[3]=1;Sleep(1000);
}
int td4()
{
    system("cls");
    Slowsay("��ͻ����Σ������ʱ���������ڼ���\n");
    char ch=_getch();
    if(vv==0) ch=_getch();
        system("cls");
        Slowsay("��ɥ*#******ɥʬΣ��*$*&*^&*������ʱ��**������***&*����******#�ڼ���**\n");Sleep(1000);
    	Slowsay("***��*#******�⵽*��**ɥʬΣ**88��*$ƥ*$**������ʱ��**��***#�ڼ���****\n");Sleep(2000);
    	Slowsay("L��****#OG****IΣ��*$N**E����***(RR*8%#404)**��ʱ��**��O*****#�ڼ�R��!\n");Sleep(2000);
        system("cls");
    if(vv==0) ch=_getch();
    Slowsay("��ʲô���Ծ�");
    Slowsay("����������");
    Slowsay("��ȥ�˺ö��죬\n�㻹��һ���˶�û��������\n����ͻ�������ͻ����");
    Slowsay("Ϊʲô����......�����ˣ�");
    Slowsay("\n");
    Slowsay("True End------��֤ʧ��");
    zjj[4]=1;
    if(zbbj==0)
        Slowsay("��������-----���룬������ʧ��"),zbbj=1;Sleep(1000);
}
int td5()
{
    system("cls");
    Slowsay("��������ȥ��������������ò�ͬ��");
    Slowsay("���еĻ�����һ˲����ʧ");
    Slowsay("���е�ͻ���嵱��ȥ��"); 
    Slowsay("�����ǰֻʣ���˺ڰ�");
    Slowsay("��֪����ȥ�˶�ã�������");
    Slowsay("Bad End......");Sleep(1000);
    Slowsay("������û�н���");
    Slowsay("��Ȼ�����������ȥ֮��ĸо�һ��");
    Slowsay("���ǡ��������񡣡���");Sleep(1000);
    Slowsay("���ӳ٣�������");
    Slowsay("�����������ʱ������˼��һֱûͣ������");
    Slowsay("True End-----����������");
    s++;
    if(zjj[5]==0)
        Slowsay("��������-----����֮��");
    zjj[5]=1;   Sleep(1000); 
}
int tg3()
{
    Slowsay("�����ٴ�������ʱ");
    Slowsay("�㷢���Լ�����һ��Ӫ������");
    Slowsay("���ޱȵ�ȷ���������ʵ������");
    Slowsay("���е�һ�п�ʼ��������");
    Slowsay("����Ϊ�Լ�֪����һ�е�����");
    Slowsay("ȥɱ������ɣ�������");
    Slowsay("����������");
    Slowsay("�����Ű״�ӵ�ɥʬ�ǵĻ�������");
    Slowsay("������˲������ܳ���Ӫ����");
    Slowsay("���������������ս���ƻ�����Ŀ���������");
    Slowsay("ս�����̣�����¡¡");
    Slowsay("�������ķ���˻�𣬺�������Χ��ɥʬ");
    Slowsay("��ָ�������ǣ��ٵ���һ����һ������Ļ���"); 
    Slowsay("������ⳡ����ս���У�ɥʬ�Ǽ��ѵ�ȡ����ʤ��"); 
    Slowsay("��Ϊ���ǵ�Ӣ�ۣ����Ժ���ͳ�������硣"); 
    Slowsay("��Ȼ����ʵ������Щ�㲻֪���ĵط�");
    Slowsay("һ����һ����Ӫ�����У�װ��һ����һ�����㡣");
    Slowsay("---------------��Ϸ�ռ�����ͨ��-------------");
    tongguan1=2; Save(); Sleep(1000);
}
int tg2()
{
    Slowsay("�����ٴ�������ʱ");
    Slowsay("�㷢���Լ�����һ��Ӫ������");
    Slowsay("���ޱȵ�ȷ���������ʵ������");
    Slowsay("������ȴ�����Լ�û����������");
    Slowsay("���Ų�����һ����ɫ����Ӱ���ڲ�����");
    Slowsay("�������Ŀ����Ǹ��˵Ĵ�����¶����������Ľ���һ��");
    Slowsay("��ʱ������һ�󲨼���ӿ���Ժ���");
    Slowsay("������������......���ԡ��ɹ��ߡ���Ӣ�ۡ����񻰴�˵��Ϊԭ�ʹ��������......��");
    Slowsay("����Ϸ�е�����볡��......ȡ������ʵ������ʵ����......��");
    Slowsay("�������������һƬ���ҡ�");
    Slowsay("��...����.........����..��....�ǻ�..ѧϰ........���.....��");
    Slowsay("��.....����...̽��.......ɱ...����.........����..��Ҫ.....��");
    Slowsay("��...����....����.....�޵�..�·�.......ս��...ΰ��.....Ӣ��.....��");
    Slowsay("����������һֱ�ص��š�");
    Slowsay("---------------��Ϸ���׾���ͨ��-------------"); 
    tongguan1=1; Sleep(1000); 
}
int td6()
{
    Slowsay("һ���Ժ����������");
    Slowsay("һ������Ļ�������");
    Slowsay("���ҵ���......��");
    Slowsay("�������������һ�����������");
    Slowsay("�����ϵ��ּ��ܹ��죬��д����Ϥ�����ݣ�");
    Slowsay("��22-08-03...��");
    Slowsay("�����......��");
    Slowsay("������ɫ���ӵĿ�����һ��");
    Slowsay("��������һ����......��");
    Slowsay("�����ڣ����Ұ������ȥ�ɡ���");
    if(qxs==1&&swx==0)
    {
        tg2();
        return 0;
    }
    else
    {
        Slowsay("һ��ǿ�ҵ�˺���г��ֵ���������");
        if(swx==1) Slowsay("��ʱ���㣬����˿�������������\n���Ц���ſ�˫�ۣ�ӭ����������");
        else Slowsay("��ʱ���㲢���ܽ�����˾޴���˺�"),Slowsay("�����ˡ�");
        Slowsay("Bad End      14");
        if(hjj[14]==0)
            Slowsay("��������-----���������");
        hjj[14]=1;
        s++; 
    }Sleep(1000); 
} 

int bd6()
{
    system("cls");
    Slowsay("��о����Լ����ڱ��죬");
    Slowsay("��ʶ��ʼ��ģ������");
    Slowsay("��Ķ������ޱȿ�����ʳ�������Ŵ�����һ�У�");
    Slowsay("���ǲ���������������øɿݣ���������ʼʳ���Լ������壡");
    Slowsay("���ţ�����ǰһ�ڣ���Ҳû������......");
    s++;
    hjj[6]=1;
    Slowsay("Bad End      6");Sleep(1000); 
} 

int bd3()
{
    system("cls");
    char ch;
    Slowsay("���õĵȴ���������ʧȥ�����ǣ�����ˡ�\n");
    Slowsay("Bad End   3\n");
    hjj[3]=1;Sleep(1000); 
    if(mp==-1)
    {
        Slowsay("�������ľ�Ԯ�Ӵ���ҵ���ʱ����˻����������ȥ");
        if(zd>0)
            Slowsay("������ͼ������У�ȴ������ǰһǹ����");
        else
        {
            Slowsay("�㱻���ǻ�����");
            Slowsay("Bad End       12");
            s++;
            hjj[12]=1;
            return 0; 
        }
        Slowsay("����ͬһ�����������֣������ž�Ԯ��");
        Slowsay("������ȫ����ȥ���㿪ʼ��������Ĵ��");
        Slowsay("Bad End           13");
        if(by==0)
            Sleep(2000),Slowsay("��������-----���ѱ��죡������"),by=1;
        hjj[13]=1;
        return 0; 
    }
    s++;
}
int bd7()
{
    s++;
    system("cls");
    Slowsay("�㣬����ҧ����");
    Slowsay("Bad End      7");
    hjj[7]=1;Sleep(1000); 
}

int bd15()
{s++;
    Slowsay("�㷢����ʼ���Щ����");
    Slowsay("�ͺ�������д��ȥ��һ��");
    Slowsay("���ּ��Ļ�������ʮ����Ϥ");  Sleep(1000);  
    Slowsay("������������Ե�ʱ����Ĳ��ӱ�ҧס��");
    Slowsay("����ǰ������Լ���������������,��Again.��");
    Slowsay("Bad End     15");
    if(hjj[15]==0)
    {
        Sleep(2000);
        Slowsay("��������-----α��......");   
    } 
    hjj[15]=1; Sleep(1000); 
}
int tgg3()
{
    system("cls");
    Slowsay("��ɱ�������꣬���Ե�������ʬ��");
    Slowsay("���翪ʼ����");
    tg3(); Sleep(1000); 
}
int bd9()
{
    s++;
    system("cls");
    Slowsay("������ǣ�����ɱ���˸�����ɥʬ�󣬷��ֵ������ﲢû��ɥʬ");
    Slowsay("�����еģ�ֻ��һ�����Ű״�ӵ�ʬ��");
    Slowsay("��ʬ����·��ڴ��У����ҵ���һ���ʼǱ�");
    Slowsay("****(�޷�����)1��****��չ*****����**");
    Slowsay("��********��*�ŵ����ˣ�������*****��*");
    Slowsay("��Щ����,*****�ķ���*****̫��***");
    Slowsay("2�ŵ�**��***����*****ǿ��Ⱦ��*****");
    Slowsay("**********************************");
    Slowsay("***ƿ������������**Ӧ��****��������");
    Slowsay("**,**����*****ʧȥ����,*****��**�ڶ�\n");
    if(mp==-1)
    {
        bd15();
        return 0;
    } 
    Slowsay("�����㿴�����Ե�ʱ����Ĳ��ӱ�ҧס��");
    Slowsay("����ǰ������Լ���������������,��Again.��");
    Slowsay("Bad End     9");
    if(hjj[9]==0)
    {
        Sleep(2000);
        Slowsay("�������-----ʵ���塤1�ź�2��");   
    } 
    hjj[9]=1;Sleep(1000); 
} 

int tg()
{
    system("cls");
    Slowsay("��֪Ϊ�Σ������ߵ�����ʱ���е�������һ˲�䷢���˱仯");
    Slowsay("�㲻֪������仯�����������ֻ֪�������ڵ�����ʮ��Υ��");
    Slowsay("����������粻����ʵ��");
    Slowsay("��������г����������ʱ������ǰ�����磬������");
    Slowsay("�ڴ�ͬʱ������������������Ժ�");
    Slowsay("��������ֻ�ǻ����ˣ��Ȿ�������ļ���");
    Slowsay("������һ��ʼ��һЩ��ٵļ������滻");
    Slowsay("�Ӽ����У����֪���ʱ������һ��vr��Ϸ");
    Slowsay("����������������Ϸ��npc");
    Slowsay("�����Ϸ�ų����ų�ǿ�Ĵ����");
    Slowsay("���ڷ��۵������������");
    Slowsay("������Ϸ�����˲��𰡡�,���������ţ�������һ�ΰɡ�");
    Slowsay("...�ǰ���û����һ��ֻ����Ϸ����Ϸ��............");Sleep(1000); 
    Slowsay("���ڲ��е��㣬��ʼ���գ���û�������ۡ�");
    Slowsay("---------------��Ϸ��������ͨ��-------------"); 
    cdd=0;
    tongguan=1;Sleep(1000); 
}
int cg()
{
    system("cls");
    Slowsay("��о���Υ�͸��ڲ��ϼ���");
    Slowsay("�������������ʵ��");
    Slowsay("����������ֻ��һ���뷨\n");Sleep(1000); 
    Slowsay("����ȥ��Խ��Խ�ã�����"); Sleep(1000); 
}
int cg2()
{
    system("cls");
    system("Color C");
    Slowsay("Υ�͸��ڴ�ʱ�Ѿ��ۼ����˶���\n");
    Slowsay("��������������һ��\n");
    Slowsay("1.��ô����һ����  ɱ������\n");
    Slowsay("2.��ô����һ����  �Ž�����\n");
    x=read();
    if(x==1)
        Slowsay("������ʬ����flag����������ȥ��ͨȫ 15 badend��"),swx=1,qxs=1; 
    else
        Slowsay("�������㻹��û����......�����������������\n\n�� A  G  A  I  N   . ��"); 
    system("Color F");Sleep(1000); 
}
int Swx()
{
    system("cls");
    Slowsay("������������������������������");
    Slowsay("�ҡ������Ѿ�����ˡ�����");
    Slowsay("���е������������Ҷ�������һ���ˡ�����");
    Slowsay("�ҡ�����һֱ��ֻɥʬ�ɡ�����");
    Slowsay("���۱��򵹶��ٴΡ������Ҷ���վ��������������");
    Slowsay("ֻҪ������ͨ�Ľ�֡������ұ�һ����ͨ����������");
    Slowsay("ֻҪ������ɱ���ˡ������ұ�һ����ɱ����������");
    Slowsay("ֻҪ������֪�������ࡣ�����ұ�һ����֪������");
    Slowsay("�ҡ������Ѿ�������ǰ���Ǹ�ų�����ܵ����ˡ�����");
    Slowsay("��һ�֡������ҡ�����Ҫ��Ϊ��������\n");
    Slowsay("��ʵ�����У�Ϊ���߷������Ƶ�˻��");
    Slowsay("������Աһ���䱸��ʵ�飬�������׶Σ���");
    Slowsay("------------�ռ�����-ʬ���߿�����------------");cdd=0;
}
int bd10()
{
    system("cls");
    Slowsay("�㷢������һ������");
    Slowsay("������������ѡ�����������");
    Slowsay("֮���ÿһ�춼ʮ�ֵ���");
    Slowsay("���Ѱ�����ʣ�Ȼ������˻ؼ�˯��");
    Slowsay("Ӧ����������");
    Slowsay("Ҳ���");
    Slowsay("Bad End     10");
    hjj[10]=1; Sleep(1000); 
}
int hd5()
{
    Slowsay("û��ϵ�ģ�һ�ж����ȥ��");
    Slowsay("������˵��");
    Slowsay("���ƺ��о�����������⣬һ��һ�����㿿��");
    Slowsay("������ı�ס����");
    Slowsay("�һᱣ�������"); Sleep(1000); 
    Slowsay("Happy End-----��Խ���ֵ�gay~");  Sleep(1000); 
}
int sswj()
{
Save();
    system("cls");
    int w=0;
    mp=0;
    if(tongguan==1&&zjj[4]==0)
    {
        Slowsay("��⵽����ͨ�أ��Ƿ���ȡ������Ʒ\n");
        Slowsay("1.��ȡ");
        Slowsay("2.����ȡ");
        while(true)
        {
            x=read();
            if(x==1)    
                mp=-1; 
            if(x==2)
            {
                td4();
                return 0;
            }
            break;
        }
    }
    else if(tongguan==1)
    {
        Slowsay("��⵽����ͨ�أ�����ȡ������Ʒ\n");mp=-1;
    }
    char ch;
    if(cdd==1)
    {
        Slowsay("�Ƿ��ȡ�浵\n");
        Slowsay("1.��ȡ\n");
        Slowsay("2.����ȡ\n");
        x=read();
        if(x==1)
        {
            sw=sw1;
            zd=zd1;
            sn=sn1;
            mz=mz1;
            mp=mp1;
            goto cddd1;
        }
    }
    system("cls");
    Slowsay("��ͻ����Σ������ʱ���������ڼ���\n");if(vv==0) ch=_getch();
    Slowsay("����10�����ʿ��Է��䵽�ӵ���ʳ����"); 
    if(swx==2) Slowsay("...\n\n���ǣ��������Ѿ������پ���ʳ���ȱ��ɥʬС���ˣ�\n\n�ң�Ӧ���������������\n"),zd=99999,sw=99999;
    else{if(vv==0) ch=_getch();
    int x,y;
    qiang=0;gun=0;zd=0;sw=0;mz=0;mzzd=0;sn=0;mzhg=0;
    Slowsay("\n���������ѡ��(�˴����������س�������5 5 )\n");
    while(true)
    {
        scanf("%d%d",&x,&y);
        zd=x;sw=y;
        if(x+y!=10||x<0||y<0)
        {
            if(x==666666&&y==5201314)
            {
                Slowsay("�����ؼ�\n");
                Slowsay("��������������Ҫ���ӵ�����ʳ���������ޣ�999 )\n");
        scanf("%d%d",&x,&y);
        zd=min(x,999);sw=min(y,999);
                break;
            }
            Slowsay("����������\n");
            w++;
            if(w>5)
            {
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_GREEN);
                Slowsay("�������ˣ���ֻ�ǵ�һ��ѡ�����\n"), 
                Slowsay("�б�Ҫ��ôƤ��\n"),
                Slowsay("�Զ�����ʳ��3���ӵ�7��\n");
                if(vv==0) ch=_getch();
                sw=3,zd=7; 
                break;
            }
        }
        else break;
    }
    }
    Slowsay("��ļ����Ǹ���Ϊ��ȫ�ĵط��������ѡ��������ҵ����ʻ���ȥ�ھӼҿ���\n");
    if(vv==0) ch=_getch();
    Slowsay("1.���ڼ���\n");
    Slowsay("2.ǰ���ھӼ�\n"); 
    while(true)
    {
        x=read();
        if(x!=1&&x!=2)
            Slowsay("����������\n");
        else
            if(x==1)
            {if(swx==2) {Slowsay("������Ϊʲô�һ����ڼ����");break;}
            else {
                Slowsay("�ڶ�¥���㷢����һЩʳ��ʳ��+3\n");
                if(vv==0) ch=_getch();
                Slowsay("�ڼ������һҹ��ʳ��-1\n");
                sw=sw+2;
                break;
            }}
            else
            {if(swx==2) {Slowsay("�ɶ�Ϊʲô�ھӼ���û���ˣ���");break;}
            else {
                Slowsay("��ǰ���ھӼҵ�·�ϣ���������ɥʬ\n");
                if(vv==0) ch=_getch(); 
                if(zd<1) 
                {
                    Slowsay("�㳯������һǹ������ǹ��û���ӵ����㱻��ҧ����\n");
                    if(vv==0) ch=_getch(); 
                    hjj[11]=1;
                    Slowsay("Bad End      11\n");
                    s++;
                    if(vv==0) ch=_getch();
                    Slowsay("������˵һ�䣬һ���ӵ������������������ˣ����������");
                    return 0;
                }
                else
                {
                    Slowsay("���������е�ǹ�����������������ӵ�-1\n");
                    zd=zd-1;
                    if(vv==0) ch=_getch();
                    Slowsay("�ھӼ��ﲻ֪Ϊ�β�û���ˣ�������ϸ����������һ�����У�������4���ӵ�\n");
                    zd+=4;
                    if(vv==0) ch=_getch();
                    Slowsay("���ھӼҹ���һҹ��ʳ��-2\n");
                    sw=sw-2;
                    if(sw<0)
                    {
                        esl();
                        return 0; 
                    } 
                }
                break;
            }}
    }
    if(vv==0) ch=_getch();
    qp();
    Slowsay("��������⸽����һ���̳��������\n");
    if(vv==0) ch=_getch();
    Slowsay("1.ǰ���̳�\n");
    Slowsay("2.��������\n");
    Slowsay("3.����������\n");
    while(true)
    {
        x=read();
        if(x!=1&&x!=2&&x!=3)
        {
            Slowsay("����������\n");
            continue;
        }
        if(swx==2&&x==1) {system("cls"),Slowsay("��ѭ�Ųд�ļ���ǰ���̳����ҵ����ʺ����������͵��·������Լ���������ȥ��\n\n"),mz=1;break;}
        else if(swx==2&&x==2) {system("cls"),Slowsay("�㵽�����ߣ����˼�ɱ��ͻ�����������Ѫ����Ž����˽ֵ���\n�ҽ������������죬��ͬĩ��һ�㡣\n��վ��ʬɽ�Ͽ�Ц����м�ڿ���Щ��С����ꡣ\n\nȻ������˿��û��ע�⣬һ����С����ӰԶԶ�Ŀ������㣬��������֮زز��\n\n"),mz=10086;break;}
        else if(swx==2&&x==3) {system("cls");Slowsay("����һ�����������������ż��������ڵ�������������\n������������ɱ�������������Ĵ��\n���������ӱ��������Ҵ��߻��ء�\n��һ�죬������Ѫ��Ϊ��Ⱦ��صĺ�������һ������⡣\n\n");Sleep(1000);return 0;} 
        else if(x==3)
        {
            if(sw<2) 
            {
                esl();
                return 0;
            }
            Slowsay("������������ĥ�����־�����㻹�Ǽ����������ʳ��-2\n");
            sw=sw-2;
            if(vv==0) ch=_getch();
            Slowsay("֮���ÿһ���㶼������������һ���ڼ��еȴ���Ԯ\n");
            if(vv==0) ch=_getch();
            Slowsay("�ڹ��˺þ�֮��\n");cout<<mp; 
            if(sw<6)
            {
                esl();
                return 0;
            }
            x=rand()%2;
            if(x==1&&mp==0) {hd1();return 0; }
            else {bd3();return 0;}
        }
        else if(x==2)
        {       
            int xx=rand()%3;
            if(xx!=0)
            {
                Slowsay("�ڵ������ߵĹ����У�������������������ص�ɥʬ,�ӵ�-2\n");
                if(zd<2)
                {
                    mzd();
                    return 0;
                }
                zd=zd-2;
            }
            else
            {
                Slowsay("�ڵ������ߵĹ����У���������һ����Ϊս���ķ���\n");
                if(vv==0) ch=_getch();
                Slowsay("��ѭ������ζ�������ҵ��˾��Ӳ����ĵ�ҩ��,�ӵ�+6\n");
                zd+=6;
            }
            break;
        }
        else if(x==1)
        {
            if(zd<4)
            {
                mzd();
                return 0;
            }
            Slowsay("��ǰ���̳��Ĺ����У���������ɥʬ,�ӵ�-4\n");
            zd=zd-4;
            if(vv==0) ch=_getch();
            Slowsay("�����̳�������ʳ�����ӵ�,ʳ��+3,�ӵ�+2\n"); 
            sw=sw+3;zd=zd+2;
            break;
        }
    }
    if(mz!=10086)
    {Slowsay("���ڻؼҵ�·�Ϸ�����һ��Ů�Ҵ���\n");
    if(vv==0) ch=_getch();
    Slowsay("����ͼ������Ҫʳ����ѡ����\n");
    Slowsay("1.����\n");
    Slowsay("2.����2��ʳ��\n");
    Slowsay("3.����2���ӵ�\n");
    Slowsay("4.����һǹ\n");
    while(true)
    {
        x=read();
        if(x<1||x>4)
        {
            Slowsay("���������롣\n");
            continue;   
        }   
        if(x==1)
        {
            Slowsay("�������������ˡ�\n");
            if(vv==0) ch=_getch();
        }
        if(x==2)
        {
            if(sw<2)
            {
                Slowsay("ʳ�ﲻ��\n");
                continue;
            }
            sw=sw-2;
            mzhg++;
            Slowsay("���ʳ��-2�����Ӻøж�+1\n");
            if(vv==0) ch=_getch();
        }
        if(x==3)
        {
            if(zd<2)
            {
                Slowsay("�ӵ�����\n");
                continue;
            }
            mzzd=1;
            Slowsay("��������������ӵ��������뿪��\n"),zd=zd-2;
            if(vv==0) ch=_getch();
        }
        if(x==4)
        {
            if(zd<1)
            {
                Slowsay("�ӵ�����\n");
                continue;
            }
            zd=zd-1;
            Slowsay("��һǹɱ�������ӣ���������ʬ�����ҵ���4��ʳ��\n");
            sw=sw+4;
            mzhg=-1;
            if(swx==2) Slowsay("��Ե������ӵ�ʬ�壬�����˼���ȣ�\n"),mzhg=-10086;
        }
        if(swx==2&&x!=4) Slowsay("�㿴�����ӵı�Ӱ�����п�Ц\n"),mzhg=10086;
        break;
    }}
    Slowsay("�ֹ���һҹ�����ʳ��-2\n");
    if(vv==0) ch=_getch();
    qp();
    sw=sw-2;
    if(sw<0)
    {
        esl();
        return 0; 
    }
    if(mzhg==1) Slowsay("�Ǹ����������ҵ����㣬��������������ǵ��Ҵ��߻���\n");
    else Slowsay("���ڸ���������һ���Ҵ��߻���\n");
    if(swx!=2){
    Slowsay("��ǰ�����ص�;�У���������ɥʬ\n");
    Slowsay("����ս���ˣ�����ɥʬ����ƽ���һ���̵�\n");
    Slowsay("�ſڵ�ɥʬԽ��Խ�࣬��ѡ��\n");
    Slowsay("1.ɱ��ȥ\n");
    Slowsay("2.������\n");
    while(true)
    {
        x=read();
        if(x<1||x>2)
        {
            Slowsay("����������\n");
            continue;
        }
        if(x==1)
        {
            int res=0;
            if(mzhg>0)
                res=1;
            else res=3;
            if(zd<res)
            {
                mzd();
                return 0;
            }
            zd=zd-res;
            printf("��������һЩ�ӵ����˳�ȥ���ӵ�-%d\n",res);
            if(mzzd==1&&mp==-1)
            {
                Slowsay("��������ɱ����ɥʬ��ʬ�����ҵ���������ʣ��ӵ�+7��ʳ��+3\n");
                zd=zd+7;sw=sw+3;
                mz=1;
                break;
            }
            x=rand()%5;
            if(res==1&&x!=3)
                Slowsay("����Ϊ�˰���ͻΧ����ɥʬҧ����Ȼ����ɱ�ˡ�\n"),mzhg=-1; 
            if(x==3&&res==1)
            {
                td3();
                return 0;
            }
        }
        else
        if(x==2)
        {
            if(zd<5)
            {
                mzd();
                return 0;
            }
            zd=zd-5;
            Slowsay("����������̵���ֱ��ɱ��������������ɥʬ,�ӵ�-5\n"); 
            if(mzhg==1)
            {
                Slowsay("�������̵��з�����һ�������ӵ���ǹ���ӵ�+10086\n");
                zd=10086;
                if(vv==0) ch=_getch();
                Slowsay("���������ڷ��һ��ܵ�ʱ��մ��ɥʬѪ�Ļ��ܻ���\n");
                Slowsay("������ɱ��\n");
                mzhg=-1; 
            }
        }
        break;
    }}
    if(vv==0) ch=_getch();
    qp();
    Slowsay("������������Ҵ��߻���\n");
    if(mz==10086) {system("cls");Slowsay("������һλ��������Ĵ�������ǿ������ս��\nÿ���˶��ھ��Լ���Ŭ��ȥ��������\n����ս����һ��������\n�������챻���ŭ�����Դ�\nû��һ���˷���ս����û��һ��������ϣ��\n\n����漣������\n\n�ڻ��صķ����У����ʬ����صĵ��¡�\n\n");s++;Sleep(1000);return 0;}
    Slowsay("������ص������ʾ�������ӵ����������е�ʳ��\n");
    printf("�㻹��%d��ʳ�%d���ӵ�\n",sw,zd);
    if(vv==0) ch=_getch();
    Slowsay("����������Ҫ���ӵ���(0-9)\n");
    while(true)
    {
        x=read();
        if(x<0||x>sw)
        {
            Slowsay("����������\n");
            continue;
        }
        sw=sw-x;
        zd=zd+x;
        if(x>=1)
        {
            Slowsay("����ܿ��������ṩϡȱ��ʳ��������1���ӵ�\n");
            zd=zd+2;
        }
        break;
    }
    if(vv==0) ch=_getch();
    qp();
    Slowsay("�ֹ���һ�죬ʳ��-2");
    sw=sw-2;
    if(sw<0)
    {
        esl();
        return 0;
    }
    if(vv==0) ch=_getch();
    system("cls");
    Slowsay("��������ϣ��������������\n");
    Sleep(500);
    Slowsay("���ѡ����\n");
    Sleep(500);
    system("Color C");
    Slowsay("1.������");
    Slowsay("2.�뿪");
    while(true)
    {
        x=read();
        if(x<1||x>2)
        {
            Slowsay("����������\n");
            continue;
        }
        system("Color F");
        if(swx==2&&x==1){system("cls");Slowsay("��һ���ºڷ�ߵ�ҹ��������̲�סϮ����Ӫ�ء�\n�������챻�����з��\n������ǿ������ս��\nÿ���˶��ھ��Լ���Ŭ��ȥ��������\nû��һ���˷���ս����û��һ��������ϣ��\n��������ʧ���ˡ�\n�ڻ��صķ����У�Ӣ���ǵ�ʬ����صĵ��¡�\n\n�����Ц��������һ�С�\n\n");Sleep(1000);return 0;}
        else if(x==1)
        {
            if(mzhg>-1) hd2();
            else hd3(); 
            return 0;
        }
        else if(x==2)
        {
            Slowsay("�����\n");
            Slowsay("1.�����뿪\n");
            Slowsay("2.��ͣ��һ��\n"); 
            while(true)
            {
                x=read();
                if(x<1||x>2)
                {
                    Slowsay("����������\n");
                    continue;
                }
                if(x==1) break;
                if(x==2)
                {
                      if(vv==0) ch=_getch();
                     qp();
                    Slowsay("������ص������ʾ�������ӵ����������е�ʳ��\n");
                    printf("�㻹��%d��ʳ�%d���ӵ�\n",sw,zd);
                    if(vv==0) ch=_getch();
                    Slowsay("����������Ҫ���ӵ���\n");
                    while(true)
                    {
                        x=read();
                        if(x<0||x>sw)
                        {
                            Slowsay("����������\n");
                            continue;
                        }
                        sw=sw-x;
                        zd=zd+x;
                        if(x>=3)        
                        {
                            Slowsay("����ܿ��������ṩϡȱ��ʳ��������3���ӵ�\n");
                            zd=zd+3;
                        }
                        break;
                    }
                    sw=sw-2;
                    if(sw<0)
                    {
                        esl();
                        return 0;
                    }
                    Slowsay("�ֹ���һҹ��ʳ��-2\n"); 
                }
                break;
            }
            Slowsay("�����뿪��ʱ��һ���������˹�����\n");
            Slowsay("��˵������Ҫ����һ����\n");
            Slowsay("1.������\n");
            Slowsay("2.������\n");
            while(true)
            {
                x=read();
                if(x<1||x>2)
                {
                    Slowsay("����������\n");
                    continue;
                }
                if(x==2)
                {
                    Slowsay("�����������뿪��");
                    if(swx!=2) Slowsay("��������Զ�ˣ���ŷ���\n\n�ڸոյĽӴ��У���͵���������е��ӵ�\n");
                    else Slowsay("\n������Զ����ŷ��֣�����һֱ��Ц�Ÿ���������\n"),sn=1;
                    zd=0;
                }
                if(x==1)
                {
                    Slowsay("��ѡ��������һ����\n");
                    Slowsay("���꽫�����ϴ��ŵ�һ��ʳ�ｻ������\n");
                    sw=sw+1;
                    Slowsay("ʳ������+1���������\n");
                    sn=1;
                }
                break;
            }
        }
        break;
    }
    if(vv==0) ch=_getch();
    qp();
    printf("����·�ߵ�һ��û�˵ķ��������һҹ,ʳ��-%d\n",2+sn);
    sw=sw-2-sn;
    if(vv==0) ch=_getch();
    if(sn==1&&swx==2)
    {
        Slowsay("\n1.ɱ�����꣬��ʱû�˿�����ֹ�㣡\n");
        Slowsay("2.�Ҿ�����������ǰһֱ��������\n");
        x=read();
        if(x==1){Slowsay("���겻���ˣ��ѵ���������......\n\n��һ��ͷ�����꿩��Ц��ҧס��Ĳ���\n\n��Ӧ�õ�������ʱ�����ְ�.....\n\n");s++;return 0;}
    }
    if(sw<0)
    {
        esl();
        return 0;
    }
    Slowsay("�Ƿ�浵��\n");
    Slowsay("1.�浵����¼��ǰ���ȣ�ֻ����һ���浵��\n");
    Slowsay("2.����\n");
    x=read();
    if(x==1)
    {
        cdd=1;
        sw1=sw;
        zd1=zd;
        mp1=mp;
        mz1=mz;
        sn1=sn;
        Slowsay("�浵�ɹ�");
    }
cddd1:
    qp();
    if(sn==1)
    {
        vv=0;
        Slowsay("����һ����ͱ���������ˣ�\n");
        if(vv==0) ch=_getch();
        Slowsay("���ڴ����·�����һ�䷽���棬ʳ��+8\n");
        sw=sw+8;
        Slowsay("����������Ҫ�����������\n");
        Slowsay("1.��ǹ����\n");
        Slowsay("2.�Ѽ񵽵�ˮ�ܸ���\n");
        Slowsay("3.ʲô��������\n");
        while(true)
        {
            x=read();
            if(x<1||x>3)
            {
                Slowsay("����������\n");
                continue;
            }
            if(x==1) gun=0,qiang=2;
            if(x==2) gun=2,qiang=1;
            if(x==3) gun=0,qiang=1;
            break;
        }
    }
    else
    {
        Slowsay("���ڱ����﷢���˼����ɿ���\n");
        if(vv==0) ch=_getch();
        Slowsay("ϣ�����ǻ�û���ڰ�,ʳ��+3\n");
        sw=sw+3;
    }
    if(vv==0) ch=_getch();
    Slowsay("��������������һ�Ҵ��̳�\n");
    Slowsay("�����\n");
    Slowsay("1.����̽��1¥\n");
    Slowsay("2.����̽��2¥\n");
    if(sn==1)
    {
        Slowsay("3.������һ��̽��2¥");
    }
    while(true)
    {
        x=read();
        if(x<1||x>3)
        {
            Slowsay("����������\n");
            continue;
        }
        if(x==1)
        {
            Slowsay("����һ¥������һЩ�ӵ����ӵ�+3\n");
            zd=zd+3;
            Slowsay("��ֵ��ǣ�һֻɥʬ��û�п���\n");
            if(vv==0) ch=_getch(); 
            if(sn>0)
            {
                if(qiang==2)
                {
                    Slowsay("����������¥ʱ��������һ��ʬ��\n");
                    Slowsay("����͵�����ʬ���м䣬����ǰ�ֻ���������ǹ\n");
                    Slowsay("���ǹ���˻��������������ʬ�����淢����һ��ѹ������\n");
                    Slowsay("ʳ��+10086\n");
                    if(vv==0) ch=_getch();
                    sw=10086;
                    if(sw>10000&&zd>9000) 
                    {
                        td();
                        return 0;
                    }
                    sn=0;
                    qiang=1;
                }
                else
                {
                    Slowsay("����������¥ʱ�������������ʬ��\n");
                    if(vv==0) ch=_getch();sn=0;
                    Slowsay("������������е�ǹ���͵�һ��ͷ\n");
                    Slowsay("���ܴ�����ɥʬ����ӿ��\n");
                    if(vv==0) ch=_getch();
                    zd=zd-5;
                    if(zd<0)
                    {
                        mzd();
                        return 0;
                    }
                    Slowsay("��ɱ������Щɥʬ���ӵ�-5\n");
                    if(vv==0) ch=_getch();
                    Slowsay("���ڶ�¥�ҵ���ʳ�ʳ��+3\n");
                    sw+=3;
                }
            }
        }
        if(x==2)
        {
            Slowsay("�������˶�¥����֮������ɥʬ��Ȼ����Ӱ�дܳ�\n");
            if(qiang==2)
            {
            Slowsay("������û��ǹҲ�����ֿ�����ɥʬ������ʵ��̫�ࡣ\n");
                mzd();
                return 0;
            }
            if(vv==0) ch=_getch();
            zd-=5;
            if(zd<0)
            {
            Slowsay("�����㾡���ֿ�����ɥʬ������ʵ��̫�ࡣ\n");
                mzd();
                return 0;
            }
            Slowsay("��ɱ������Щɥʬ���ӵ�-5\n");
            if(vv==0) ch=_getch();
            Slowsay("���ڶ�¥�ҵ���ʳ�ʳ��+3\n");
            sw+=3;
            if(sn==1)
            {
                Slowsay("������һ¥�ҵ����ӵ����ӵ�+3\n");
                zd=zd+3;
            }
        }
        if(x==3&&sn==1)
        {
            system("cls");
            Slowsay("���������˶�¥\n"); 
            if(vv==0) ch=_getch();
            system("Color C");
            Slowsay("��֮������ɥʬ����Ӱ�дܳ�");
            Slowsay("�������Ǿ����ֿ�����ɥʬ������ʵ��̫�ࡣ");
            if(gun!=2&&qiang!=2)
            {
                Slowsay("û�����������걻����ҧ����");
                if(mp==-1&&mz==0)
                {
                    td5();
                    return 0;
                }
                sn=0;   
            }
            Slowsay("����һֻɥʬ���㲻ע��嵽������Ա�");
            if(gun==2) Slowsay("������Ҫ��ҧ����ʱ�������ӳ������е�ˮ��\n����������");
            else if(qiang!=2)
            {
                zd=zd-3;
                if(zd<0)
                {
                    mzd();
                    return 0;
                }
                Slowsay("���æ��ͷ��ǹ��������ֻɥʬ,�ӵ�-3");
            }
            zd=zd-3;
            if(qiang==2||zd<0)
            {
                system("Color F"); 
                mzd();
                return 0;
            }
            system("Color F"); 
            Slowsay("������һ����ս����������սʤ������ɥʬ���ӵ�-3");
            if(vv==0) ch=_getch();
        }
        break;
    }
    if(vv==0) ch=_getch();
    qp();
    if(vv==0) ch=_getch();
    printf("�ֹ���һҹ��ʳ��-%d\n",sn+2);
    sw=sw-2-sn;
    if(sw<0)
    {
        esl();
        return 0;
    }
    qp();
    Slowsay("�����ڳ��ŵ�ʱ��\n");
    Slowsay("��������һ�����˹�\n");
    Slowsay("1.��ǹ������\n");
    Slowsay("2.��ʳ�����\n");
    while(true)
    {
        x=read();
        if(x<1||x>2)
        {
            Slowsay("����������\n");
            continue;
        }
        if(x==1)
        {
            zd=zd-1;
            if(zd<0)
            {
                bd7();
                return 0;
            }
            Slowsay("��һǹ���������������ӵ�-1\n");
            if(sn==0) break;
            Slowsay("�ڴ����˹�֮�����Ȼ�����������ɫ��̫��\n");
            if(vv==0) ch=_getch();
            Slowsay("ԭ������������̳��У�������ͱ�ҧ��һ��");
            Slowsay("��һֱ�����㣬����˵����");
            Slowsay("��ʱ�����ŵ���Ѫ��ζ��������ʬ�壬�Ѿ��̲�ס�����ٱ����ˣ���");
            Slowsay("�����\n");
            Slowsay("1.ɱ����\n");
            Slowsay("2.��ɱ��\n");int a3=0;
            if(gjj[4]==1&&zd<4)
            {
                Slowsay("3.������\n");a3=1;
            }
            while(1)
            {
                x=read();
                if(x<1||x>3||(x==3&&a3==0))
                {
                    Slowsay("����������\n");
                    continue;
                }
                if(x==1)
                {
                    if(swx==2)
                    {
                        if(mzhg<-1000) tgg3();
                        else Slowsay("\n��ɱ�һ���ĺ���......��\n\n���꿩��Ц�ŵ����������еĹ���\n\n����Ϊ�㻹����һ�������ɥʬ......��"),Sleep(1000),mzd();
                        return 0;
                    }
                    if(vv==0) ch=_getch();
                    if(mp==-1&&mz==0)
                    {
                        Slowsay("��ֵ��ǣ���ֱ�����������\n");Sleep(1000); 
                        sn=0;
                        td5();
                        return 0;
                    }
                    else if(mp==-1&&mz!=0)
                    {
                        Slowsay("ͻȻ�����ӳ����ˡ�\n");
                        Slowsay("�������������������������겫�����������ӵ��������󣬾�Ȼ���ѹ��ס�����꣡\n");
                        Slowsay("����ľ���Ŀ���£������Ƥ�������䵭�����±���ˡ��ˡ���\n");
                        Slowsay("��ʱ�����ע�⵽���������һֱ���ŵ�ɳ�ƣ���ͬ�ͺ�һ��\n");
                        Slowsay("����û�¡�����˵��\n");
                    }
                    else
                    {
                    system("Color C");
                    Slowsay("������������ǹ���ӵ���������������\n");
                    Slowsay("��ʮ�־��֣�������к�����еĵ�ҩ\n");
                    Slowsay("��û���õġ������꿩��Ц�������߽���\n");
                    Slowsay("�������˿�ȴ�����ۿɼ����ٶ����ϣ�\n");
                    Slowsay("��ô���ܣ���ô���ܣ���ô����......\n");
                    system("Color F");
                        mzd();
                        if(zjj[9]==0)
                        {
                            Slowsay("�������-----�޵б��죡������\n");Sleep(1000);
                            zjj[9]=1;
                        }
                        return 0;
                    }
                }
                if(x==2)
                {
                    system("Color C");
                    Slowsay("�㿴���������\n");
                    Slowsay("��ֵ��ǣ��������û����������ɥʬһ���������˹���\n");
                    Slowsay("���Ƕ���ǽ��ɪɪ����\n");
                    Slowsay("���������߹�ȥ\n");
                    Slowsay("�������߽���ʱ������ͻȻ����\n");
                    Slowsay("�ݺݵ�ҧס������ֱ�\n");
                    Slowsay("���æ��ǹ������������Ϊʱ����\n");
                    system("Color F");
                    sn=0;
                    if(sw>=6){td2();return 0;}
                    else{bd6();return 0;}
                }
                break;
            }
            if(x==3&&gjj[4]==1)
            {
                gjj[5]=1;
                hd5();
                return 0;
            }
        }
        if(x==2)
        {
            sw=sw-1;
            if(sw<0){bd7();return 0;}
            Slowsay("����һ��ʳ����������������ʳ��-1\n");
        }
        break;
    }if(swx==2)
    {system("cls");if(sn==1) Slowsay("����ı���ĺ�ͻȻ������Ϊɥʬ����û���ܵ�����\n���ǽ��һ������������\nֻ�ǣ��������ദ��Խ�ã����Խ�����ܵ�����ǿ��\n��ֻ������ɱ�ĸ��������档\nӦ����������"),Sleep(1000),Slowsay("\n\n���Ҵ���˻��ᡱ\n"); 
    else Slowsay("�������������ĵ���ɱ��һ�У�\n�ڽ������ļ���������ɵ�ɱ���˳������е�����\n֮����ֻ�������ε����������������������\nӦ����������\n"),Sleep(1000),Slowsay("\n�����ߴ���·����");
    Sleep(1000);return 0;} 
    if(vv==0) ch=_getch();
    if(sn==1&&sw>=4&&gun==2&&zd>5){hd4();return 0;}
    if(sn==1)
    {
        Slowsay("�ֹ���һ�죬ʳ��-2\n");
        sw=sw-2;
        if(sw<0){esl();return 0;}
        if(vv==0) ch=_getch();
            system("cls");
        Slowsay("�������ϣ��㷢�����겻����\n");
        Slowsay("�����\n");
        Slowsay("1.ȥѰ����\n");
        Slowsay("2.��ȥ����\n");
        while(true)
        {
            x=read();
            if(x<1||x>2)
            {
                Slowsay("����������\n");
                continue;
            } 
            if(x==1)
            {
            system("cls");qp(); 
                Slowsay("��ͨ����˿��һ·׷�٣�������һ������ǰ\n");
                Slowsay("��·�ϣ���������ɥʬ���ӵ�-2\n");
                zd=zd-2;
                if(zd<0)
                {
                    mzd();
                    return 0;   
                }
                Slowsay("�����\n");
                system("Color C");
                Slowsay("1.���ţ��������\n");
                Slowsay("2.���Ŀ��ţ�Ǳ�����\n");
                Slowsay("3.Ѱ�����������\n");
                while(true)
                {
                    x=read();
                    if(x<1||x>3)
                    {
                        Slowsay("����������\n");
                        continue;
                    }
                    if(x==1)
                    {
                        int xx=rand()%4; 
                        Slowsay("�������òŷ������Ｘ��������ɥʬ��");
                        Slowsay("ɥʬ�ƺ����㾪�ѣ���ͬ��Х������ӿ����");
                        system("Color F");
                        if(zd>6) Slowsay("��ô���£�����һ·��ս���������˵�����"),zd-=6,bd9();
                        else if(xx==0) Slowsay("���˵��ǣ����˺�Ľ������˵����ҵİ��ţ�Thanks God!"),bd9();
                        else Sleep(1000),mzd();
                        return 0;
                    }
                    if(x==2)
                    {
                        int xx=rand()%6;
                        Slowsay("�������òŷ������Ｘ��������ɥʬ��");
                        system("Color F");
                        Slowsay("��ô���£����㺦�µö���ԭ�أ���ֵ������ǲ�û������������ֻ��ƣ���Ŀ����㡣");
                        Slowsay("����һ����ɥʬ�Ǹ���������Σ����ֶϽ��߲�������");
                        Slowsay("��һ������Щɥʬ�Ǳ���ֵĻ�������������̤������һ����");
                        Slowsay("����ŵ��ӿ���һ��ɥʬ����������ͷ������ģ�����ּ�");
                        Slowsay("��21.7.29��ʧ�ܡ�");Sleep(1000); 
                        Slowsay("˲�䣬�Ǹ�ɥʬ���ֵ���סͷ�ϵ��֣�������ֵĺ�����");
                        Slowsay("����ɥʬ��ͬ����ŭ����Х������ӿ����");
                        if(zd>6) Slowsay("��ô���£�����һ·��ս���������˵�����"),zd-=6,bd9();
                        else if(xx==0) Slowsay("���˵��ǣ����˺�Ľ������˵����ҵİ��ţ�Thanks God!"),bd9();
                        else Sleep(1000),mzd();
                        return 0;
                    }
                    if(x==3)
                    {
                        system("Color F");
                        Slowsay("������ոյĴ�֣��������ʶ���ĵ�������ͷ������");
                        Slowsay("......�����������һ������......");
                        Slowsay("......�㱻��ʳ�Ĺ�����׷���ܹ���������֣���ͣ���ӳ�ʳ�����������ǵĹ���......");
                        if(sw>5) Slowsay("���ڣ�����ȫ�������ſ�����˵��ϡ�\n��ͷ����ͬ���������˻�һ�������������һ�����εĵص���ǰ......"),sw-=5,bd9();
                        else bd7();
                        return 0;
                    }
                    break;
                }
            }
            break;
        }
    }
    qp();
    if(vv==0) ch=_getch();
    if(mz==1&&sn==1&&swx==0){td6();return 0;}
    Slowsay("�ֹ���һ��,ʳ��-2");
    sw=sw-2;if(sw<0){esl();return 0;}
    Sleep(500);
    Slowsay("����ɥʬ���ӵ�-3");
    zd=zd-3;if(zd<0){mzd();return 0;}   
    Sleep(500);
    Slowsay("�ֹ���һ��,ʳ��-2");
    sw=sw-2;if(sw<0){esl();return 0;}
    Sleep(500);
    Slowsay("����ɥʬ���ӵ�-2");
    zd=zd-2;if(zd<0){mzd();return 0;}   
    Sleep(500);
    if(ccg==1){tg(); return 0;}
    else{bd10();return 0;}
}
int main()
{
    srand(time(0));
    Read();
    int go=0;
    while(tongguan1!=2)
    {
        int v=0;
        char ch;
        mp=0;
        if(go==1){
        Sleep(1000);
        if(vv==0) ch=_getch();
        system("cls");Save();}go=1;
        Slowsay("1.������Ϸ\n");
        Slowsay("2.�鿴�ɾ�\n");
        Slowsay("3.�鿴����(���ȫ��������ͨ����Ϸ)\n");
        Slowsay("4.���һ���������ʾ\n");
        Slowsay("5.��Ϸ���\n");
        Slowsay("6.����ģʽ\n");
        Slowsay("7.�˳���Ϸ\n");
        x=read();
        if(x==1)
        { 
            sswj();
            if(s>1&&swhm==0)
            {
                swhm=1;
                Slowsay("�����˰�......");
                Slowsay("���Ѿ��ǵڼ�������......");
                Slowsay("һ����͵������Ӷ��ߴ���");
                Slowsay("������÷�����");Sleep(1000);
                Slowsay("�������-----������");
            }
        } 
        if(x==2)
        {
            int v1=0;
            system("cls");
            if(tongguan1==2) Slowsay("\n��ͨ���ռ�����\n");
            if(tongguan1==1) Slowsay("\n��ͨ�ؽ��׾��飨���ײ���Ҫ���ռ�������������\n");
            if(tongguan==1) Slowsay("\n��ͨ�ػ�������\n");
            int v=0;
            Slowsay("\nHappy Bnd ���\n");
            if(gjj[1]==1) Slowsay("�������\n");else Slowsay("δ���\n"); 
            if(gjj[2]==1) Slowsay("���ɾ���\n");else Slowsay("δ���\n"); 
            if(gjj[3]==1) Slowsay("Ӣ�۲���\n");else Slowsay("δ���\n"); 
            if(gjj[4]==1) Slowsay("�����Լ�\n");else Slowsay("δ���\n"); 
            if(gjj[1]==1) Slowsay("��Խ���ֵ�gay\n");else Slowsay("δ���\n"); 
            Slowsay("\n");
            Slowsay("Bad End ���(��15��)\n");
            for(int i=1;i<=17;i++)
                if(hjj[i]==1)
                    printf("%d ",i),v1++;
            if(v1>=15&&swx==1)
                swx=2,cdd=0,Swx();
            Slowsay("\n");
            printf("��ǰ��������:%d",s);
            Slowsay("\n");
            Slowsay("True End ���\n");
            if(zjj[1]==1) Slowsay("��������\n");else Slowsay("δ���\n");   
            if(zjj[3]==1) Slowsay("���壿������\n");else Slowsay("δ���\n");  
            if(zjj[2]==1) Slowsay("���壡������\n"); else Slowsay("δ���\n");  
            if(zjj[4]==1) Slowsay("��֤ʧ��\n");else Slowsay("δ���\n");  
            if(zjj[5]==1) Slowsay("����������\n");else Slowsay("δ���\n");  
            Slowsay("\n");
            if(vv==0) char ch=_getch();
        }
        if(x==3)
        {
            system("cls");
            int v=0;
            Slowsay("��������\n");
            if(zjj[1]==1) Slowsay("    ���ص�ǹ�����\n"),v++;else Slowsay("    ����������\n");
            if(zjj[2]==1) Slowsay("    �ӳٱ��죿������\n"),v++;else Slowsay("    ����������\n");
            if(zjj[9]==1) Slowsay("    �޵б��죡������\n"),v++;else Slowsay("    ����������\n");
            if(zjj[3]==1) Slowsay("    �����죿  ������\n"),v++; else Slowsay("    ����������\n");
            if(hjj[8]==1) Slowsay("    ���ѱ��죡������\n"),v++; else Slowsay("    ����������\n");
            if(hjj[9]==1) Slowsay("    ʵ���塤1�ź�2��\n"),v++; else Slowsay("    ����������\n");
            if(v>=6&&ccg==0)
            {
                Sleep(2000);
                cdd=0;cg();ccg=1;
            }
            Slowsay("��������\n");
            if(swhm==1) Slowsay("    ������\n"),v++; else Slowsay("    ����������\n");
            if(zbbj==1) Slowsay("    ���룬������ʧ��\n"),v++; else Slowsay("    ����������\n");
            if(by==1) Slowsay("    ���ѱ��죡������\n"),v++; else Slowsay("    ����������\n");
            if(hjj[15]==1) Slowsay("    α��......\n"),v++; else Slowsay("    ����������\n"); 
            if(zjj[5]==1) Slowsay("    ����֮��\n"),v++; else Slowsay("    ����������\n");
            if(hjj[14]==1) Slowsay("    ���������\n"),v++; else Slowsay("    ����������\n");
            if(v>=12&&qxs==0)
            {
                Sleep(2000);
                cg2();cdd=0;Sleep(1000);
                Slowsay("-------- ��Ϸ���׽���ѽ�������ǰ����ɰɣ�--------");qxs=1;
            }
            if(vv==0) ch=_getch();
        } 
        if(x==4)
        {
            system("cls");
            int y=rand()%3;
            if(y==0){Slowsay("��ϡ����ʾ��"); x=rand()%14;
            if(x==0) Slowsay("��ϡ�н����ʾ�� ���� 0 10 ���֣�");
            else if(x==1) Slowsay("��ϡ�н����ʾ�� ��õİ���Ҫ�ȴ��~");
            else if(x==2) Slowsay("��������ʾ�� ����Ŀ�������������¾��飡");
            else if(x==3) Slowsay("��������ʾ�� ���������������һ�����Ӫ�ر�¶������һ�飡");
            else if(x==4) Slowsay("��������ʾ�� ��������֮ʱ����������������ϱ��ӵİ��飡����һ�飡");
            else if(x==5) Slowsay("��������ʾ�� �ڶ��죬�����컻�����ӵ�����������ģ�");
            else if(x==6) Slowsay("��������ʾ�� �ڼ���ȴ����������һ�飡");
            else if(x==7) Slowsay("��������ʾ�� ����Ŀ���ٴν���ʵ���Ұɣ�");
            else if(x==8) Slowsay("��������ʾ�� ����Ŀ����ǹ������...");
            else if(x==9) Slowsay("��������ʾ�� ����Ŀ�������ӵ����ȴ���Ԯ��");
            else if(x==10) Slowsay("��ͨ�ط�ʽ�� ����Ŀ���ڻ������������ǰ������������硱��");
            else if(x==11) Slowsay("��ͨ�ط�ʽ�� ����Ŀ��������ʾ��ô�����ˣ��Ե����ӣ�ɱ�����ꡣ");
            else if(x==12) Slowsay("��������ʾ�� �����ܶ�κ�......(�и��ط�����ˢ��������)");
            else Slowsay("���������� 666666,5201314������һЩ�������֣���");
            }else{x=rand()%14;
            if(x==0) Slowsay("���˺øк������м��ʲ���");
            else if(x==1) Slowsay("����ϲ���ӵ�");
            else if(x==2) Slowsay("������ʱ���Ի���ӵ�");
            else if(x==3) Slowsay("���ȥ���������ʸ���");
            else if(x==4) Slowsay("��ͷ̽�̵���Ի�ø�����Դ");
            else if(x==5) Slowsay("��һЩ���ֻ��ͨ�غ󴥷�");
            else if(x==6) Slowsay("��һЩ���Ҫ���ò��ܴ���");
            else if(x==7) Slowsay("��һЩ���Ҫͨ������ֺ���ܴ���");
            else if(x==8) Slowsay("�����ʱ������Ϊһ���ط�û�кý��ֻ����Ϊ��ʳ��/�ӵ�����"); 
            else if(x==9) Slowsay("����������������Խ��");
            else if(x==10) Slowsay("�����ص�������·����ͨ�����ף�ʬ����");
            else if(x==11) Slowsay("����Ϸ��һ�������Ͻ������������ϸ˼���ֵĺã��Σ�Ϸ��~");
            else if(x==12) Slowsay("��ʵ֤��������Ϸ�����ѵ��ģ���Bugһ��Ҫȥ����˵��������(luogu.com.cn/blog/z1e2k3i4/)");
            else Slowsay("���Ŀ�����Ҫ���������ɾͽ��濪���¾���Ŷ");
            }
            if(vv==0) char ch=_getch();continue;
        }
        if(x==5)
        {
            system("cls");
            Slowsay("���ߣ�vvwvvwvvwv\n");
            Slowsay("�Ĵ����ԣ����ˣ�����:???\n");
        }
        if(x==6)
        {
            system("cls");
            if(vv==0) vv=1,Slowsay("�ѿ�������ģʽ");
            else vv=0,Slowsay("�ѹرռ���ģʽ");
        }
        if(x==7)
        {
            system("cls");
            Slowsay("���ˣ����ɣ���");s++; 
        }
    }
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|FOREGROUND_GREEN);
    Slowsay("Thanks for playing......");Sleep(1000); 
    Slowsay("����ͨ�أ����װ��� �ռ�ɥʬ���ɹ��ߣ�ɱ�˻������㻹ûɱ����......");system("Color C"); 
}
