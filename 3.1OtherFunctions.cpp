void SubmitResponse(int *i,int num1, char *pointerToString1, char *PointerToString2)
{
    system("CLS");
    cout << "Random String :-" << endl;

    for (int i9 = 0; i9 < num1; i9++)
    {
        cout << *(pointerToString1 + i9);
    }
    cout << endl;

    for (int i8 = 0; i8 < *i; i8++)
    {
        cout << *(PointerToString2 + i8);
    }

    *i = (*i - 1);
}

void backspace(int *i,int num1, char *pointerToString1, char *PointerToString2)
{
    system("CLS");
                 cout << "Random String :-" << endl;

                 for (int i9 = 0; i9 < num1; i9++)
                 {
                     cout << *(pointerToString1+i9);
                 }
                 cout<<endl;
                 
                for (int i8 = 0; i8 < *i-1; i8++)
                {
                    cout << *(PointerToString2+i8);
                }

                *i=(*i-2);
}