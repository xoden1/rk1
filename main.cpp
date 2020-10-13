#include <iostream>
#include <iomanip>
#include <string>

int main() {
	std::string text = "SO FGP 1940D, FGP VSCDF CPWEYOSMHJNA NHOYQHYP CPRQSCPU H YCPHF\n"
		"UPHN EV SOFPNNPWFQHN PVVECF. HO PHCNA TCETEDHN VEC H GSYG-NPBPN\n"
		"TCEYCHKKSOY NHOYQHYP ZHD TNHOIHNIQN, UPBPNETPU JA IEOCHU MQDP VEC\n"
		"GSD M1 WEKTQFPC JPFZPPO 1943 HOU 1945 JQF OEF SKTNPKPOFPU HF FGP FSKP.\n"
		"FGP VSCDF VQOWFSEOSOY TCEYCHKKSOY NHOYQHYPD UPDSYOPU FE\n"
		"WEKKQOSWHFP SODFCQWFSEOD FE H WEKTQFPC ZPCP ZCSFFPO SO FGP PHCNA\n"
		"1950D. LEGO KHQWGNA\\'D DGECF WEUP, TCETEDPU SO 1949, ZHD EOP EV FGP\n"
		"VSCDF GSYG-NPBPN NHOYQHYPD PBPC UPBPNETPU VEC HO PNPWFCEOSW\n"
		"WEKTQFPC. QONSIP KHWGSOP WEUP, DGECF WEUP DFHFPKPOFD CPTCPDPOFPU\n"
		"KHFGPKHFSWHN PXTCPDDSEOD SO QOUPCDFHOUHJNP VECK. GEZPBPC, FGP\n"
		"TCEYCHK GHU FE JP FCHODNHFPU SOFE KHWGSOP WEUP PBPCA FSKP SF CHO,\n"
		"KHISOY FGP TCEWPDD KQWG DNEZPC FGHO CQOOSOY FGP PRQSBHNPOF\n"
		"KHWGSOP WEUP. SO FGP PHCNA 1950D, HNSWI YNPOOSP UPBPNETPU HQFEWEUP,\n"
		"TEDDSJNA FGP VSCDF WEKTSNPU TCEYCHKKSOY NHOYQHYP, HF FGP\n"
		"QOSBPCDSFA EV KHOWGPDFPC. SO 1954, H DPWEOU SFPCHFSEO EV FGP\n"
		"NHOYQHYP, IOEZO HD FGP \"KHCI 1 HQFEWEUP,\" ZHD UPBPNETPU VEC FGP KHCI 1\n"
		"JA C. H. JCEEIPC. JCEEIPC HNDE UPBPNETPU HO HQFEWEUP VEC FGP VPCCHOFS\n"
		"KPCWQCA SO FGP 1950D SO WEOLQOWFSEO ZSFG FGP QOSBPCDSFA EV\n"
		"KHOWGPDFPC. FGP BPCDSEO VEC FGP PUDHW 2 ZHD UPBSDPU JA UEQYNHD\n"
		"GHCFCPP EV QOSBPCDSFA EV WHKJCSUYP KHFGPKHFSWHN NHJECHFECA SO\n"
		"1961. IOEZO HD PUDHW 2 HQFEWEUP, SF ZHD H DFCHSYGF UPBPNETKPOF VCEK\n"
		"KPCWQCA HQFEWEUP HUHTFPU VEC NEWHN WSCWQKDFHOWPD HOU ZHD\n"
		"OEFPU VEC SFD EJLPWF WEUP ETFSKSMHFSEO HOU DEQCWP-NHOYQHYP\n"
		"USHYOEDFSWD ZGSWG ZPCP HUBHOWPU VEC FGP FSKP. H WEOFPKTECHCA JQF\n"
		"DPTHCHFP FGCPHU EV UPBPNETKPOF, HFNHD HQFEWEUP ZHD UPBPNETPU VEC\n"
		"FGP QOSBPCDSFA EV KHOWGPDFPC HFNHD 1 KHWGSOP. SO 1954, VECFCHO ZHD\n"
		"SOBPOFPU HF SJK JA H FPHK NPU JA LEGO JHWIQD; SF ZHD FGP VSCDF ZSUPNA\n"
		"QDPU GSYG-NPBPN YPOPCHN TQCTEDP TCEYCHKKSOY NHOYQHYP FE GHBP H\n"
		"VQOWFSEOHN SKTNPKPOFHFSEO, HD ETTEDPU FE LQDF H UPDSYO EO THTPC.\n"
		"ZGPO VECFCHO ZHD VSCDF SOFCEUQWPU, SF ZHD BSPZPU ZSFG DIPTFSWSDK\n"
		"UQP FE JQYD, UPNHAD SO UPBPNETKPOF, HOU FGP WEKTHCHFSBP PVVSWSPOWA\n"
		"EV \"GHOU-WEUPU\" TCEYCHKD ZCSFFPO SO HDDPKJNA. GEZPBPC, SO H\n"
		"GHCUZHCP KHCIPF FGHF ZHD CHTSUNA PBENBSOY; FGP NHOYQHYP\n"
		"PBPOFQHNNA JPWHKP IOEZO VEC SFD PVVSWSPOWA. SF SD DFSNN H TETQNHC\n"
		"NHOYQHYP VEC GSYG-TPCVECKHOWP WEKTQFSOY HOU SD QDPU VEC\n"
		"TCEYCHKD FGHF JPOWGKHCI HOU CHOI FGP ZECNU\\'D VHDFPDF\n"
		"DQTPCWEKTQFPCD.";
	int sum = 0;
	int arr[26] = {};
	for (int i : text) {
		if ((i < 'A') || (i > 'Z')) continue;
		arr[i - 'A']++;
		sum++;
	}
	std::cout << "Symbols frequency: " << std::endl;
	for (char i = 'A'; i <= 'Z'; i++) {
		std::cout << i << ": " << static_cast<float>(arr[i - 'A']) / static_cast<float>(sum) * 100 << "%" << std::endl;
	}
	char arr2[26] = {};
	std::cout << "Input the match table (original symbol:decryted symbol), use * for symbols you don't know yet." << std::endl;
	for (char i = 'A'; i <= 'Z'; i++) {
		std::cout << i << ": ";
		std::cin >> arr2[i - 'A'];
		arr2[i - 'A'] = std::toupper(arr2[i - 'A']);
	}
	std::string decrypted;
	for (int i : text) {
		if ((i < 'A') || (i > 'Z')) {
			decrypted.push_back(i);
			continue;
		}
		decrypted.push_back(arr2[i - 'A']);
	}
	std::cout << "Decrypted text: " << std::endl;
	std::cout << decrypted << std::endl;
	std::cout << "Type any symbol from the table if you want to replace it, type 3 if you want to see the whole table, type 2 if you want to see original text, type 1 if you want to see decrypted text, type 0 if you want to close the program." << std::endl;
	while (true) {
		char input;
		std::cin >> input;
		input = std::toupper(input);
		if ((input >= 'A') && (input <= 'Z')) {
			std::cout << input << " = " << arr2[input - 'A'] << ", new symbol: ";
			std::cin >> arr2[input - 'A'];
			arr2[input - 'A'] = std::toupper(arr2[input - 'A']);
		}
		else if (input == '3') {
			std::cout << "The table: " << std::endl;
			for (char i = 'A'; i <= 'Z'; i++) {
				std::cout << i << " = " << arr2[i - 'A'] << std::endl;
			}
		}
		else if (input == '2') {
			std::cout << "Original text: " << std::endl;
			std::cout << text << std::endl;
		}
		else if (input == '1') {
			decrypted.clear();
			for (int i : text) {
				if ((i < 'A') || (i > 'Z')) {
					decrypted.push_back(i);
					continue;
				}
				decrypted.push_back(arr2[i - 'A']);
			}
			std::cout << "Decrypted text: " << std::endl;
			std::cout << decrypted << std::endl;
		}
		else if (input == '0') break;
		else {
			std::cout << "The entered symbol is not valid, try again." << std::endl;
			continue;
		}
	}
	return 0;
}
