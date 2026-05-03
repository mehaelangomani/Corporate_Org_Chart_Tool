/*
 * Corporate Org Chart Tool - Employee Hierarchy Tree
 * CRUD Operations using Binary Tree in C
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Employee node structure
struct Employee {
    int id;
    char name[50];
    char position[50];
    struct Employee* left;
    struct Employee* right;
};

// Forward declaration (so insert can use search)
struct Employee* search(struct Employee* root, int id);

// Create a new employee node
struct Employee* create(int id, char name[], char position[]) {
    struct Employee* newNode = (struct Employee*)malloc(sizeof(struct Employee));
    newNode->id = id;
    strcpy(newNode->name, name);
    strcpy(newNode->position, position);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Search employee by ID
struct Employee* search(struct Employee* root, int id) {
    if (root == NULL) return NULL;
    if (root->id == id) return root;
    struct Employee* found = search(root->left, id);
    if (found) return found;
    return search(root->right, id);
}

// Add new employee
struct Employee* insert(struct Employee* root) {
    int id, parentId, choice;
    char name[50], position[50];

    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Position: ");
    scanf(" %[^\n]", position);

    struct Employee* newNode = create(id, name, position);

    // If tree is empty, this becomes root
    if (root == NULL) {
        printf("Added as root (CEO).\n");
        return newNode;
    }

    printf("Enter Parent ID: ");
    scanf("%d", &parentId);

    struct Employee* parent = search(root, parentId);
    if (parent == NULL) {
        printf("Parent not found!\n");
        free(newNode);
        return root;
    }

    printf("1. Left  2. Right\nChoice: ");
    scanf("%d", &choice);

    if (choice == 1)
        parent->left = newNode;
    else
        parent->right = newNode;

    printf("Employee added!\n");
    return root;
}

// Display tree (indented)
void display(struct Employee* root, int level) {
    if (root == NULL) return;
    for (int i = 0; i < level; i++) printf("  ");
    printf("[%d] %s - %s\n", root->id, root->name, root->position);
    display(root->left, level + 1);
    display(root->right, level + 1);
}

// Update employee name and position
void update(struct Employee* root) {
    int id;
    printf("Enter ID to update: ");
    scanf("%d", &id);

    struct Employee* emp = search(root, id);
    if (emp == NULL) {
        printf("Not found!\n");
        return;
    }

    printf("Enter new Name: ");
    scanf(" %[^\n]", emp->name);
    printf("Enter new Position: ");
    scanf(" %[^\n]", emp->position);
    printf("Updated!\n");
}

// Delete a leaf node only
struct Employee* deleteNode(struct Employee* root, int id) {
    if (root == NULL) return NULL;

    // Delete root if it's a leaf
    if (root->id == id) {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            printf("Deleted!\n");
            return NULL;
        } else {
            printf("Cannot delete: has subordinates.\n");
            return root;
        }
    }

    // Check left child
    if (root->left && root->left->id == id) {
        if (root->left->left == NULL && root->left->right == NULL) {
            free(root->left);
            root->left = NULL;
            printf("Deleted!\n");
        } else {
            printf("Cannot delete: has subordinates.\n");
        }
        return root;
    }

    // Check right child
    if (root->right && root->right->id == id) {
        if (root->right->left == NULL && root->right->right == NULL) {
            free(root->right);
            root->right = NULL;
            printf("Deleted!\n");
        } else {
            printf("Cannot delete: has subordinates.\n");
        }
        return root;
    }

    deleteNode(root->left, id);
    deleteNode(root->right, id);
    return root;
}

// Free all memory
void freeTree(struct Employee* root) {
    if (root == NULL) return;
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

// Main menu
int main() {
    struct Employee* root = NULL;
    int choice, id;

    while (1) {
        printf("\n--- Org Chart Menu ---\n");
        printf("1. Add Employee\n");
        printf("2. Delete Employee\n");
        printf("3. Update Employee\n");
        printf("4. Search Employee\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                root = insert(root);
                break;
            case 2:
                printf("Enter ID to delete: ");
                scanf("%d", &id);
                root = deleteNode(root, id);
                break;
            case 3:
                update(root);
                break;
            case 4: {
                printf("Enter ID to search: ");
                scanf("%d", &id);
                struct Employee* emp = search(root, id);
                if (emp)
                    printf("Found: [%d] %s - %s\n", emp->id, emp->name, emp->position);
                else
                    printf("Not found.\n");
                break;
            }
            case 5:
                display(root, 0);
                break;
            case 6:
                freeTree(root);
                printf("Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
}