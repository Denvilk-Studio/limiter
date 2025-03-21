#include "../include/configuration.h"

#include <string>

using namespace runexe;
using namespace std;

Configuration::Configuration() {
}

Configuration::~Configuration() {
}

Configuration &Configuration::getConfiguration() {
    static Configuration configuration;
    static bool initialized = false;

    if (!initialized) {
        configuration.setDefaults();
        initialized = true;
    }

    return configuration;
}

void Configuration::setDefaults() {
    setShowKernelModeTime(true);
    setReturnExitCode(RETURN_EXIT_CODE);
    setScreenOutput(SCREEN_OUTPUT);
    setXmlOutput(XML_OUTPUT);
    setShowKernelModeTime(SHOW_KERNEL_MODE_TIME);
    setStatisticsFileName(STATISTICS_FILE_NAME);
    setXmlFileName(XML_FILE_NAME);
}

bool Configuration::isReturnExitCode() const {
    return returnExitCode;
}

void Configuration::setReturnExitCode(bool returnExitCode) {
    this->returnExitCode = returnExitCode;
}

bool Configuration::isScreenOutput() const {
    return screenOutput;
}

void Configuration::setScreenOutput(bool screenOutput) {
    this->screenOutput = screenOutput;
}

bool Configuration::isXmlOutput() const {
    return xmlOutput;
}

void Configuration::setXmlOutput(bool xmlOutput) {
    this->xmlOutput = xmlOutput;
}

bool Configuration::isShowKernelModeTime() const {
    return showKernelModeTime;
}

void Configuration::setShowKernelModeTime(bool showKernelModeTime) {
    this->showKernelModeTime = showKernelModeTime;
}

string Configuration::getStatisticsFileName() const {
    return statisticsFileName;
}

void Configuration::setStatisticsFileName(const string &statisticsFileName) {
    this->statisticsFileName = statisticsFileName;
}

string Configuration::getXmlFileName() const {
    return xmlFileName;
}

void Configuration::setXmlFileName(const std::string &xmlFileName) {
    this->xmlFileName = xmlFileName;
}

const string &Configuration::getInteractor() const {
    return interactor;
}

void Configuration::setInteractor(const string &interactor) {
    Configuration::interactor = interactor;
}

const string &Configuration::getInteractorRecordInput() const {
    return interactorRecordInput;
}

void Configuration::setInteractorRecordInput(const string &interactorRecordInput) {
    Configuration::interactorRecordInput = interactorRecordInput;
}

const string &Configuration::getInteractorRecordOutput() const {
    return interactorRecordOutput;
}

void Configuration::setInteractorRecordOutput(const string &interactorRecordOutput) {
    Configuration::interactorRecordOutput = interactorRecordOutput;
}
