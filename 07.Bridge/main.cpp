#include "KoreanMessage.h"
#include "EnglishMessage.h"
#include "LanguageImpl.h"

#include <iostream>

int main(int argc, char *argv[])
{
    std::shared_ptr<Message> korean_message = std::make_shared<KoreanMessage>();
    std::shared_ptr<Message> english_message = std::make_shared<EnglishMessage>();

    std::shared_ptr<Language> langauge = std::make_shared<LanguageImpl>(korean_message);
    std::cout << langauge->execute() << std::endl;

    return 0;
}
