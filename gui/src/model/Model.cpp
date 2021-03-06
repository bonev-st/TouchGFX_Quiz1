#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#include "gui/common/Configuration.hpp"
#include "gui/common/AppConfig.hpp"

static Config::AppCfg_t gCfg;

Model::Model() : modelListener(0) {
	AppConfig::populateConfiguration(gCfg);
}

void Model::tick() {
}

const Config::MainConfig_t& Model::getMainConfig() const {
	return gCfg.Main;
}

const Config::ConfigConfig_t& Model::getConfigConfig() const {
	return gCfg.Config;
}
