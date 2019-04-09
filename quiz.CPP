     #include <iostream.h>
               #include <conio.h>

                main () {
                char nama [30];
                float a,b,c,d,e,f,g,h,i;

                cout<<"menghitung nilai akhir"<<endl;
                cout<<"masukkan nama mahasiswa : "; cin>> nama;
                cout<<"masukkan jurusan mahasiswa : "; cin>> a;
                cout<<" nilai kehadiran : "; cin>> b;
                cout<<" nilai tugas 1 : "; cin>> c;
                cout<<" nilai tugas 2 : "; cin>> d;
                cout<<" nilai tugas 3 : "; cin>> e;
                cout<<" nilai mid : "; cin>> f;
                cout<<" nilai quiz : "; cin>> g;
                cout<<" nilai final : "; cin>>h;
                	i = c+d+e/3 ;
                  h = 0,2*b + 0,2*i + 0,2*f + 0,2*g +0,2*h ;
                cout<<"siswa yang bernama"<<nama<<endl;
                cout<<"jurusan mahasiswa"<<a<<endl;
                cout<<" nilai akhir sebesar : "<<h<<endl;
                getch () ;
                }
