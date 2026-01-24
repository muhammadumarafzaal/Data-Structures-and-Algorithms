//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct Node {
//    string song;
//    int frequency;
//    Node* left;
//    Node* right;
//    Node* next;
//    int height;
//
//    Node(string Song, int F) {
//        song = Song;
//        frequency = F;
//        left = right = next = nullptr;
//        height = 1;
//    }
//};
//
//// Helper functions
//int getHeight(Node* root) {
//    return root ? root->height : 0;
//}
//
//int getBalance(Node* root) {
//    return root ? getHeight(root->left) - getHeight(root->right) : 0;
//}
//
//Node* leftRotate(Node* root) {
//    Node* child = root->right;
//    Node* childLeft = child->left;
//
//    child->left = root;
//    root->right = childLeft;
//
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
//
//    return child;
//}
//
//Node* rightRotate(Node* root) {
//    Node* child = root->left;
//    Node* childRight = child->right;
//
//    child->right = root;
//    root->left = childRight;
//
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
//
//    return child;
//}
//
//Node* Insert(Node* root, string song, int key) {
//    if (!root) {
//        return new Node(song, key);
//    }
//
//    if (key < root->frequency) {
//        root->left = Insert(root->left, song, key);
//    }
//    else if (key > root->frequency) {
//        root->right = Insert(root->right, song, key);
//    }
//    else { // Handle duplicate frequency
//        Node* temp = new Node(song, key);
//        Node* current = root;
//        while (current->next) {
//            current = current->next;
//        }
//        current->next = temp;
//        return root;
//    }
//
//    // Update height
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//
//    // Balance the tree
//    int balanceFactor = getBalance(root);
//
//    // Left Left Case
//    if (balanceFactor > 1 && key < root->left->frequency) {
//        return rightRotate(root);
//    }
//
//    // Right Right Case
//    if (balanceFactor < -1 && key > root->right->frequency) {
//        return leftRotate(root);
//    }
//
//    // Left Right Case
//    if (balanceFactor > 1 && key > root->left->frequency) {
//        root->left = leftRotate(root->left);
//        return rightRotate(root);
//    }
//
//    // Right Left Case
//    if (balanceFactor < -1 && key < root->right->frequency) {
//        root->right = rightRotate(root->right);
//        return leftRotate(root);
//    }
//
//    return root;
//}
//
//bool findSong(Node* root, string songName) {
//    if (!root)
//        return false;
//
//    if (root->song == songName) {
//        cout << "Song found!\n";
//        cout << "Song name: " << songName << endl;
//        root->frequency++;
//        cout << "New frequency: " << root->frequency << endl;
//        return true;
//    }
//
//    if (songName < root->song)
//        return findSong(root->left, songName);
//    else
//        return findSong(root->right, songName);
//}
//
//void printSong(Node* root) {
//    if (!root) {
//        return;
//    }
//
//    printSong(root->left);
//
//    cout << "Song: " << root->song << ", Played: " << root->frequency << " times" << endl;
//
//    Node* current = root->next;
//    while (current) {
//        cout << "  - " << current->song << ", Played: " << current->frequency << " times" << endl;
//        current = current->next;
//    }
//
//    printSong(root->right);
//}
//
//int main() {
//    Node* root = nullptr;
//
//    while (true) {
//        int choice;
//        cout << "1. Add Song" << endl;
//        cout << "2. Play Song" << endl;
//        cout << "3. Print Playlist by Frequency" << endl;
//        cout << "4. Exit" << endl;
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            string songName;
//            int freq;
//            cout << "Enter the song name:" << endl;
//            cin.ignore();
//            getline(cin, songName);
//            cout << "Enter the song frequency:" << endl;
//            cin >> freq;
//            root = Insert(root, songName, freq);
//            break;
//        }
//        case 2: {
//            string songName;
//            cout << "Enter the song name:" << endl;
//            cin.ignore();
//            getline(cin, songName);
//            if (!findSong(root, songName)) {
//                cout << "Song not found, cannot play the song." << endl;
//            }
//            break;
//        }
//        case 3: {
//            cout << "Your Playlist:" << endl;
//            printSong(root);
//            break;
//        }
//        case 4: {
//            cout << "Exiting..." << endl;
//            return 0;
//        }
//        default: {
//            cout << "Invalid choice, please try again." << endl;
//            break;
//        }
//        }
//    }
//
//    return 0;
//}
