# CLHEXED 🧠⚡

**Command-Line Hacking Environment & Exploitation Toolkit**  
🔒 Dirancang untuk offensive security, ethical hacking, OSINT, dan eksploitasi web langsung dari terminal.

<p align="center">

![Build](https://img.shields.io/badge/build-stable-brightgreen?style=flat-square)
![Platform](https://img.shields.io/badge/platform-linux-blue?style=flat-square)
![Last Commit](https://img.shields.io/github/last-commit/denoyey/CLHEXED?style=flat-square)
![Language](https://img.shields.io/github/languages/top/denoyey/CLHEXED?style=flat-square)
![Technologies](https://img.shields.io/badge/technologies-Python%20%7C%20C-yellow?style=flat-square)
![Stars](https://img.shields.io/github/stars/denoyey/CLHEXED?style=flat-square)
![Forks](https://img.shields.io/github/forks/denoyey/CLHEXED?style=flat-square)
![Issues](https://img.shields.io/github/issues/denoyey/CLHEXED?style=flat-square)
![Contributors](https://img.shields.io/github/contributors/denoyey/CLHEXED?style=flat-square)

</p>


## 📚 Table of Contents

- [⚡ Overview](#-overview)
- [✨ Fitur Utama](#-fitur-utama)
- [⚙️ Instalasi](#️-instalasi)
- [📦 Tools Terinstall Otomatis Saat Setup](#-tools-terinstall-otomatis-saat-setup)
- [🧪 Labs Vulnerable yang Didukung](#-labs-vulnerable-yang-didukung)
- [⚠️ Disclaimer](#️-disclaimer)
- [📬 Kontak](#-kontak)


## ⚡ Overview

CLHEXED adalah toolkit terminal serbaguna untuk ethical hacker, pentester, dan bug bounty hunter.  
Semua fitur hacking dan OSINT dikemas dalam satu executable `clhexed.bin`, tanpa perlu konfigurasi rumit.


## ✨ Fitur Utama

- **SQL Injection Testing**  
  Uji potensi injeksi SQL secara otomatis pada target.

- **OSINT Tools**  
  Kumpulkan intelijen dari email, username, domain, IP, dan sumber publik lainnya.

- **XSS Scanner**  
  Deteksi celah Cross-Site Scripting pada website target.

- **Auto Setup Environment**  
  Jalankan `./clhexed.bin setup` untuk:  
  • Menginstall Go secara otomatis  
  • Beralih ke Zsh dengan Oh-My-Zsh  
  • Install dan konfigurasi Docker secara otomatis  
  • Install tools hacking populer seperti nmap, sqlmap, ffuf, subfinder, dll  
  • Deploy vulnerable labs (DVWA, bWAPP, Yavuzlar) secara otomatis


## ⚙️ Instalasi

1. Clone repository:

   > ```bash
   > git clone https://github.com/denoyey/CLHEXED.git
   > cd CLHEXED
   > ```

2. Beri izin executable:

   > ```bash
   > chmod +x clhexed.bin
   > ```

3. Jalankan CLHEXED:

   > ```bash
   > ./clhexed.bin
   > ```


## 📦 Tools Terinstall Otomatis Saat Setup

- sqlmap  
- nmap  
- ffuf  
- subfinder  
- httpx  
- amass  
- theHarvester  
- Go tools populer  
- Docker & Docker-compose  
- Beralih dari bash ke Zsh (dengan Oh-My-Zsh)


## 🧪 Labs Vulnerable yang Didukung

- DVWA (Damn Vulnerable Web Application)  
- bWAPP  
- Yavuzlar Vulnerable Labs  


## ⚠️ Disclaimer

Gunakan CLHEXED hanya untuk edukasi dan pengujian etikal.  
Penyalahgunaan adalah tanggung jawab pengguna.


## 📬 Kontak

GitHub Issues: [https://github.com/username/CLHEXED/issues](https://github.com/username/CLHEXED/issues)
