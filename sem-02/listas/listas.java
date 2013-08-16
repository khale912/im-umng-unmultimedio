/**
* DOCUMENT CREATED BY JULIAN R. FIGUEROA
* about.me/julianrfigueroa
* This work is under a Creative 
* Commons License Atribution-ShareAlike 
* 3.0 Unported. CC-BY-SA
*/
import javax.swing.*;
public class listas {

	public static void main(String[] args) {
		
		String posicion, opcion, salir, guia, exit, dato, seguro, Arreglo[], ac;
		int posiciones=0, n=-1, op, ver, chao=0, j;
		
		salir=ac="";
		exit="S";
		Arreglo = new String [0];
		//Declaraci�n e inicializaci�n de variables.
		
		do{
			do{
			opcion=JOptionPane.showInputDialog(null, "Men� Principal\n\n1.Crear una Lista\n2.Probar si la lista creada est� vac�a � si contiene alg�n elemento.\n3.Ver un dato de la Lista.\n4.Insertar un valor (alfanum�rico) en la lista.\n5.Eliminar un valor de la lista.\n6.Destru�r la lista.", "Men� Principal.", JOptionPane.INFORMATION_MESSAGE);
			op=Integer.parseInt(opcion);
			if(op<1 || op >6){
			JOptionPane.showMessageDialog(null, "Por Favor escoja una opci�n citada.", "ERROR",JOptionPane.INFORMATION_MESSAGE);}
			}while(op<1 || op >6);
			
			switch(op){
			
			case 1:
				
				do{
				posicion=JOptionPane.showInputDialog(null, "Trabajo con listas.\n\nPrograma dise�ado para trabajar con listas.\nPor Favor ingrese la cantidad de posiciones\ncon las que desea trabajar.\n(Cada vez que crea una lista, datos\nanteriormente usados se perder�n).", "Trabajo de arreglos, Programaci�n III", JOptionPane.INFORMATION_MESSAGE );
				posiciones=Integer.parseInt(posicion);
				
				if (posiciones>0){
					Arreglo = new String [posiciones+1];
					JOptionPane.showMessageDialog(null, "Su lista de "+posiciones+" posiciones ha sido creada correctamente", "Lista creada", JOptionPane.INFORMATION_MESSAGE);}
				else{
					JOptionPane.showMessageDialog(null, "Por Favor Ingresa un valor mayor a cero.", "ERROR", JOptionPane.INFORMATION_MESSAGE);}
				}while (posiciones<1);
				n=0;

				break;
				
			case 2:
		
				if(n<0){	
				JOptionPane.showMessageDialog(null, "Por Favor cree Primero la Lista, no hay valores", "Lista No Existente", JOptionPane.INFORMATION_MESSAGE);}
				else{
					if(n<1 && n>-1){
						JOptionPane.showMessageDialog(null, "La lista ya ha sido creada, no hay valores", "Lista Existente", JOptionPane.INFORMATION_MESSAGE);}
					else{
						JOptionPane.showMessageDialog(null, "La lista ya ha sido creada, hay al menos un valor.", "Lista Existente", JOptionPane.INFORMATION_MESSAGE);}
				}
				
				break;
				
			case 3:
				
				if(n<0){
				JOptionPane.showMessageDialog(null, "Por Favor cree Primero la Lista, no hay valores", "Lista No Existente", JOptionPane.INFORMATION_MESSAGE);}
				else{
					do{
						guia=JOptionPane.showInputDialog(null, "�Qu� posici�n desea consultar?", "Consulta en la Lista", JOptionPane.INFORMATION_MESSAGE);
						ver=Integer.parseInt(guia);
				
				if (ver>0 && ver <posiciones+1){	
				if (ver>n){
					JOptionPane.showMessageDialog(null, "La posici�n "+ver+"-�sima no est� ocupada a�n.", "Dato Vac�o", JOptionPane.INFORMATION_MESSAGE);}
				else{
					JOptionPane.showMessageDialog(null, "La posici�n "+ver+"-�sima est� ocupada ", "Dato Ocupado", JOptionPane.INFORMATION_MESSAGE);}
					JOptionPane.showMessageDialog(null, "El dato es: "+Arreglo[ver]+".", "Dato Pedido", JOptionPane.INFORMATION_MESSAGE);}
				else{
					JOptionPane.showMessageDialog(null, "Ingrese una posici�n coherente.", "ERROR", JOptionPane.INFORMATION_MESSAGE);}
				}while(ver<=0);
				}
				
				break;
				
			case 4:
				if(n>=posiciones){
					JOptionPane.showMessageDialog(null, "No se pueden agregar m�s datos a la lista, est� llena.", "Lista Llena", JOptionPane.INFORMATION_MESSAGE);
				}else{
				if(n<0){	
				JOptionPane.showMessageDialog(null, "Por Favor cree Primero la Lista, no hay valores", "Lista No Existente", JOptionPane.INFORMATION_MESSAGE);
				}
				else{	
					do{	
						guia=JOptionPane.showInputDialog(null, "�En qu� posici�n desea ingresar su dato?", "Ingreso en la Lista", JOptionPane.INFORMATION_MESSAGE);
						ver=Integer.parseInt(guia);
						
					if (ver>0 && ver <posiciones+1){
						dato=JOptionPane.showInputDialog(null, "Ingrese el dato (alfanum�rico).", "Ingreso de dato", JOptionPane.INFORMATION_MESSAGE);
						if (ver>n){	
							ver=n+1;}
						else{
						for (j=n; j>=ver; j--){	
							Arreglo[j+1]=Arreglo[j];}
						}
						Arreglo[ver]=dato;
						JOptionPane.showMessageDialog(null, "El dato ha sido ingresado correctamente.", "Dato Ingresado", JOptionPane.INFORMATION_MESSAGE);
						n++;
						}
					else{
						JOptionPane.showMessageDialog(null, "Ingrese una posici�n coherente.", "ERROR", JOptionPane.INFORMATION_MESSAGE);}
				}while(ver<=0 || ver>posiciones+1);	
				}	
				}
				
				break;
				
			case 5:
				
				if(n<0){	
				JOptionPane.showMessageDialog(null, "Por Favor cree Primero la Lista, no hay valores", "Lista No Existente", JOptionPane.INFORMATION_MESSAGE);
				}else{	
					do{	
						guia=JOptionPane.showInputDialog(null, "�Qu� posici�n desea eliminar de la lista?", "Eliminaci�n en la Lista", JOptionPane.INFORMATION_MESSAGE);
						ver=Integer.parseInt(guia);
					if (ver>0 && ver <posiciones+1){
						if (ver>n){	
							JOptionPane.showMessageDialog(null, "La posici�n "+ver+"-�sima no est� ocupada a�n.", "Dato Vac�o", JOptionPane.INFORMATION_MESSAGE);}
						else{
							if(ver!=n){
							for (j=ver; j<n; j++){	
								Arreglo[j]=Arreglo[j+1];}}
							n--;
							JOptionPane.showMessageDialog(null, "El dato ha sido eliminado correctamente.", "Dato Eliminado", JOptionPane.INFORMATION_MESSAGE);}}
					else{
						JOptionPane.showMessageDialog(null, "Ingrese una posici�n coherente.", "ERROR", JOptionPane.INFORMATION_MESSAGE);}
				}while(ver<=0 || ver>posiciones);
				}
				
				break;
				
			case 6:
				
				if(n<0){	
				JOptionPane.showMessageDialog(null, "Por Favor cree Primero la Lista, no hay valores", "Lista No Existente", JOptionPane.INFORMATION_MESSAGE);}
				else{
					seguro=JOptionPane.showInputDialog(null, "�Est� seguro que desea destru�r la lista? (S/N)", "�DELETE?", JOptionPane.INFORMATION_MESSAGE);
					if (seguro.equalsIgnoreCase(exit)){
						for (j=1; j<=n; j++){	
						Arreglo[j]=Arreglo[j+1];}
						JOptionPane.showMessageDialog(null, "La lista ha sido destru�da correctamente.", "Lista Destru�da", JOptionPane.INFORMATION_MESSAGE);	
						n=-1;}	
				}
			
				break;}
			
			if(n>0){
				for	(j=1; j<=n; j++){
				ac=ac+"Posici�n "+j+": "+Arreglo[j]+"\n";}
				JOptionPane.showMessageDialog(null, "Hasta ahora la lista es la siguiente:\n\n"+ac, "Control de Lista", JOptionPane.INFORMATION_MESSAGE);
				ac="";}
			
			salir=JOptionPane.showInputDialog(null, "�Desea Salir de la aplicacion? (S/N)", "�EXIT?", JOptionPane.INFORMATION_MESSAGE);
			
			if (salir.equalsIgnoreCase(exit)){
			chao=1;}
			
		}while (chao !=1);}
}