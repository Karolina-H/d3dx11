#include "kException.h"
#include <sstream>


kException::kException(int line, const char* file) noexcept
	:
	line(line),
	file(file)
{}

const char* kException::what() const noexcept
{
	std::ostringstream oss;
	oss << GetType() << std::endl
		<< GetOriginString();
	whatBuffer = oss.str();
	return whatBuffer.c_str();
}

const char* kException::GetType() const noexcept
{
	return "Exception";
}

int kException::GetLine() const noexcept
{
	return line;
}

const std::string& kException::GetFile() const noexcept
{
	return file;
}

std::string kException::GetOriginString() const noexcept
{
	std::ostringstream oss;
	oss << "[File] " << file << std::endl
		<< "[Line] " << line;
	return oss.str();
}