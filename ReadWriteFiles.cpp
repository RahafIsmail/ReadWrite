struct node *Read(struct node *h)
{
	FILE *fp;
 char line[LINE_MAX];

	if ((fp = fopen("input.txt", "r")) == NULL){
	 cout<<"Error when reading a file.."<<endl;
	 return 0;
		}
	int z=1;        
	while (fgets(line, LINE_MAX, fp) != NULL) {
		 int n[3];
	        sscanf(line,"%d:%d:%d\n",&n[0],&n[1],&n[2]);
	    	h=insertback(h,n[0],n[1],n[2],z);
	    	z=z+1; 		
	}
	fclose(fp);
	return h;
}

void write(string r)
{
	ofstream writef("output.txt");
	if (!writef) {
			writef.open("output.txt");
			writef <<r<<endl;
		writef.close(); 
		cout<<" -File updated.. \n";
	}
	else {
		writef <<r<<endl;
		writef.close(); 
		cout<<"-File updated.. \n";
	}
}

void readOut(void){
	string out;
	ifstream read("output.txt");
	if (read.is_open()){
	string l;//line
	while (getline(read, l))
 {
 cout << l << endl;
 }
}
read.close();
cout<<out;
}
