#include <iostream> 
using namespace std;
int main()
{
double TP_org, TD_org, EMD1, EMD2, TP_gnrl, TD_gnrl, EMD3, EMD4, TP_cell, emd_cell1, 
 emd_cell2, emd_cell3, td_math, emd_math1, emd_math2, emd_anatomie, emd_physio, td_physio,
 emd_français, emd_his, td_physique, emd_physique1, emd_physique2, emd1_veg, emd2_veg, tp_veg,
 moy_org, moy_veg, moy_cell, moy_gnrl, moy_physio, moy_physique, moy_français, moy_anatomie, moy_his, moy_math, moy_totale ;
cout << "Type your notes:"; 
cout << "Tp_org:"; cin >> TP_org;
cout << "TD_org:"; cin >> TD_org;
cout << "EMD1:"; cin >> EMD1;
cout << "EMD2:"; cin >> EMD2;
moy_org = ((TP_org + TD_org) / 2 + EMD1 + EMD2 ) / 3 ; 
cout << "TP_gnrl:"; cin >> TP_gnrl;
cout << "TD_gnrl:"; cin >> TD_gnrl;
cout << "EMD3:"; cin >> EMD3;
cout << "EMD4:"; cin >> EMD4;
cout << "TP_cell:"; cin >> TP_cell;
cout << "emd_cell1:"; cin >> emd_cell1;
cout << "emd_cell2:"; cin >> emd_cell2;
cout << "emd_cell3:"; cin >> emd_cell3;
cout << "td_math:"; cin >> td_math;
cout << "emd_math1:"; cin >> emd_math1;
cout << "emd_math2:"; cin >> emd_math2;
cout << "emd_anatomie:"; cin >> emd_anatomie;
cout << "emd_physio:"; cin >> emd_physio;
cout << "td_physio:"; cin >> td_physio;
cout << "emd_français:"; cin >> emd_français;
cout << "emd_his:"; cin >> emd_his;
cout << "td_physique:"; cin >> td_physique;
cout << "emd_physique1:"; cin >> emd_physique1;
cout << "emd_physique2:"; cin >> emd_physique2;
cout << "emd1_veg"; cin >> emd1_veg;
cout << "emd2_veg:"; cin >> emd2_veg;
cout << "tp_veg:"; cin >> tp_veg;
cout << "Moyenne de org:" << moy_org << "" ;
moy_gnrl = ((TP_gnrl + TD_gnrl) / 2 + EMD3 + EMD4 ) / 3 ;
cout << "Moyenne de gnrl:" << moy_gnrl << "" ;
moy_cell = (TP_cell + emd_cell1 + emd_cell2 + emd_cell3 ) / 3 ;
cout << "Moyenne de cell:" << moy_cell << "" ;
moy_veg = ( tp_veg + emd1_veg + emd2_veg ) / 3 ;
cout << "Moyenne de veg:" << moy_veg << "" ;
moy_math = ( td_math + emd_math1 + emd_math2 ) / 3 ;
cout << "Moyenne de math:" << moy_math << "\n" ;
moy_physique = ( td_physique + emd_physique2 + emd_physique1 ) / 3 ;
cout << "Moyenne de physique:" << moy_physique << "" ;
moy_physio = ( td_physio + emd_physio*2 ) / 3 ;
cout << "Moyenne de physiologie:" << moy_physio << "" ;
moy_anatomie = emd_anatomie;
cout << "Moyenne d'anatomie:" << moy_anatomie << "" ;
moy_français = emd_français ;
cout << "Moyenne du français:" << moy_français;
moy_his = emd_his ;
cout << "Moyenne du l'histoire:" << moy_his ;
moy_totale = ( moy_anatomie*2 + moy_cell*3 + moy_français*1 + moy_gnrl*3 + moy_his*1 + moy_physio*2 + moy_veg*2 + moy_org*3 + moy_math*3 + moy_physique*2 ) / 22 ;
cout << "la Moyenne générale:" << moy_totale ;
if (moy_totale >= 10 )
cout << "Congratulation you passed ;
else
    cout << "في جويلية رجع " ;
   return 0;
}
