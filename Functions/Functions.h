#ifndef Functions_h
#define Functions_h

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
// **********************************NEW************************************
void load_array(int array[],int dim);
void Display_array(int arr[],int d);
void Load_Matrix_2_dimensions_Random(int matrix[][10],int dim);
int Sum_Matrix_2_dimensions(int matrix1[][10],int dim);
void sum_matrix_2_dimensions_columns(int matrix1[][10],int dim,int array[]);
void even_increase_noteven_decrease(int matrix1[][10],int dim);
void Display_Matrix_2_dimensions(int matrix1[][10],int dim);
void sum_matrix_2_dimensions_lines(int matrix1[][10],int dim,int array[]);
void copy_Matrix_2_dimensions(int matrix1[][10],int dim,int matrix2[][10]);
//               ++++++++++++++++++++++OLD+++++++++++++++++++++++++++++
int Quick_search_int(int vet[],int dim,int cercato);
void Search_int_output(int array[],int dim,int search);
int Sum_array(int array[],int dime);
void Media_2_vect(int vettore1[],int vettore2[],int dim,int risultati[]);
void Media_2_vect_modulo(int vettore1[],int vettore2[],int dim,int risultati[]);
int Media_vect(int array[],int di);
int Media_vect_modulo(int array[],int d);
int Search_pari(int array[],int dime);
int Search_dispari(int array[],int dime);
int Search_min(int array[],int dime);
int Search_max(int array[],int dime);
int Search(int array[],int dime,int cercato);
void Transformers_Binary(int paziente);
void Auto_Load(int array[],int dim);
void Manual_Load(int array[],int dime);
void Bubble_Sort(int tavola[],int dim);
void Insertion_Sort(int tavola[],int dim);
void Selection_Sort(int tavola[],int dim);
int Multip(int num1,int num2);
void Show_array(int vet[],int dim);
int Fact(int paziente);
void Load_0_Array(int buff[],int dim);
void char_plus(char str[],int dim,char stringa_transformata[]);
void Search_voc_cons(char stringa[]);
int String_copy(char segment1[],char segment2[]);
int Cmp_stringa(char segment1[],char segment2[]);
int String_dimension(char compartimeni[]);
void Search_Minuscole_maiuscole(char parola_input[]);
void Load_Char_0_9(char buff[]);
void Load_Char_a_z(char buff[]);
void Load_Char_A_Z(char buff[]);
void Identify_string_output(char segment[]);
int Identify_string(char segment[],char found_copys[],int num_copys[]);
//Return number of copy found
//char - Copyes > 1
//num_copys - number per char
#endif /* Functions_h */
