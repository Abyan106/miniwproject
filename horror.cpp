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

    // ================= BONUS DIALOG DINAMIS =================
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

// ================= MAIN =================
int main()
{
    Player player = prolog();

    cout << "\nSelamat datang, " << player.nama << endl;

    // ================= ARRAY KASUS =================
    Kasus kasusList[3];

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
}