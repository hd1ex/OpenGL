#pragma once
#include "pch.h"
#include "RawModel.h"

//This class loads openGL stuff and does memory management
class Loader
{
public:
	~Loader();
	unique_ptr<RawModel> loadToVao(const vector<float>& positions, const vector<GLuint>& indices);

	//Wrapper functions
private:
	GLuint createVao();
	void storeDataInAttributeList(int attributeNumber, int vertexSize, const vector<float>& data);
	void unbindVao();
	void bindIndicesBuffer(const vector<GLuint>& indices);

	//Members
private:
	vector<GLuint> m_vbos;
	vector<GLuint> m_vaos;
};

