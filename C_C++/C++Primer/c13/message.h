#ifndef __MESSAGE_H
#define __MESSAGE_H

#include <string>
#include <set>

class Folder;

// -----------------------------------------------------------------------------
class Message {
public:
    friend void swap(Message& lhs, Message& rhs);
    explicit Message(const std::string& str = std::string()) : contents(str) { }
    Message(const Message& m);
    Message(Message&& m);
    Message& operator=(const Message& rhs);
    Message& operator=(Message&& rhs);
    ~Message();
    void save(Folder& f);
    void remove(Folder& f);
    void addFolder(Folder* f);
    void remFolder(Folder* f);

private:
    std::string contents;
    std::set<Folder*> folders;
    void add_to_folders(const Message& m);
    void remove_from_folders();
    void move_Folders(Message* m);
};

// -----------------------------------------------------------------------------
class Folder {
public:
    // Folder() { }
    // Folder(const Folder& f);
    // Folder& operator=(const Message& rhs);
    // ~Folder();
    void addMsg(Message* m);
    void remMsg(Message* m);

private:
    std::set<Message*> messages;
};

// -----------------------------------------------------------------------------
// Implement of class Message

void Message::save(Folder& f) {
    f.addMsg(this);
    folders.insert(&f);
}

void Message::remove(Folder& f) {
    folders.erase(&f);
    f.remMsg(this);
}

void Message::add_to_folders(const Message& m) {
    // 把当前这个对象放在m在的所有Folder中
    for(auto f : m.folders) {
        f->addMsg(this);
    }
}

void Message::remove_from_folders() {
    for(auto f : folders) {
        f->remMsg(this);
    }
}

void Message::move_Folders(Message* m) {
    folders = std::move(m->folders);
    for(auto f : folders) {
        f->remMsg(m);
        f->addMsg(this);
    }
    m->folders.clear();
}

Message::Message(const Message& m) : contents(m.contents), folders(m.folders) {
    add_to_folders(m);
}

Message::Message(Message&& m) : contents(std::move(contents)) {
    move_Folders(&m);
}

Message& Message::operator=(const Message& rhs) {
    contents = rhs.contents;
    remove_from_folders();
    folders = rhs.folders;
    add_to_folders(rhs);
    return *this;
}

Message& Message::operator=(Message&& rhs) {
    if(this != &rhs) {
        contents = std::move(rhs.contents);
        remove_from_folders();
        move_Folders(&rhs);
    }
    return *this;
}

Message::~Message() {
    remove_from_folders();
}

void swap(Message& lhs, Message& rhs) {
    using std::swap;
    lhs.remove_from_folders();
    rhs.remove_from_folders();
    swap(lhs.contents, rhs.contents);
    swap(lhs.folders, rhs.folders);
    lhs.add_to_folders(lhs);
    rhs.add_to_folders(rhs);
}

void Message::addFolder(Folder* f) {
    folders.insert(f);
}

void Message::remFolder(Folder* f) {
    folders.erase(f);
}

// -----------------------------------------------------------------------------
// Implement of class Folder

void Folder::addMsg(Message* m) {
    messages.insert(m);
}

void Folder::remMsg(Message* m) {
    messages.erase(m);
}

#endif