#include <bits/stdc++.h>
using namespace std;
// 1. Khai báo
struct Student
{
    string name, id, loai;
    float point;
};
struct node
{
    Student data;
    node *next;
};
node *createNode(Student val)
{
    node *temp;
    temp = new node();
    temp->next = NULL;
    temp->data = val;
    return temp;
}
node *addHead(node *head, Student val)
{
    node *temp = createNode(val);
    if (head == NULL)
        head = temp;
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;
}
void printList(node *head)
{
    node *curr;
    curr = head;
    while (curr->next != NULL)
    {
        cout << curr->data.id << " - " << curr->data.name << " - " << curr->data.point << " - " << curr->data.loai;
        cout << endl;
        curr = curr->next;
    }
}
bool findNode(node *head, string ids)
{
    node *curr;
    curr = head;
    while (curr->next != NULL)
    {
        if (curr->data.id == ids)
            return true;
        curr = curr->next;
    }
    return false;
}
node *deleteNode(node *head, string ids)
{
    node *curr, *before;
    curr = head;
    before = NULL;
    while (curr->next != NULL)
    {
        if (curr->data.id == ids)
            break;
        else
        {
            before = curr;
            curr = curr->next;
        }
    }
    if (before == NULL)
    {
        head = curr->next;
    }
    else if (curr->next != NULL)
        before->next = curr->next;
    return head;
}
string xepLoai(float p)
{
    if (p <= 3.6)
        return "Yeu";
    if (p < 6.5)
        return "Trung binh";
    if (p < 7.0)
        return "Trung binh kha";
    if (p < 8.0)
        return "Kha";
    if (p < 9.0)
        return "Gioi";
    return "Xuat sac";
}
node *inLoaiSV(node *head)
{
    node *curr;
    curr = head;
    while (curr->next != NULL)
    {
        curr->data.loai = xepLoai(curr->data.point);
        curr = curr->next;
    }
    return head;
}
void lietke(node *head)
{
    node *curr;
    curr = head;
    while (curr->next != NULL)
    {
        if (curr->data.point >= 5)
        {
            cout << curr->data.id << " - " << curr->data.name << " - " << curr->data.point << " - " << curr->data.loai;
            cout << endl;
        }
        curr = curr->next;
    }
}
int main()
{
    string s, ma;
    float x;
    Student temp;
    node *head = new node();
    // 2. Nhập danh sách
    do
    {
        getline(cin, s);
        scanf("\n");
        getline(cin, ma);
        cin >> x;
        cin.ignore();
        // Thêm vào đầu danh sách
        if (s != "")
        {
            temp.name = s;
            temp.id = ma;
            temp.point = x;
            head = addHead(head, temp);
        }
    } while (s != "");

    // 3. Tìm sinh viên trong danh sách
    cout << "Nhap ma sinh vien can tim: ";
    cin >> ma;
    if (findNode(head, ma))
        cout << "Co trong danh sach\n";
    else
        cout << "Khong tim thay\n";

    // 4. Xoa mot sinh vien
    cout << "Nhap ma sinh vien can xoa: ";
    cin >> ma;
    head = deleteNode(head, ma);

    // 5. Liệt kê sinh viên có điểm tb >=5
    cout << "Sinh vien co diem trung binh >=5: ";
    lietke(head);

    // 6. Xep loai sinh vien
    head = inLoaiSV(head);

    // In danh sách
    cout << "Danh sách sinh viên: ";
    printList(head);
}
/***************
Nguyen Van A
B20DCCN001
8.2
Le Thi B
B20DCCN002
9.6
Tran Duc C
B20DCCN003
7.8
Bui Thi D
B20DCCN004
3.6

B20DCCN000
0.0
***************/