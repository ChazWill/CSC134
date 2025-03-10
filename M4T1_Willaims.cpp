 //CSC134
 // M4T1 - While loops 
 // Chazidy 
 // 3/10/25

 #include <iostream>
 #include <fstream>
 using namespace std;
   
 int main()
 {
    // part 1 - just count
    int count = 1;
    while(count <= 5)
    {
        cout << "Hello #" << count << endl;
        count++; 
    }
    cout << "Done!!" << endl;

    
    const int MIN_NUM = 1;
    const int MAX_NUM = 10;
    int num = MIN_NUM;
    int sq;
    string filename = "squares.txt";

    // open the file
    ofstream outfile(filename);
    if (false == outfile.is_open()){
        cout << "Error: could not open " << filename << endl;
        return -1;
    }


    // write the table to file
    outfile << "Table of squares" << endl;
    outfile << "---------------------" << endl;
    while(num <= MAX_NUM){
        sq = num * num ;
        outfile << num << "\t" << sq << endl;
        num = num + 1;
    }
    // close the file
    outfile.close();
    return 0;
 
 }