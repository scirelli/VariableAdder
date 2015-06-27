//this function assumes correct syntax.
//none bugs: if someone for instance makes a comment such as //integers 
//or writes the letters int with out a ; or () at the end of it, this will cause an infinite loop
// if there is a ; at the end of the word int, it will add one to integers.

#include <string.h>
#include <iostream.h>

int TestForInt(int & i, char * program)
{
	int numberOfInteger=0;
	int j=3;
	bool test= true;

	if( (program[i+1] == 'n') && (program[i+2] == 't') )
	{
		
		while(test != false)
		{
			switch(program[i+j])
			{
			case ',' : numberOfInteger+=1; 
				       j++;
				       while( program[i+j] != ';' )
					   {
							if(program[i+j] == ',')
								numberOfInteger += 1;
							//cout<< "In case 1 loop " << numberOfInteger << "\n";
							j++;
					   }
					   numberOfInteger+=1;
					   test= false;
					   break;
			
			case ';' : numberOfInteger+=1; 
				       test=false;
					   //cout<< "In ; loop \n";
					   i= i+j;
				       break;
			
			case '(' : while( program[i+j] != ')' )
					   {
						   j++;
					   }
					   i= i+j;
					   test= false;
					   break;
					   

			default : j++;
			}
			
		}
	}
	return numberOfInteger;
}