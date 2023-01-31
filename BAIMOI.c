/************************************ Yeu cau ****************************************************************
 Dieu khien chop tat module 32 LED don theo 5 kieu truy xuat: 
 1. Truy xuat 1 LED 
 2. Truy xuat 8 LED
 3. Truy xuat 16 LED
 4. Truy xuat 32 LED
 5. Truy xuat ket hop cac kieu 1,2,3
 
********************************* Cac lenh lien quan ********************************************************
1. De truy xuat 1 LED ta viet lenh :  
              ----------------------------------------------
                           led32.ledx1[X] = Y;
              ---------------------------------------------- 
    . X la LED can truy xuat - tu 0 den 31. 
    . Y la trang thai LED - 0 la LED tat, 1 la LED sang
    . Vd:  De dieu khien LED 6 sang ta viet lenh: led32.ledx1[6] = 1;     
2. De truy xuat 8 LED ta viet lenh :  
              ----------------------------------------------
                           led32.ledx8[X] = Y;
              ----------------------------------------------  
    . X la 8 LED can truy xuat - tu 0 den 3. 0 la 8 LED tan cung ben phai, 3 la 8 LED tan cung ben trai
    . Y la so 8 bit tuong ung voi trang thai 8 LED 
    . Vd:  De dieu khien 8 LED tan cung ben trai sang ta viet lenh: led32.ledx8[3] = 0xff;   
3. De truy xuat 16 LED ta viet lenh :  
              ----------------------------------------------
                           led32.ledx16[X] = Y;
              ---------------------------------------------- 
    . X la 16 LED can truy xuat - tu 0 den 1. 0 la 16 LED tan cung ben phai, 1 la 16 LED tan cung ben trai
    . Y la so 16 bit tuong ung voi trang thai 16 LED 
    . Vd: De dieu khien 16 LED tan cung ben phai sang ta viet lenh: led32.ledx16[0] = 0xffff; 
4. De truy xuat 32 LED ta viet lenh : 
              ----------------------------------------------
                           led32.ledx32 = Y;
              ---------------------------------------------- 
    . Y la so 32 bit tuong ung voi trang thai 32 LED 
    . Vd: De dieu khien 16 LED tan cung ben trai sang va 16 LED tan cung ben phai tat ta viet: led32.ledx32 = 0xffff0000;      
5. De LED co the hien thi ra ngoai quan sat duoc ta viet lenh : 
              ----------------------------------------------
                           led32_display();
              ---------------------------------------------- 

*********************************** Chuong trinh *************************************************************/
//#define   BOARD     D503
#include<tv_boards.c>  
void main()
{
      system_init();  
      while(true)
      {     
           
      }
}
