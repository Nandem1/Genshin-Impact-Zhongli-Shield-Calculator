#include <iostream>

using namespace std;

int main(){
	int hpbase, talentolvl, escudoTotalT1, escudoTotalT2, escudoTotalT3, escudoTotalT4, escudoTotalT5, escudoTotalT6, escudoTotalT7, escudoTotalT8, escudoTotalT9, escudoTotalT10,
	escudoTotalBono30;
	const int shieldBaseAbsorbT1 = 1232, shieldBaseAbsorbT2 = 1355, shieldBaseAbsorbT3 = 1489, shieldBaseAbsorbT4 = 1633, shieldBaseAbsorbT5 = 1787, shieldBaseAbsorbT6 = 1951,
	shieldBaseAbsorbT7 = 2126, shieldBaseAbsorbT8 = 2310, shieldBaseAbsorbT9 = 2506, shieldBaseAbsorbT10 = 2711;
	char respuestaBono;
	
	cout<<"\nCuanta HP base tiene tu personaje?: "; cin>>hpbase;
	cout<<"Que nivel de talento le tienes en la E?: "; cin>>talentolvl;
	
	switch (talentolvl) {
		case 1:
			escudoTotalT1 = (0.128*hpbase+shieldBaseAbsorbT1);
			cout<<"\nTienes el bono del artefacto Geoarmada x4? (30% aumento de escudo) (Y/N): "; cin>>respuestaBono;
			if (respuestaBono == 'Y'){
				escudoTotalBono30 = (escudoTotalT1+(escudoTotalT1*0.3));
				cout<<"\nLa capacidad de escudo con el talento nivel 1 y el bono de Geoarmada x4 (30% aumento de escudo) es: "<<escudoTotalBono30<<endl;
			}
			else if (respuestaBono == 'N'){
				cout<<"\nLa capacidad de escudo con el talento nivel 1 y sin el bono de Geoarmada x4 (30% aumento de escudo) es de: "<<escudoTotalT1<<endl;
			}
			else {
				cout<<"\nDebes ingresar [Y]es o [N]o en mayusculas."<<endl;
			}
			break;
		case 2:
			escudoTotalT2 = (0.1376*hpbase+shieldBaseAbsorbT2);
			cout<<"\nTienes el bono del artefacto Geoarmada x4? (30% aumento de escudo) (Y/N): "; cin>>respuestaBono;
			if (respuestaBono == 'Y'){
				escudoTotalBono30 = (escudoTotalT2+(escudoTotalT2*0.3));
				cout<<"\nLa capacidad de escudo con el talento nivel 2 y el bono de Geoarmada x4 (30% aumento de escudo) es: "<<escudoTotalBono30<<endl;
			}
			else if(respuestaBono == 'N') {
				cout<<"\nLa capacidad de escudo con el talento nivel 2 y sin el bono de Geoarmada x4 (30% aumento de escudo) es de: "<<escudoTotalT2<<endl;
			}
			else {
				cout<<"\nDebes ingresar [Y]es o [N]o en mayusculas."<<endl;
			}
			break;
		case 3:
			escudoTotalT3 = (0.1472*hpbase+shieldBaseAbsorbT3);
			cout<<"\nTienes el bono del artefacto Geoarmada x4? (30% aumento de escudo) (Y/N): "; cin>>respuestaBono;
			if (respuestaBono == 'Y'){
				escudoTotalBono30 = (escudoTotalT3+(escudoTotalT3*0.3));
				cout<<"\nLa capacidad de escudo con el talento nivel 3 y el bono de Geoarmada x4 (30% aumento de escudo) es: "<<escudoTotalBono30<<endl;
			}
			else if(respuestaBono == 'N'){
				cout<<"\nLa capacidad de escudo con el talento nivel 3 y sin el bono de Geoarmada x4 (30% aumento de escudo) es de: "<<escudoTotalT3<<endl;
			}
			else {
				cout<<"\nDebes ingresar [Y]es o [N]o en mayusculas."<<endl;
			}
			break;
		case 4:
			escudoTotalT4 = (0.16*hpbase+shieldBaseAbsorbT4);
			cout<<"\nTienes el bono del artefacto Geoarmada x4? (30% aumento de escudo) (Y/N): "; cin>>respuestaBono;
			if (respuestaBono == 'Y'){
				escudoTotalBono30 = (escudoTotalT4+(escudoTotalT4*0.3));
				cout<<"\nLa capacidad de escudo con el talento nivel 4 y el bono de Geoarmada x4 (30% aumento de escudo) es: "<<escudoTotalBono30<<endl;
			}
			else if(respuestaBono == 'N'){
				cout<<"\nLa capacidad de escudo con el talento nivel 4 y sin el bono de Geoarmada x4 (30% aumento de escudo) es de: "<<escudoTotalT4<<endl;
			}
			else {
				cout<<"\nDebes ingresar [Y]es o [N]o en mayusculas."<<endl;
			}
			break;
		case 5:
			escudoTotalT5 = (0.1696*hpbase+shieldBaseAbsorbT5);
			cout<<"\nTienes el bono del artefacto Geoarmada x4? (30% aumento de escudo) (Y/N): "; cin>>respuestaBono;
			if (respuestaBono == 'Y'){
				escudoTotalBono30 = (escudoTotalT5+(escudoTotalT5*0.3));
				cout<<"\nLa capacidad de escudo con el talento nivel 5 y el bono de Geoarmada x4 (30% aumento de escudo) es: "<<escudoTotalBono30<<endl;
			}
			else if(respuestaBono == 'N'){
				cout<<"\nLa capacidad de escudo con el talento nivel 5 y sin el bono de Geoarmada x4 (30% aumento de escudo) es de: "<<escudoTotalT5<<endl;
			}
			else {
				cout<<"\nDebes ingresar [Y]es o [N]o en mayusculas."<<endl;
			}
			break;
		case 6:
			escudoTotalT6 = (0.1792*hpbase+shieldBaseAbsorbT6);
			cout<<"\nTienes el bono del artefacto Geoarmada x4? (30% aumento de escudo) (Y/N): "; cin>>respuestaBono;
			if (respuestaBono == 'Y'){
				escudoTotalBono30 = (escudoTotalT6+(escudoTotalT6*0.3));
				cout<<"\nLa capacidad de escudo con el talento nivel 6 y el bono de Geoarmada x4 (30% aumento de escudo) es: "<<escudoTotalBono30<<endl;
			}
			else if(respuestaBono == 'N'){
				cout<<"\nLa capacidad de escudo con el talento nivel 6 y sin el bono de Geoarmada x4 (30% aumento de escudo) es de: "<<escudoTotalT6<<endl;
			}
			else {
				cout<<"\nDebes ingresar [Y]es o [N]o en mayusculas."<<endl;
			}
			break;
		case 7:
			escudoTotalT7 = (0.192*hpbase+shieldBaseAbsorbT7);
			cout<<"\nTienes el bono del artefacto Geoarmada x4? (30% aumento de escudo) (Y/N): "; cin>>respuestaBono;
			if (respuestaBono == 'Y'){
				escudoTotalBono30 = (escudoTotalT7+(escudoTotalT7*0.3));
				cout<<"\nLa capacidad de escudo con el talento nivel 7 y el bono de Geoarmada x4 (30% aumento de escudo) es: "<<escudoTotalBono30<<endl;
			}
			else if(respuestaBono == 'N'){
				cout<<"\nLa capacidad de escudo con el talento nivel 7 y sin el bono de Geoarmada x4 (30% aumento de escudo) es de: "<<escudoTotalT7<<endl;
			}
			else {
				cout<<"\nDebes ingresar [Y]es o [N]o en mayusculas."<<endl;
			}
			break;
		case 8:
			escudoTotalT8 = (0.2048*hpbase+shieldBaseAbsorbT8);
			cout<<"\nTienes el bono del artefacto Geoarmada x4? (30% aumento de escudo) (Y/N): "; cin>>respuestaBono;
			if (respuestaBono == 'Y'){
				escudoTotalBono30 = (escudoTotalT8+(escudoTotalT8*0.3));
				cout<<"\nLa capacidad de escudo con el talento nivel 8 y el bono de Geoarmada x4 (30% aumento de escudo) es: "<<escudoTotalBono30<<endl;
			}
			else if(respuestaBono == 'N'){
				cout<<"\nLa capacidad de escudo con el talento nivel 8 y sin el bono de Geoarmada x4 (30% aumento de escudo) es de: "<<escudoTotalT8<<endl;
			}
			else {
				cout<<"\nDebes ingresar [Y]es o [N]o en mayusculas."<<endl;
			}
			break;
		case 9:
			escudoTotalT9 = (0.2176*hpbase+shieldBaseAbsorbT9);
			cout<<"\nTienes el bono del artefacto Geoarmada x4? (30% aumento de escudo) (Y/N): "; cin>>respuestaBono;
			if (respuestaBono == 'Y'){
				escudoTotalBono30 = (escudoTotalT8+(escudoTotalT9*0.3));
				cout<<"\nLa capacidad de escudo con el talento nivel 9 y el bono de Geoarmada x4 (30% aumento de escudo) es: "<<escudoTotalBono30<<endl;
			}
			else if(respuestaBono == 'N'){
				cout<<"\nLa capacidad de escudo con el talento nivel 9 y sin el bono de Geoarmada x4 (30% aumento de escudo) es de: "<<escudoTotalT9<<endl;
			}
			else {
				cout<<"\nDebes ingresar [Y]es o [N]o en mayusculas."<<endl;
			}
			
			break;
		case 10:
			escudoTotalT10 = (0.2304*hpbase+shieldBaseAbsorbT10);
			cout<<"\nTienes el bono del artefacto Geoarmada x4? (30% aumento de escudo) (Y/N): "; cin>>respuestaBono;
			if (respuestaBono == 'Y'){
				escudoTotalBono30 = (escudoTotalT10+(escudoTotalT10*0.3));
				cout<<"\nLa capacidad de escudo con el talento nivel 10 y el bono de Geoarmada x4 (30% aumento de escudo) es: "<<escudoTotalBono30<<endl;
			}
			else if(respuestaBono == 'N'){
				cout<<"\nLa capacidad de escudo con el talento nivel 10 y sin el bono de Geoarmada x4 (30% aumento de escudo) es de: "<<escudoTotalT10<<endl;
			}
			else {
				cout<<"\nDebes ingresar [Y]es o [N]o en mayusculas."<<endl;
			}
			break;
		default:
			cout<<"En el talento solo debes insertar un numero, por ejemplo '1'..."<<endl;
			break;										
	}
	
	system("pause");
	return 0;
}