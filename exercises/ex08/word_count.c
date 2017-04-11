// Solution by Andrew Pan

#include <stdio.h>
#include <stdlib.h>
#include <glib.h>

// Function to be passed into g_hash_table_foreach to be called on each value in the table
void printTable(gpointer key, gpointer val, gpointer user_data) {
 	printf(user_data, (char*) key, (int*) val);
}

// Given a file name and a GHashTable, it populates the hash table with word frequency and prints the table's contents
void wordCount(char *targetFile, GHashTable *ans){
    gchar *fileContents = malloc(sizeof(char **));
    g_file_get_contents(targetFile, &fileContents, NULL, NULL);
    // Split the file into words based on spaces
    gchar **words = g_strsplit(fileContents, " ", -1);

    // Iterate through each word and either add to hash table or increment the frequency of the existing word in the hash table
    while(*words) {
        gpointer val = g_hash_table_lookup(ans, *words);
        if (val) {
            g_hash_table_replace(ans, *words, (gpointer) (val + 1));
        }
        else {
            g_hash_table_insert(ans, *words, (gpointer) 1);
        }
        words++;
    }

    g_hash_table_foreach(ans, printTable, "Freq of %s is %d\n");
    g_free(fileContents);
    g_free(*words);
}

int main(int argc, char** argv) {
	char* text_file = argv[1];
    GHashTable* hash = g_hash_table_new(g_str_hash, g_str_equal);
    wordCount(text_file, hash);
    
    return 0;
}
