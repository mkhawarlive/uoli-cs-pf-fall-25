/*
Program: 4
Just observe indentation
*/
#include <iostream>

using namespace std;

class Student {
private:
    int studentID;
    double gpa;
    int degreeStatus;

public:
    Student() : studentID(0), gpa(0.0), degreeStatus(0) {}

    Student(int id, double gpa, int status) : studentID(id), gpa(gpa), degreeStatus(status) {}

    int getStudentID() const {
        return studentID;
    }

    double getGPA() const {
        return gpa;
    }

    int getDegreeStatus() const {
        return degreeStatus;
    }
};

class TreeNode {
public:
    Student data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(const Student& s) : data(s), left(nullptr), right(nullptr) {}
};

class BST {
private:
    TreeNode* root;
    int treeSize;

    void insertHelper(TreeNode*& node, const Student& s) {
        if (node == nullptr) {
            node = new TreeNode(s);
            treeSize++;
        } else {
            if (s.getStudentID() < node->data.getStudentID()) {
                insertHelper(node->left, s);
            } else if (s.getStudentID() > node->data.getStudentID()) {
                insertHelper(node->right, s);
            }
            // Note: If the student ID is already in the tree, we may choose to handle it differently.
            // Here, we are ignoring duplicates.
        }
    }

    TreeNode* removeNodeHelper(TreeNode* node, int ID) {
        if (node == nullptr) {
            return nullptr;
        }

        if (ID < node->data.getStudentID()) {
            node->left = removeNodeHelper(node->left, ID);
        } else if (ID > node->data.getStudentID()) {
            node->right = removeNodeHelper(node->right, ID);
        } else {
            if (node->left == nullptr) {
                TreeNode* temp = node->right;
                delete node;
                treeSize--;
                return temp;
            } else if (node->right == nullptr) {
                TreeNode* temp = node->left;
                delete node;
                treeSize--;
                return temp;
            }

            TreeNode* temp = findMin(node->right);
            node->data = temp->data;
            node->right = removeNodeHelper(node->right, temp->data.getStudentID());
        }

        return node;
    }

    TreeNode* findMin(TreeNode* node) const {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }

    void removeByDegreeStatusHelper(TreeNode*& node, int degreeStatus) {
        if (node == nullptr) {
            return;
        }

        removeByDegreeStatusHelper(node->left, degreeStatus);
        removeByDegreeStatusHelper(node->right, degreeStatus);

        if (node->data.getDegreeStatus() == degreeStatus) {
            node = removeNodeHelper(node, node->data.getStudentID());
        }
    }

    void displayMinMaxCGPAHelper(TreeNode* node, double& minGPA, double& maxGPA) const {
        if (node == nullptr) {
            return;
        }

        displayMinMaxCGPAHelper(node->left, minGPA, maxGPA);

        double studentGPA = node->data.getGPA();
        if (studentGPA < minGPA) {
            minGPA = studentGPA;
        }
        if (studentGPA > maxGPA) {
            maxGPA = studentGPA;
        }

        displayMinMaxCGPAHelper(node->right, minGPA, maxGPA);
    }

    int heightHelper(TreeNode* node) const {
        if (node == nullptr) {
            return 0;
        }

        int leftHeight = heightHelper(node->left);
        int rightHeight = heightHelper(node->right);

        return 1 + std::max(leftHeight, rightHeight);
    }

    double averageGPAHelper(TreeNode* node, int degreeStatus, int& count, double& totalGPA) const {
        if (node == nullptr) {
            return 0.0;
        }

        double leftAverage = averageGPAHelper(node->left, degreeStatus, count, totalGPA);
        double rightAverage = averageGPAHelper(node->right, degreeStatus, count, totalGPA);

        if (node->data.getDegreeStatus() == degreeStatus) {
            count++;
            totalGPA += node->data.getGPA();
        }

        return (leftAverage + rightAverage + node->data.getGPA());
    }

public:
    BST() : root(nullptr), treeSize(0) {}

    void insert(const Student& s) {
        insertHelper(root, s);
    }

    void removeNode(int ID) {
        root = removeNodeHelper(root, ID);
    }

    void remove(int degreeStatus) {
        removeByDegreeStatusHelper(root, degreeStatus);
    }

    int size() const {
        return treeSize;
    }

    void display() const {
        double minGPA = 100.0;
        double maxGPA = 0.0;
        displayMinMaxCGPAHelper(root, minGPA, maxGPA);

        cout << "Minimum CGPA: " << minGPA << endl;
        cout << "Maximum CGPA: " << maxGPA << endl;
    }

    int height() const {
        return heightHelper(root);
    }

    double averageGPA(int degreeStatus) const {
        int count = 0;
        double totalGPA = 0.0;

        double avg = averageGPAHelper(root, degreeStatus, count, totalGPA);

        if (count == 0) {
            return 0.0;
        }

        return totalGPA / count;
    }
};