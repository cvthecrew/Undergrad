//Alexander Cannell
//CSIS 3150
//6.	Create two new different and interesting images.

#include <stdio.h>
#include <string.h>

struct student{
	char *firstName;
	char *lastName;
	char *major;
	char *email;
	
};
int main(){
	struct student ns;
	struct student *sptr;
	
	ns.firstName = "ALEX";
	ns.lastName = "CANNELL";
	ns.major = "Computer Forensics";
	ns.email = "SEXY@IKNOWIT.com"
	
	sptr = &ns;
	
	printf("First Name = %s\n", ns.firstName);
	printf("Last Name = %s\n", sptr->lastName);
	printf("Major = %s\n", (*sptr).major;
	printf("Email = %s\n", (*sptr).email);
}