#include "user.h"

User::User(const QString& username, const QString& password)
    : username_(username), password_(password) {}

QString User::getUsername() const {
    return username_;
}

QString User::getPassword() const {
    return password_;
}
