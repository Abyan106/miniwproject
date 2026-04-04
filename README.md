# 🕵️‍♂️ Uncanny Archieve — Text-Based Horror Game (C++)

Sebuah game horror berbasis teks dengan gaya *visual novel* yang berfokus pada pekerjaan sebagai staf arsip di sebuah kantor polisi.  
Namun… tidak semua data seharusnya ada di sistem.

---

## 📌 Deskripsi

Dalam game ini, pemain berperan sebagai mahasiswa magang yang bekerja di divisi arsip kepolisian.  
Tugas utama adalah memverifikasi dan mengelola file kasus:

- Menerima kasus valid  
- Mencari bukti tambahan  
- Memperbaiki data  
- Menolak kasus yang tidak masuk akal  

Seiring berjalannya waktu, pemain akan menemukan **anomali dalam sistem** yang mulai melibatkan dirinya sendiri.

---

## 🎮 Gameplay Overview

Setiap kasus memiliki beberapa pilihan:

1. **Terima Kasus** → jika data lengkap  
2. **Cari Bukti** → menemukan informasi tambahan  
3. **Perbaiki Kasus** → melengkapi data  
4. **Tolak Kasus** → jika tidak valid  
5. **Abaikan Kasus** → berisiko  

> Sistem akan memberikan *saran*, namun keputusan tetap di tangan pemain.

---

## 🧠 Fitur Utama

- Sistem narasi berbasis *scene* (Enter untuk lanjut)
- Struktur data `struct` untuk Player & Kasus
- Implementasi pointer dalam manipulasi data kasus
- Penyimpanan arsip menggunakan **Linked List**
- Sistem "dummy data" untuk investigasi kasus
- Kasus khusus (anomali) dengan behavior berbeda
- Integrasi nama player ke dalam cerita

---
