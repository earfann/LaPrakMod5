def Biodata(tahunLahir, Namaku, Asal):
    tahun_sekarang = 2020
    print('Perkenalkan Nama Saya : {}' .format(Namaku))
    print('Umur Saya : {}' .format(tahun_sekarang-tahunLahir))
    print('Saya Adalah Angkatan : {}' .format(tahun_sekarang))
    print('Asal Saya dari : {}' .format(Asal))
tahunLahir = int(input())
Namaku = input()
Asal = input()
Biodata(tahunLahir, Namaku, Asal)