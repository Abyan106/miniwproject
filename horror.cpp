#include <iostream>
#include <string>
#include <limits> //buat enter enter an
using namespace std;

// ================= streuk =================
struct Kasus
{
    string nama;
    string umur;
    string status;
    string tanggal;
    string lokasi;
    string kategori;
    string deskripsi;

    // buat data dummy
    string d_nama;
    string d_umur;
    string d_status;
    string d_tanggal;
    string d_lokasi;
    string d_kategori;
    string d_deskripsi;
};

struct Player
{
    string nama;
    string umur;
    string status;
    string kampus;
};

// biar rapih di main, jadi dbikin disini pakai function muahahaha
Kasus buatKasus(
    string nama, string umur, string status,
    string tanggal, string lokasi,
    string kategori, string deskripsi,

    string d_nama = "", string d_umur = "", string d_status = "",
    string d_tanggal = "", string d_lokasi = "",
    string d_kategori = "", string d_deskripsi = "")
{
    Kasus k;

    k.nama = nama;
    k.umur = umur;
    k.status = status;
    k.tanggal = tanggal;
    k.lokasi = lokasi;
    k.kategori = kategori;
    k.deskripsi = deskripsi;

    k.d_nama = d_nama;
    k.d_umur = d_umur;
    k.d_status = d_status;
    k.d_tanggal = d_tanggal;
    k.d_lokasi = d_lokasi;
    k.d_kategori = d_kategori;
    k.d_deskripsi = d_deskripsi;

    return k;
}

// ================= linked list juga =================
struct Node
{
    Kasus data;
    Node *next;
};

Node *head = NULL;

// ================= linked listnya =================
void tambahArsip(Kasus k)
{
    Node *baru = new Node;
    baru->data = k;
    baru->next = NULL;

    if (head == NULL)
    {
        head = baru;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = baru;
    }
}

// ================= utiliti buat skip skip =================
void tekanEnter()
{
    cout << " >";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // biar gak bug
    cout << endl;
}

// ================= prologh =================
Player prolog()
{
    Player p;

    cout << "Dalam semester ini, dosen aku mewajibkan semua mahasiswanya untuk magang." << endl;
    tekanEnter();

    cout << "Kebanyakan tempat magang sudah diambil oleh mahasiswa lain." << endl;
    tekanEnter();

    cout << "Aku telat karena sakit selama satu minggu." << endl;
    tekanEnter();

    cout << "Tiba-tiba, pamanku menawarkan tempat magang di kantor polisi." << endl;
    tekanEnter();

    cout << "Paman: \"Kamu dapet tempat magang belum?\"" << endl;
    tekanEnter();

    cout << "Paman: \"Kalau belum sini paman tarik aja buat magang disini\"" << endl;
    tekanEnter();

    cout << "Aku pun menerima tawaran tersebut. Karena...tidak ada pilihan lain, aku harus lulus magang untuk semester selanjutnya" << endl;
    tekanEnter();

    cout << "Keesokan harinya aku berangkat..." << endl;
    tekanEnter();

    cout << "Entah kenapa aku merasa sangat mengantuk..." << endl;
    tekanEnter();

    cout << "Aku tertidur di dalam perjalanan." << endl;
    tekanEnter();

    cout << "Aku terbangun di sebuah parkiran kantor polisi" << endl;
    tekanEnter();

    cout << "dengan segera akupun keluar dari mobil travel tersebut dan memasuki kantor polisi tersebut" << endl;
    tekanEnter();

    cout << "Disaat memasuki kantor polisi, suasana seketika ramai oleh perbincangan para polisi yang berada di lobi" << endl;
    tekanEnter();

    cout << "Ketika sedang menelusuri lobig seorang pria terasa mendekat dan berkata:. \"Saya Pak Santoso.\"" << endl;
    tekanEnter();

    cout << "Tanpa intruksi apapun dia pergi meninggalkanku, tetapi dari gerak gerik nya dia mengakatakan untuk mengikutinya" << endl;
    tekanEnter();

    cout << "Aku dibawa ke dalam sebuah ruangan arsip dimana ada banyak pegawai yang sedang mengurusi arsip" << endl;
    tekanEnter();

    cout << "Aku dibawa ke bilik 14 dihadapkan dengan komputer tua yang mungkin hanya bisa dipakai untuk membuat dokumen" << endl;
    tekanEnter();

    cout << "Pak Santoso: \"Selamat datang! Silahkan masukkan datamu...\"" << endl;
    tekanEnter();

    // ================= INPUT PLAYER =================
    cout << "\n=== INPUT DATA DIRI ===\n";

    cout << "Nama : ";
    getline(cin, p.nama);

    cout << "Umur : ";
    getline(cin, p.umur);

    cout << "Kampus : ";
    getline(cin, p.kampus);

    p.status = "Mahasiswa Magang";

    cout << "\nData diterima...\n";
    tekanEnter();

    // ================= DIALOG DINAMIS =================
    cout << "Pak Santoso: \"Baiklah, " << p.nama << "...\"" << endl;
    tekanEnter();

    cout << "Pak Santoso: \"Mulai sekarang kamu bekerja di sini.\"" << endl;
    tekanEnter();

    cout << p.nama << "(Hanya terdiam dan mencoba memproses apa yang telah terjadi)" << endl;
    tekanEnter();

    cout << p.nama << "\":hmm kayak...ada yang aneh deh dengan pak Santoso, aura nya dingin banget\"" << endl;
    tekanEnter();

    return p;
}

// ==================== scene istirahat ===================
void sceneIstirahat(Player p)
{
    cout << p.nama << "\"lah....mati? ini gara-gara listrik kah? huh?\"" << endl;
    tekanEnter();

    cout << "Aku membuat catatan kecil di meja untuk cek kasus tersebut nanti" << endl;
    tekanEnter();

    cout << "Pak Santoso pun datang dengan segelas kopi hitam" << endl;
    tekanEnter();

    cout << "Pak Santoso: \"Ikuti saya.\"" << endl;
    tekanEnter();

    cout << p.nama << "(mengikutinya ke sebuah ruangan.)" << endl;
    tekanEnter();

    cout << "Ternyata itu kamar tidur." << endl;
    tekanEnter();

    cout << p.nama << ": \"Wow... mewah untuk mahasiswa magang? seriusan pak?\"" << endl;
    tekanEnter();

    cout << "Pak Santoso: \"iya..bapak tau rumah mu jauh, jadi kamu tinggal disini aja\"" << endl;
    tekanEnter();

    cout << "Pak Santoso: \"kalo begitu bapak pulang dulu, nanti bapak yang akan kunci kantor nya\"" << endl;
    tekanEnter();

    cout << p.nama << " (merasa ada yang aneh)" << endl;
    tekanEnter();

    cout << "Pak Santoso: \"Besok kerja jam 8.\"" << endl;
    tekanEnter();

    cout << "Pak Santoso: \"Persiapkan dirimu.\"" << endl;
    tekanEnter();

    cout << "Pintu tertutup." << endl;
    tekanEnter();

    cout << p.nama << ":\"hmm harus nya kalo misalkan aku tidur disini, aku ga sih yang kunci kantor nya\"" << endl;
    tekanEnter();

    cout << p.nama << ":\"nanti aku kekunci disini dong? lahh...ughhh udahlah, aku terlalu capek, gausah makan juga gapapalah\"" << endl;
    tekanEnter();

    cout << p.nama << " tertidur pulas..." << endl;
    tekanEnter();
}

//================== Scene Chapter 3 - Penentuan Nasib

void sceneChapter3(Player p){

    cout << "\n=========== Chapter 3 - Penentuan Nasib ===========" << endl;
    tekanEnter();

    cout << "Aku bangun di jam 6 lagi. Roti dan susu ada meja sebelah kasur ku. Aku bersiap-siap untuk bekerja seperti biasanya." << endl;
    tekanEnter();

    cout << "Namun, saat aku ingin keluar kamar, tiba-tiba Pak Santoso menelponku." << endl;
    tekanEnter();

    cout << "Pak Santoso: \"Selamat pagi, .\"" << p.nama << endl;
    tekanEnter();

    cout << "Seketika, aku merasa terheran-heran. Mengapa Pak Santoso tumben menelponku? Biasanya ia selalu datang ke kamar ku tiap pagi." << endl;
    tekanEnter();

    cout << p.nama << ":    \"Halo pak. Tumben banget nelpon ke saya begini.\"" << endl;
    tekanEnter();

    cout << "Pak Santoso: \"Ada informasi untukmu. Mulai hari ini, jadwal mu berubah menjadi jam malam.\"" << endl;
    tekanEnter();

    cout << p.nama << ":    \"E-eh? Kenapa begitu pak?\"" << endl;
    tekanEnter();

    cout << "Saat aku menanyakan itu, tiba-tiba teleponnya terputus. Aku sebenarnya ingin mencoba menelpon dia lagi. Namun karena aku rasa ini akan mengganggu dia, aku sebaiknya menuruti perintah dia saja tanpa banyak tanya." << endl;
    tekanEnter();

    cout << "Setelah beberapa menit, ada informasi baru lewat HP ku dimana jam ku dipindahkan menjadi jam 7 malam hingga 4 pagi. Sebenarnya aku agak keberatan untuk bekerja di jam segitu namun mau bagaimana lagi." << endl;
    tekanEnter();

    cout << p.nama << ":    \"Ya… masih agak lama juga sih hingga jam kerja ku. Enaknya ngapain ya?\"" << endl;
    tekanEnter();

    cout << "Setelah berpikir singkat, aku memutuskan untuk mengelilingi kantor ini. Kantor ini memang terlihat lumayan besar, bahkan liftnya ada sampai lantai 13." << endl;
    tekanEnter();

    cout << "Para pekerja disini juga terlihat biasa-biasa saja. Mungkin hal-hal aneh yang terjadi kemarin hanya pikiranku saja." << endl;
    tekanEnter();

    cout << "???:   \"Hei! Kamu rekrutan baru itu ya?\"" << endl;
    tekanEnter();

    cout << "Seorang bapak-bapak memanggil namaku. Dari tampangnya, ia terlihat seperti orang yang percaya diri dan bisa diandalkan. Aku bisa melihatnya dari banyaknya orang-orang yang mengelilingi dia sekarang." << endl;
    tekanEnter();

    cout << p.nama << ":    \"O-oh… halo pak! Iya, saya rekrutan baru itu. Perkenalkan pak nama saya " << p.nama << " pak\""<< endl;
    tekanEnter();

    cout << "???:   \"" << p.nama <<" ya… senang berkenalan denganmu. Nama bapak, Hendrik. Kalau ada hal-hal yang bikin kamu kesulitan, bisa panggil saya aja ya!\"" << endl;
    tekanEnter();

    cout << "Entah kenapa, suaranya yang ceria itu bisa membuatku sedikit tenang kalau dibandingkan Pak Santoso." << endl;
    tekanEnter();

    cout << "Apa mungkin aku cerita hal-hal aneh yang terjadi kemarin ya? Tapi kan kita baru saja ketemu. Masa mau langsung curhat." << endl;
    tekanEnter();

    cout << "Saat aku ingin berbicara lagi padanya, ia sayangnya harus pergi sekarang karena ada pekerjaan. Namun saat melewatiku, ia berbisik sesuatu....." << endl;
    tekanEnter();

    cout << "Pak Hendrik:   \"Nak, aku sarankan kamu berhati-hati dengan Pak Santoso ya. Soalnya ada rumor yang kurang enak mengenai dia.\"" << endl;
    tekanEnter();

    cout << "Lantas, aku pun kaget sambil terheran-heran." << endl;
    tekanEnter();

    cout << p.nama << ":    \"Memangnya ada apa dengan Pak Santoso?\"" << endl;
    tekanEnter();

    cout << "Saat aku berpikir begitu, aku mendengar sebuah percakapan dari pekerja lain mengenai Pak Santoso." << endl;
    tekanEnter();

    cout << "Pak Hendrik:   \"Eh kamu tau nggak? Kemarin aku liat Pak Santoso membawa sesuatu yang mencurigakan ke ruang arsip.\"" << endl;
    tekanEnter();

    cout << p.nama << ":    \"Iya kah? Emang bener orang itu kayaknya punya niat jahat.\"" << endl;
    tekanEnter();

    cout << "Pak Hendrik:   \"Jangan-jangan itu bom lagi? Hahaha!\"" << endl;
    tekanEnter();

    cout << "Sepertinya memang rumor Pak Santoso sudah tersebar di seluruh kantor ini. Mungkin ini adalah alasan mengapa Pak Santoso selalu diam ya?" << endl;
    tekanEnter();

    cout << "Walaupun begitu, entah kenapa aku tidak merasakan niat terselubung dari Pak Santoso. Hanya perawakannya saja yang terlihat agak seram." << endl;
    tekanEnter();

    cout << "Waktu pun berlalu dan jam kerja ku akhirnya dimulai." << endl;
    tekanEnter();

    cout << "Saat aku keluar kamar, Pak Santoso sudah menungguku di luar kamar dan memerintahkanku untuk mengikutinya seperti biasa." << endl;
    tekanEnter();

    cout << "Sesampainya di ruang arsip, aku menyalakan komputer dan memulai shift malam ku dengan 15 file kasus." << endl;
    tekanEnter();
}

//================== Scene Sadar Chapter 3 - Penentuan Nasib
void sceneEndingChapter3(Player p){

    cout << p.nama << ":    \"E-eh… tunggu dulu, ini kan nama aku!\"" << endl;
    tekanEnter();

    cout << p.nama << ":    \"Dari kemarin juga seperti ini dan aku kira ini cuma bug.\"" << endl;
    tekanEnter();

    cout << p.nama << ":    \"Tapi kali ini detailnya sudah sangat jelas.\"" << endl;
    tekanEnter();

    cout << p.nama << ":    \"LAH HARI INI?!!\"" << endl;
    tekanEnter();

    cout << p.nama << ":    \"Gak mungkin sih ini cuma sebuah kebetulan!\"" << endl;
    tekanEnter();

    cout << "Aku dihadapkan dengan 3 pilihan terakhir." << endl;
    tekanEnter();

    cout << "Terima, Tolak, atau Abaikan...." << endl;
    tekanEnter();

    cout << "Aku tidak bisa mencari bukti kasus ataupun memperbaiki data kasus itu. Apa yang aku seharusnya sekarang lakukan?" << endl;
    tekanEnter();
}

//Ending Untuk Chapter 3

void endingChapter3(int pilihan, Player player)
{
    switch (pilihan)
    {
    case 1:

        cout << "Aku memilih untuk menerima kasus itu." << endl;
        tekanEnter();

        cout << "Komputer itu tiba-tiba langsung mati dan seluruh lampu di kantor ini juga tiba-tiba mati. Ini jelas-jelas membuatku merinding." << endl;
        tekanEnter();
        
        cout << "Aku mencoba untuk menyalakan flashlight dari HP ku dan untungnya bisa dinyalakan." << endl;
        tekanEnter();

        cout << "Namun, saat aku menoleh kebelakang untuk menuju pintu keluar, tiba-tiba saja aku melihat ada sebuah pistol ditodongkan ke kepala ku." << endl;
        tekanEnter();

        cout << "Pistol itu kemudian menembak kepalaku, membunuhku di tempat." << endl;
        tekanEnter();

        cout << "\n=== ENDING 1: TERIMA KASUS ===\n";
        tekanEnter();

        break;

    case 2:

        cout << "Aku memilih untuk menolak kasus itu." << endl;
        tekanEnter();

        cout << "Komputer itu tiba-tiba langsung mati seperti biasa." << endl;
        tekanEnter();

        cout << "Namun sekarang aku bertekad untuk lupakan saja semua kejadian aneh ini bahkan aku ingin melupakan kantor polisi ini." << endl;
        tekanEnter();

        cout << " Aku buru-buru ke kamar ku dan mengemas seluruh barangku untuk pulang ke rumah." << endl;
        tekanEnter();

        cout << "Sekarang di jam 4 pagi, aku berjalan sendirian di jalan raya yang sepi." << endl;
        tekanEnter();

        cout << "Di saat itu lah, aku melihat sebuah mobil yang menuju ke arah ku." << endl;
        tekanEnter();

        cout << "Aku pikir itu adalah sebuah taksi, jadi aku mencoba untuk memberhentikkannya." << endl;
        tekanEnter();

        cout << "Ternyata, mobil itu tidak mau berhenti dan terus berjalan hingga menabrakku." << endl;
        tekanEnter();

        cout << "Membunuhku di tempat." << endl;
        tekanEnter();

        cout << "\n=== ENDING 2: TOLAK KASUS ===\n";
        tekanEnter();

    case 3:

        cout << "Aku memilih untuk mengabaikan kasus itu." << endl;
        tekanEnter();   

        cout << "Komputer itu tiba-tiba langsung mati seperti biasa." << endl;
        tekanEnter();

        cout << "Karena dirasa shift malam ku sudah berakhir, aku pun berniat untuk kembali ke kamar ku." << endl;
        tekanEnter();

        cout << "Namun, aku malah tambah penasaran kenapa namaku ada di sana." << endl;
        tekanEnter();

        cout << "Karena iseng, aku mencoba menyalakan komputer itu kembali." << endl;
        tekanEnter();

        cout << "Namun mengejutkannya, komputer itu bisa menyala seperti biasanya. Aku pun mulai membaca seluruh kasus yang telah ku arsip sebelumnya. Dari situlah aku menyadari sesuatu." << endl;
        tekanEnter();

        cout << "Disitu aku tersadar bahwa itu bukanlah lag maupun bug." << endl;
        tekanEnter();

        cout << "Ini adalah pembunuhan berantai yang sudah direncanakan secara matang!" << endl;
        tekanEnter();

        cout << "Terlihat jelas sudah polanya." << endl;

        cout << "Ya, mulai dari awal hingga akhir, ini semua hanyalah permainan untuk menjebakku." << endl;
        tekanEnter();

        cout << "Aku pun mencoba untuk memindahkan semua arsip itu kedalam HP ku dan kabur dari kantor polisi ini untuk melaporkannya ke pihak berwenang lainnya." << endl;
        tekanEnter();

        cout << "Namun, saat aku mencoba untuk keluar, tiba-tiba ada seseorang yang mendekapku hingga pingsan" << endl;
        tekanEnter();

        cout << "Beberapa saat kemudian, aku bangun di sebuah tempat yang tidak kuketahui dengan posisi terikat di kursi." << endl;
        tekanEnter();

        cout << "Sepertinya mereka tahu kalau aku tahu terlalu banyak mengenai keanehan di kantor polisi tersebut." << endl;
        tekanEnter();
        
        cout << "Keheningan di ruangan ini kemudian hilang dengan seseorang yang tiba-tiba masuk." << endl;
        tekanEnter();

        cout << "Dari kegelapan ia mengatakan 'Yo, lama tidak bertemu!'" << endl;
        tekanEnter();

        cout << "\n=== ENDING 3: ABAIKAN ===\n" << endl;
        tekanEnter();

        cout << "=== BERSAMBUNG ===\n";
        break;

    default:
        cout << "Pilihan tidak valid.\n";
    }
}

// ================= nampilin kasus =================
void tampilKasus(Kasus k)
{
    cout << "\n===== FILE KASUS =====\n";
    cout << "Nama : " << k.nama << endl;
    cout << "Umur : " << k.umur << endl;
    cout << "Status : " << k.status << endl;
    cout << "Tanggal : " << k.tanggal << endl;
    cout << "Lokasi : " << k.lokasi << endl;
    cout << "Kategori : " << k.kategori << endl;
    cout << "Deskripsi : " << k.deskripsi << endl;
}

// ================= gamplay =================
bool dataLengkap(Kasus k)
{
    return (
        k.nama != "" &&
        k.umur != "" &&
        k.status != "" &&
        k.tanggal != "" &&
        k.lokasi != "" &&
        k.kategori != "" &&
        k.deskripsi != "");
}

void prosesKasus(Kasus *k, string saranAwal, Player p, bool kasusMisteri = false)
{
    int pilihan;
    bool buktiDitemukan = false;

    while (true)
    {
        tampilKasus(*k);

        string saran;
        if (dataLengkap(*k))
            saran = "Terima Kasus (data valid)";
        else if (buktiDitemukan)
            saran = "Perbaiki Kasus (data tersedia)";
        else
            saran = saranAwal;

        cout << "\n[SARAN SISTEM : " << saran << "]\n";

        cout << "\n1. Terima\n2. Cari Bukti\n3. Perbaiki\n4. Tolak\n5. Abaikan\n";
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (pilihan)
        {
        case 1:
            if (!dataLengkap(*k))
            {
                cout << "Data belum lengkap!\n";
                break; // biar gak bug,  balik ke loop bukan keluar
            }
            cout << "Kasus diterima...\n";
            tambahArsip(*k);
            return; // nah ini keluar nya, dicari cari enggak ketemu jir

        case 2:
            if (kasusMisteri)
            {
                cout << "\nMencari bukti...\n";
                cout << "...\n";
                cout << "Tidak ada data ditemukan.\n";
                cout << "Sistem mengalami error.\n";
                cout << "Layar tiba-tiba mati.\n";
                tekanEnter();

                sceneIstirahat(p);
                return;
            }

            cout << "\nMencari bukti...\n";
            cout << "CCTV ditemukan...\n";
            cout << "Data tambahan diperoleh...\n";
            buktiDitemukan = true;
            break;

        case 3:
            if (!buktiDitemukan)
            {
                cout << "Belum ada bukti!\n";
                break;
            }

            cout << "Memperbaiki data...\n";

            if (k->nama == "")
                k->nama = k->d_nama;
            if (k->umur == "")
                k->umur = k->d_umur;
            if (k->status == "")
                k->status = k->d_status;
            if (k->tanggal == "")
                k->tanggal = k->d_tanggal;
            if (k->lokasi == "")
                k->lokasi = k->d_lokasi;
            if (k->kategori == "")
                k->kategori = k->d_kategori;
            if (k->deskripsi == "")
                k->deskripsi = k->d_deskripsi;

            cout << "Data berhasil diperbaiki!\n";
            break;

        case 4:
            cout << "Kasus ditolak.\n";
            return;

        case 5:
            cout << "Kasus diabaikan...\n";
            return;

        default:
            cout << "Pilihan tidak valid!\n";
        }
    }
}

// ngubah data data si player
Kasus kasusPlayerRahasia(Player p)
{
    Kasus k;

    k.nama = p.nama;
    k.umur = "";
    k.status = "Mahasiswa";
    k.tanggal = "";
    k.lokasi = "";
    k.kategori = "";
    k.deskripsi = "";

    // dummy buat di chapter 3
    k.d_nama = p.nama;
    k.d_umur = p.umur;
    k.d_status = "HILANG";
    k.d_tanggal = "UNKNOWN";
    k.d_lokasi = "Ruang Arsip";
    k.d_kategori = "Orang Hilang";
    k.d_deskripsi = "Data tidak seharusnya ada di sistem...";

    return k;
}

// Kasus Player Chapter 3
Kasus kasusPlayerChapter3(Player p){
    Kasus k;

    // data awal (tampak normal tapi kosong)
    k.nama = p.nama;
    k.umur = "";
    k.status = "Aktif";
    k.tanggal = "";
    k.lokasi = "";
    k.kategori = "";
    k.deskripsi = "";

    // dummy (kebenaran sebenarnya)
    k.d_nama = p.nama;
    k.d_umur = p.umur;
    k.d_status = "HILANG";
    k.d_tanggal = "UNKNOWN";
    k.d_lokasi = "Ruang Arsip";
    k.d_kategori = "Orang Hilang";
    k.d_deskripsi = "Subjek masih bekerja... namun tercatat hilang.";   

    return k;
}

// ================= MAIN =================
int main()
{   
    int pilihan;
    Player player = prolog();

    cout << "\nSelamat datang, " << player.nama << endl;

    // ================= ARRAY KASUS =================
    Kasus kasusList[3];
    Kasus kasusChapter3[14];

    kasusList[0] = buatKasus(
        "Riyanto", "35 Tahun", "Meninggal Dunia",
        "08/07/2023", "Gang Mawar No.1",
        "Pembunuhan",
        "Ditusuk dari belakang oleh temannya");

    kasusList[1] = buatKasus(
        "Siti Maryani", "64 Tahun", "Luka Ringan",
        "", "",
        "Perampokan",
        "",

        // dummy
        "Siti Maryani", "64 Tahun", "Luka Ringan",
        "23/01/2025", "Pasar Tradisional",
        "Perampokan",
        "Dirampok oleh pria berbaju hitam");

    kasusList[2] = buatKasus(
        "A A A ANJAY", "1/2 Abad", "GAK JELAS",
        "YTTA", "YTTA",
        "YTTA",
        "DATA NGACO");

    cout << "\n=== HARI PERTAMA KERJA ===\n";

    prosesKasus(&kasusList[0], "Terima Kasus (data valid)", player);
    tekanEnter();

    prosesKasus(&kasusList[1], "Cari Bukti (data belum lengkap)", player);
    tekanEnter();

    prosesKasus(&kasusList[2], "Tolak Kasus (data tidak jelas)", player);
    tekanEnter();


    // first anomali case
    Kasus misteri = kasusPlayerRahasia(player);

    prosesKasus(&misteri, "...", player,  true);
    tekanEnter();

    // ================= anu arsip biar ke next arsip =================
    cout << "\n=== ARSIP TERSIMPAN ===\n";

    Node *temp = head;
    int i = 1;

    while (temp != NULL)
    {
        cout << "\nKasus ke-" << i++ << endl;
        tampilKasus(temp->data);
        temp = temp->next;
    }

    sceneIstirahat(player);
    cout << "\nHari pertama selesai...\n";

    //============================ Chapter 3 ===============================
    
    //        ================= Array Kasus Chapter 3 =================

    kasusChapter3[0] = buatKasus(
    "Andi Pratama", "32 Tahun", "Meninggal",
    "12/03/2025", "Rumah",
    "Pembunuhan",
    "Korban ditemukan di dapur dengan luka tusuk");

    kasusChapter3[1] = buatKasus(
    "Rina", "25 Tahun", "Luka Berat",
    "10/03/2025", "Jalan Raya",
    "Kecelakaan",
    "Tabrakan dengan truk");

    kasusChapter3[2] = buatKasus(
    "Bambang", "45 Tahun", "Hilang",
    "01/03/2025", "Hutan Kota",
    "Orang Hilang",
    "Tidak kembali setelah jogging");

    kasusChapter3[3] = buatKasus(
    "Sari", "29 Tahun", "Selamat",
    "05/03/2025", "Mall",
    "Percobaan Pencurian",
    "Pelaku berhasil ditangkap");

    kasusChapter3[4] = buatKasus(
    "Dewi", "", "Hilang",
    "", "",
    "Orang Hilang",
    "",

    "Dewi", "21 Tahun", "Hilang",
    "02/03/2025", "Kampus",
    "Orang Hilang",
    "Terakhir terlihat di parkiran"
    );

    kasusChapter3[5] = buatKasus(
    "", "38 Tahun", "Meninggal",
    "", "Gudang",
    "Kematian Misterius",
    "",

    "Rahmat", "38 Tahun", "Meninggal",
    "08/03/2025", "Gudang",
    "Kematian Misterius",
    "Ditemukan tanpa luka"
    );

    kasusChapter3[6] = buatKasus(
    "", "", "",
    "", "",
    "Perampokan",
    "",

    "Tono", "50 Tahun", "Luka",
    "11/03/2025", "Pasar",
    "Perampokan",
    "Dirampok saat berdagang"
    );

    kasusChapter3[7] = buatKasus(
    "???", "", "",
    "", "",
    "",
    "",

    "Unknown", "??", "Tidak Diketahui",
    "??/??/????", "Gang Sempit",
    "Anomali",
    "Terdeteksi oleh sistem tanpa laporan"
    );

    kasusChapter3[8] = buatKasus(
    "###", "???", "ERROR",
    "NULL", "NULL",
    "NULL",
    "DATA CORRUPT");

    kasusChapter3[9] = buatKasus(
    "", "", "",
    "", "",
    "",
    "");

    kasusChapter3[10] = buatKasus(
    "YTTA", "YTTA", "YTTA",
    "YTTA", "YTTA",
    "YTTA",
    "TIDAK VALID");

    kasusChapter3[11] = buatKasus(
    "NULL", "NULL", "NULL",
    "NULL", "NULL",
    "NULL",
    "SYSTEM FAILURE");

    kasusChapter3[12] = buatKasus(
    "???", "???", "???",
    "", "",
    "",
    "Data tidak dapat diproses");

    kasusChapter3[13] = kasusPlayerRahasia(player);

    //        ================= Jalanin Kasus Chapter 3 =================
    sceneChapter3(player);
    tekanEnter();
    
    cout << "\n=== SHIFT MALAM DIMULAI ===\n";
    for (int i = 0; i < 14; i++){
        if (i == 13)
        {
            // kasus terakhir = player (anomali)
            prosesKasus(&kasusChapter3[i], "...", player, true);
        }
        else if (i >= 8)
        {
            // data rusak == disarankan ditolak
            prosesKasus(&kasusChapter3[i], "Tolak Kasus (data tidak jelas)", player);
        }
        else if (i >= 4)
        {
            // data setengah == cari bukti
            prosesKasus(&kasusChapter3[i], "Cari Bukti (data belum lengkap)", player);
        }
        else
        {
            // data normal
            prosesKasus(&kasusChapter3[i], "Terima Kasus (data valid)", player);
        }

        tekanEnter();
    }
    
    // Kasus Player Muncul kembali
    Kasus finalCase;

    finalCase.nama = player.nama;
    finalCase.umur = "19";
    finalCase.status = "Meninggal Dunia";
    finalCase.tanggal = "06/04/2026";
    finalCase.lokasi = "Kantor Polisi";
    finalCase.kategori = "Bunuh Diri";
    finalCase.deskripsi = player.nama + " ditemukan tidak bernyawa di dalam ruang arsip dengan luka tembak di kepala.";
    tampilKasus(finalCase);

    //Jalanin Scene Ending Chapter 3
    sceneEndingChapter3(player);

    cout << "\n1. Terima Kasus\n2. Tolak Kasus\n3. Abaikan Kasus\n";
    cout << "Pilihan: ";
    cin >> pilihan;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    endingChapter3(pilihan, player);
}