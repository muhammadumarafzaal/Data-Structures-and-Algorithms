//#include <iostream>
//#include <string>
//#include<algorithm>
//using namespace std;
//struct Node {
//    int frequency;
//    string song;
//    Node* left;
//    Node* right;
//    Node* next;
//    int height;
//
//    Node(int f, string songName) {
//        frequency = f;
//        song = songName;
//        left = right = next = nullptr;
//        height = 1;
//    }
//};
//
//int getHeight(Node* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    return root->height;
//}
//int Balance(Node* root)
//{
//    if (root == NULL)
//    {
//        return 0;
//    }
//    return getHeight(root->left) - getHeight(root->right);
//}
//Node* leftRotate(Node* root) {
//    Node* child = root->right;
//    Node* childLeft = child->left;
//    child->left = root;
//    root->right = childLeft;
//    //check height for becasue we rotated it so check height for root and child
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
//    return child;
//}
//Node* rightRotate(Node* root) {
//    Node* child = root->left;
//    Node* childRight = child->right;
//    child->right = root;
//    root->left = childRight;
//    //check height for becasue we rotated it so check height for root and child
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    child->height = 1 + max(getHeight(child->left), getHeight(child->right));
//    return child;
//}
//Node* insert(Node* root, int key, string name) {
//    if (root == nullptr) {
//        return new Node(key, name);
//    }
//
//    if (key < root->frequency) {
//        root->left = insert(root->left, key, name);
//    }
//    else if (key > root->frequency) {
//        root->right = insert(root->right, key, name);
//    }
//    else {
//        Node* temp = new Node(key, name);
//        Node* current = root;
//        while (current->next != nullptr) {
//            current = current->next;
//        }
//        current->next = temp;
//    }
//    root->height = 1 + max(getHeight(root->left), getHeight(root->right));
//    int balanceFactor =Balance(root);
//    if (balanceFactor > 1 && key < root->left->frequency) {
//        return rightRotate(root);
//    }
//    if (balanceFactor < -1 && key > root->right->frequency) {
//        return leftRotate(root);
//    }
//    if (balanceFactor > 1 && key > root->left->frequency) {
//        root->left = leftRotate(root->left);
//        return rightRotate(root);
//    }
//    if (balanceFactor < -1 && key < root->right->frequency) {
//        root->right = rightRotate(root->right);
//        return leftRotate(root);
//    }
//
//    return root;
//}
//bool playSong(Node* root, string songName) {
//    if (root == nullptr) {
//        return false;
//    }
//    if (root->song == songName) {
//        cout << "SONG FOUND!" << endl;
//        cout << "PLAYING SONG: " << songName << endl;
//        root->frequency++;
//        cout << "THE NEW SONG FREQUENCY IS " << root->frequency << endl;
//        return true;
//    }
//    return playSong(root->left, songName) || playSong(root->right, songName);
//}
//void printPlaylist(Node* root) {
//    if (root == nullptr) {
//        return;
//    }
//    printPlaylist(root->left);
//    cout << "THE SONG NAME IS " << root->song << " PLAYED: " << root->frequency << " TIMES" << endl;
//    Node* current = root->next;
//    while (current != nullptr) {
//        cout << "THE SONG NAME IS " << current->song << " PLAYED: " << current->frequency << " TIMES" << endl;
//        current = current->next;
//    }
//    printPlaylist(root->right);
//}
//
//int main() {
//    Node* root = nullptr;
//    while (true) {
//        int choice;
//        cout << "1. ADD A NEW SONG" << endl;
//        cout << "2. PLAY A SONG" << endl;
//        cout << "3. PRINT SONGS BASED ON FREQUENCY" << endl;
//        cout << "4. EXIT" << endl;
//        cin >> choice;
//
//        switch (choice) {
//        case 1: {
//            string name;
//            cout << "ENTER THE SONG NAME: " << endl;
//            cin.ignore();
//            getline(cin, name);
//            cout << "ENTER THE SONG FREQUENCY: " << endl;
//            int freq;
//            cin >> freq;
//            root = insert(root, freq, name);
//            break;
//        }
//        case 2: {
//            string songName;
//            cout << "ENTER THE SONG NAME TO PLAY: " << endl;
//            cin.ignore();
//            getline(cin, songName);
//            bool found = playSong(root, songName);
//            if (!found) {
//                cout << "THE SONG WAS NOT FOUND IN THE PLAYLIST" << endl;
//            }
//            break;
//        }
//        case 3: {
//            cout << "YOUR PLAYLIST:" << endl;
//            printPlaylist(root);
//            break;
//        }
//        case 4: {
//            cout << "EXITING... THANKS FOR USING THE PLAYLIST MANAGER" << endl;
//            return 0;
//        }
//        default:
//            cout << "INVALID CHOICE. PLEASE TRY AGAIN." << endl;
//        }
//    }
//}