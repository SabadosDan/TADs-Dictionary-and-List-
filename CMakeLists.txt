cmake_minimum_required(VERSION 3.21)
project(Proiect_SDA)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Proiect_SDA
        TAD-uri/List.h Entities/main.cpp TAD-uri/Node.h TAD-uri/Dictionary.h Entities/User.cpp Entities/User.h Entities/Friendship.cpp Entities/Friendship.h Entities/Message.cpp Entities/Message.h Entities/Event.cpp Entities/Event.h Repositories/RepositoryUser.cpp Repositories/RepositoryUser.h Repositories/RepositoryFriendship.cpp Repositories/RepositoryFriendship.h Repositories/RepositoryMessage.cpp Repositories/RepositoryMessage.h Services/ServiceFriendship.cpp Services/ServiceFriendship.h Services/ServiceMessage.cpp Services/ServiceMessage.h Services/ServiceUser.cpp Services/ServiceUser.h Repositories/RepoFileUser.h UserInterface/UI.cpp UserInterface/UI.h)
