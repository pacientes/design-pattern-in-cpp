#include "Hello.h"
#include "Korean.h"
#include "English.h"

#include "Language.h"
#include "Message.h"

int main(const int argc, const char* argv[])
{
	std::shared_ptr<Hello> korean = std::make_shared<Korean>();
	std::shared_ptr<Hello> english = std::make_shared<English>();

	std::shared_ptr<Message> message = std::make_shared<Message>(korean);
	std::cout << "Result: " << message->execute() << std::endl;

	korean.reset();
	english.reset();
	message.reset();

	return 0;
}