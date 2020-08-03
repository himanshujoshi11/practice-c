
struct student {
char fname[128];
char lname[128];
char year[128];
char major [128];
float gpa;
};

struct student * start;
struct student * mover;
struct student * ptr;

struct student Student1 = {"Ian", "Wheeler", "Jr", "CSCI", 3.5};
struct student Student2 = {"Kaelin", "Pham", "F", "PHYS", 3.0};
struct student Student3 = {"Chance", "Doherty", "Jr", "COMM", 3.2};
struct student Student4 = {"Kiran", "Modi", "Sr", "CHEM", 2.9};
struct student Student5 = {"Adam", "Wilson", "Soph", "PSY", 3.7};

int recordCount = 0;
int accessRecord = 0;

void printRecords(){
	if(recordCount != 0){
		for (int index=0; index < recordCount; index++) {
			//access the info about each student
			printf("Name: %s\n", mover[index].fname);
			printf("Last Name: %s\n", mover[index].lname);
			printf("School Year: %s\n", mover[index].year);
			printf("Major: %s\n", mover[index].major);
			printf("GPA: %f\n", mover[index].gpa);
			printf("\n");    //skip a line to make data readable
		}
	}
	else{
		printf("There are no records in the database to print out.\n");
	}
	accessRecord++;
}

void printNumRecords(){
	printf("Number of records: %d\n", recordCount);
}

void printDataSize(){
	printf("Size of database is: %ld\n", recordCount * sizeof(struct student));
	accessRecord++;
}

void addRecord(){

	//1. ptr variable of same struct - struct student * head;
	//2. if u add to database, and it's empty, you get memory from head and recordCount, memcpy head -> recordCount, memcpy ptr -> head
	//3. add second one, introduce mover (recordCount + 1) * sizeof(struct student)
	//4. copy ptr tp mover, free ptr
	//5. add new data to move, memcpy(mover[recordCount]).name,major,gpa = head->name,major,gpa
	//6. memcpy(mover ->ptr)
	//recordCount++, accessCount++

	struct student * head;
	head = malloc(sizeof(struct student));

	//adding pre-made student records
	if (recordCount == 0) {
		memcpy(head, &Student1, sizeof(struct student));
		// printf("New record added is: %s %s\n", head->fname, head->lname);
	}
	else if (recordCount == 1) {
		memcpy(head, &Student2, sizeof(struct student));
		// printf("New record added is: %s %s\n", head->fname, head->lname);
	}
	else if (recordCount == 2){
		memcpy(head, &Student3, sizeof(struct student));
		// printf("New record added is: %s %s\n", head->fname, head->lname);
	}
	else if (recordCount == 3){
		memcpy(head, &Student4, sizeof(struct student));
		// printf("New record added is: %s %s\n", head->fname, head->lname);
	}
	else if (recordCount == 4){
		memcpy(head, &Student5, sizeof(struct student));
		// printf("New record added is: %s %s\n", head->fname, head->lname);
	}
	else if (recordCount > 4){
		printf("There's no more records to add! \n");
		return;
	}

	if (recordCount == 0) {//if database is empty, create memory for database structure
		start = malloc(sizeof(struct student));
		ptr = malloc(sizeof(struct student));

		memcpy(start, head, sizeof(struct student));
		memcpy(ptr, start, sizeof(struct student));

		free(mover);
		mover = malloc((recordCount + 1) * sizeof(struct student));		//creating space to add record
		memcpy(mover, ptr, (recordCount *sizeof(struct student)));
		free(ptr); //clear the pointer

		printf("Enter first name: \n");
		scanf("%s", head->fname);
		printf("Enter last name: \n");
		scanf("%s", head->lname);
		printf("Enter year (F, Soph, Jr or Sr): \n");
		scanf("%s", head->year);
		printf("Enter the major: \n");
		scanf("%s", head->major);
		//add the student record info
		memcpy(mover[recordCount].fname, head->fname, sizeof(head->fname));
		memcpy(mover[recordCount].lname, head->lname, sizeof(head->lname));
		memcpy(mover[recordCount].year, head->year, sizeof(head->year));
		memcpy(mover[recordCount].major, head->major, sizeof(head->major));
		mover[recordCount].gpa = head->gpa;

		ptr = malloc((recordCount + 1) * sizeof(struct student));
		memcpy(ptr, mover, ((recordCount + 1) * sizeof(struct student)));
	}
	else{//structure already created, add memory to structure
		free(mover);
		mover = malloc((recordCount + 1) * sizeof(struct student));		//creating space to add record
		memcpy(mover, ptr, (recordCount *sizeof(struct student)));
		free(ptr); //clear the pointer

		printf("Enter first name: \n");
		scanf("%s", head->fname);
		printf("Enter last name: \n");
		scanf("%s", head->lname);
		printf("Enter year (F, Soph, Jr or Sr): \n");
		scanf("%s", head->year);
		printf("Enter the major: \n");
		scanf("%s", head->major);

		//add the student record info
		memcpy(mover[recordCount].fname, head->fname, sizeof(head->fname));
		memcpy(mover[recordCount].lname, head->lname, sizeof(head->lname));
		memcpy(mover[recordCount].year, head->year, sizeof(head->year));
		memcpy(mover[recordCount].major, head->major, sizeof(head->major));
		mover[recordCount].gpa = head->gpa;

		ptr = malloc((recordCount + 1) * sizeof(struct student));
		memcpy(ptr, mover, ((recordCount + 1) * sizeof(struct student)));
	}

	free(head);
	recordCount++;
	accessRecord++;
}
void deleteRecord(){
	//1. free mover
	//2. ptr has everything
	//3. reallocate mover (recordCount) * sizeof(struct student)
	//4. memcpy(mover, ptr), (recordCount)*sizeof(struct student))

	if (recordCount == 0){
		printf("Database is empty! \n");
	}
	else{
		free(mover);
		mover = malloc(recordCount * sizeof(struct student));
		memcpy(mover, ptr, (recordCount) * sizeof(struct student));

		fprintf(stderr, "One record deleted. \n");
		recordCount--;
		accessRecord++;
	}

}

void accessNum(){
	printf("Number of times this database has been accessed: %d\n", accessRecord);
}
