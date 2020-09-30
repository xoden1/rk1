#include <iostream>
#include <iomanip>
#include <string>


int main() {
    // 1 шаг: частотный анализ текста
    // создаем строку с текстом
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
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;
    int o = 0;
    int p = 0;
    int q = 0;
    int r = 0;
    int s = 0;
    int t = 0;
    int u = 0;
    int v = 0;
    int w = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    int sum = 0;
    for(int i : text) {
        if (i == 'A') a++;
        else if (i == 'B') b++;
        else if (i == 'C') c++;
        else if (i == 'D') d++;
        else if (i == 'E') e++;
        else if (i == 'F') f++;
        else if (i == 'G') g++;
        else if (i == 'H') h++;
        else if (i == 'I') i++;
        else if (i == 'J') j++;
        else if (i == 'K') k++;
        else if (i == 'L') l++;
        else if (i == 'M') m++;
        else if (i == 'N') n++;
        else if (i == 'O') o++;
        else if (i == 'P') p++;
        else if (i == 'Q') q++;
        else if (i == 'R') r++;
        else if (i == 'S') s++;
        else if (i == 'T') t++;
        else if (i == 'U') u++;
        else if (i == 'V') v++;
        else if (i == 'W') w++;
        else if (i == 'X') x++;
        else if (i == 'Y') y++;
        else if (i == 'Z') z++;
        else continue;
        sum++;
    }
    std::cout << "Symbols frequency: " << std::endl;
    std::cout << "A: " << static_cast<float>(a) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "B: " << static_cast<float>(b) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "C: " << static_cast<float>(c) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "D: " << static_cast<float>(d) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "E: " << static_cast<float>(e) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "F: " << static_cast<float>(f) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "G: " << static_cast<float>(g) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "H: " << static_cast<float>(h) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "I: " << static_cast<float>(i) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "J: " << static_cast<float>(j) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "K: " << static_cast<float>(k) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "L: " << static_cast<float>(l) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "M: " << static_cast<float>(m) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "N: " << static_cast<float>(n) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "O: " << static_cast<float>(o) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "P: " << static_cast<float>(p) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "Q: " << static_cast<float>(q) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "R: " << static_cast<float>(r) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "S: " << static_cast<float>(s) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "T: " << static_cast<float>(t) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "U: " << static_cast<float>(u) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "V: " << static_cast<float>(v) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "W: " << static_cast<float>(w) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "X: " << static_cast<float>(x) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "Y: " << static_cast<float>(y) / static_cast<float>(sum) * 100 << "%" << std::endl;
    std::cout << "Z: " << static_cast<float>(z) / static_cast<float>(sum) * 100 << "%" << std::endl;
    // шаг 2: ввод таблицы замен и попытка расшифровки
    char a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,l1,m1,n1,o1,p1,q1,r1,s1,t1,u1,v1,w1,x1,y1,z1;
    std::cout << "Input the match table (original symbol:decryted symbol)" <<std::endl;
    std::cout << "A: ";
    std::cin >> a1;
    std::cout << "B: ";
    std::cin >> b1;
    std::cout << "C: ";
    std::cin >> c1;
    std::cout << "D: ";
    std::cin >> d1;
    std::cout << "E: ";
    std::cin >> e1;
    std::cout << "F: ";
    std::cin >> f1;
    std::cout << "G: ";
    std::cin >> g1;
    std::cout << "H: ";
    std::cin >> h1;
    std::cout << "I: ";
    std::cin >> i1;
    std::cout << "J: ";
    std::cin >> j1;
    std::cout << "K: ";
    std::cin >> k1;
    std::cout << "L: ";
    std::cin >> l1;
    std::cout << "M: ";
    std::cin >> m1;
    std::cout << "N: ";
    std::cin >> n1;
    std::cout << "O: ";
    std::cin >> o1;
    std::cout << "P: ";
    std::cin >> p1;
    std::cout << "Q: ";
    std::cin >> q1;
    std::cout << "R: ";
    std::cin >> r1;
    std::cout << "S: ";
    std::cin >> s1;
    std::cout << "T: ";
    std::cin >> t1;
    std::cout << "U: ";
    std::cin >> u1;
    std::cout << "V: ";
    std::cin >> v1;
    std::cout << "W: ";
    std::cin >> w1;
    std::cout << "X: ";
    std::cin >> x1;
    std::cout << "Y: ";
    std::cin >> y1;
    std::cout << "Z: ";
    std::cin >> z1;
    std::string decrypted;
    for(int i : text) {
        if (i == 'A') decrypted.push_back(a1);
        else if (i == 'B') decrypted.push_back(b1);
        else if (i == 'C') decrypted.push_back(c1);
        else if (i == 'D') decrypted.push_back(d1);
        else if (i == 'E') decrypted.push_back(e1);
        else if (i == 'F') decrypted.push_back(f1);
        else if (i == 'G') decrypted.push_back(g1);
        else if (i == 'H') decrypted.push_back(h1);
        else if (i == 'I') decrypted.push_back(i1);
        else if (i == 'J') decrypted.push_back(j1);
        else if (i == 'K') decrypted.push_back(k1);
        else if (i == 'L') decrypted.push_back(l1);
        else if (i == 'M') decrypted.push_back(m1);
        else if (i == 'N') decrypted.push_back(n1);
        else if (i == 'O') decrypted.push_back(o1);
        else if (i == 'P') decrypted.push_back(p1);
        else if (i == 'Q') decrypted.push_back(q1);
        else if (i == 'R') decrypted.push_back(r1);
        else if (i == 'S') decrypted.push_back(s1);
        else if (i == 'T') decrypted.push_back(t1);
        else if (i == 'U') decrypted.push_back(u1);
        else if (i == 'V') decrypted.push_back(v1);
        else if (i == 'W') decrypted.push_back(w1);
        else if (i == 'X') decrypted.push_back(x1);
        else if (i == 'Y') decrypted.push_back(y1);
        else if (i == 'Z') decrypted.push_back(z1);
        else decrypted.push_back(i);
    }
    std::cout << "Decrypted text: " << std::endl;
    std::cout << decrypted;
    // шаг 3: подбор таблицы по частотности и по другим признакам, см. файл procedure.txt
    return 0;
}
