I-Logix-RPY-Archive version 8.1.4 C++ 1367309
{ IClass 
	- _ownerHandle = { IHandle 
		- _m2Class = "ISubsystem";
		- _filename = "Design.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "Design";
		- _id = GUID a0b2e9c6-ed76-4d4a-a4f8-0ab04eee642a;
	}
	- _id = GUID 51112568-e3d0-4bb8-9478-7493870dd48c;
	- _myState = 8192;
	- _properties = { IPropertyContainer 
		- Subjects = { IRPYRawContainer 
			- size = 1;
			- value = 
			{ IPropertySubject 
				- _Name = "CPP_CG";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Class";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "ImpIncludes";
								- _Value = "<fstream>";
								- _Type = String;
							}
						}
					}
				}
			}
		}
	}
	- _name = "Tacho";
	- Stereotypes = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IHandle 
			- _m2Class = "IStereotype";
			- _filename = "SysML.sbs";
			- _subsystem = "SysML::Blocks";
			- _class = "";
			- _name = "block";
			- _id = GUID f685432f-691e-4ff1-be70-4d09d19457e1;
		}
	}
	- _theMainDiagram = { IHandle 
		- _m2Class = "IDiagram";
		- _filename = "Design.sbs";
		- _subsystem = "Design";
		- _class = "";
		- _name = "Design";
		- _id = GUID d7b7175c-2eda-4a61-9b9e-4acb59688b3e;
	}
	- _lastID = 18;
	- weakCGTime = 3.13.2012::21:58:3;
	- strongCGTime = 3.13.2012::21:55:57;
	- Ports = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IPort 
			- _id = GUID 1fa29c1e-d846-4ed3-9aa0-5cada74dcd9b;
			- _myState = 8192;
			- _name = "control";
			- Stereotypes = { IRPYRawContainer 
				- size = 1;
				- value = 
				{ IHandle 
					- _m2Class = "IStereotype";
					- _filename = "SysML.sbs";
					- _subsystem = "SysML::PortsAndFlows";
					- _class = "";
					- _name = "standardPort";
					- _id = GUID b87e4708-8d1e-42e3-ae41-e4e033d6767e;
				}
			}
			- _multiplicity = "1";
			- _otherClass = { IClassifierHandle 
				- _m2Class = "IClass";
				- _id = GUID ff17e7b7-5575-4ad7-adc8-e24022979728;
			}
			- _inverse = { IHandle 
				- _m2Class = "";
			}
			- _implicitClass = { IClass 
				- _id = GUID ff17e7b7-5575-4ad7-adc8-e24022979728;
				- _myState = 10240;
				- _name = "control_implicitContract";
				- Stereotypes = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IHandle 
						- _m2Class = "IStereotype";
						- _filename = "PredefinedTypes.sbs";
						- _subsystem = "PredefinedTypes";
						- _class = "";
						- _name = "Interface";
						- _id = GUID 2a7b8a63-f54f-4379-bab0-02800a5084e1;
					}
				}
				- weakCGTime = 3.13.2012::21:55:57;
				- strongCGTime = 12.13.2011::14:29:38;
				- Inheritances = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IGeneralization 
						- _id = GUID 90302e5d-ecda-406f-9e08-f22d9c977b6c;
						- _dependsOn = { INObjectHandle 
							- _m2Class = "IClass";
							- _filename = "Design.sbs";
							- _subsystem = "Design";
							- _class = "";
							- _name = "ITacho";
							- _id = GUID 2ff1f0b3-22fc-47b1-ac27-35617d16a00b;
						}
						- _inheritanceType = iPublic;
						- _isVirtual = 0;
					}
				}
				- _multiplicity = "";
				- _itsStateChart = { IHandle 
					- _m2Class = "";
				}
				- _classModifier = Unspecified;
			}
			- _behavioral = 1;
		}
	}
	- Operations = { IRPYRawContainer 
		- size = 8;
		- value = 
		{ IPrimitiveOperation 
			- _id = GUID fb8c4d24-e4b1-45c4-b6da-b9678c9acfba;
			- _myState = 8192;
			- _name = "getCount";
			- _virtual = 0;
			- Args = { IRPYRawContainer 
				- size = 0;
			}
			- _returnType = { IHandle 
				- _m2Class = "IType";
				- _filename = "PredefinedTypesC++.sbs";
				- _subsystem = "PredefinedTypesCpp";
				- _class = "";
				- _name = "int";
				- _id = GUID 6024c6ab-fe9e-402e-954f-27aca6d3b5e4;
			}
			- _abstract = 0;
			- _final = 0;
			- _concurrency = Sequential;
			- _protection = iPublic;
			- _static = 0;
			- _constant = 0;
			- _itsBody = { IBody 
				- _bodyData = "int count=0;

ifstream file;
file.open(TACHO);
if (! file.eof() ) {
	file>>count;		
}
file.close();

//cout<<\"getCount(): \"<< count << endl;
return count;";
			}
		}
		{ IConstructor 
			- _id = GUID 4ff8ec47-f7bd-482f-8459-2cb1d17a740d;
			- _myState = 8192;
			- _virtual = 0;
			- Args = { IRPYRawContainer 
				- size = 0;
			}
			- _returnType = { IHandle 
				- _m2Class = "";
			}
			- _abstract = 0;
			- _final = 0;
			- _concurrency = Sequential;
			- _protection = iPublic;
			- _static = 0;
			- _constant = 0;
			- _itsBody = { IBody 
				- _bodyData = "std::cout<<\"Tacho constructor\"<<std::endl;";
			}
			- _initializer = "";
		}
		{ IPrimitiveOperation 
			- _id = GUID 7db4ca02-91cd-4461-8404-c8b4749380f6;
			- _myState = 8192;
			- _name = "start";
			- _virtual = 0;
			- Args = { IRPYRawContainer 
				- size = 0;
			}
			- _returnType = { IHandle 
				- _m2Class = "IType";
				- _filename = "PredefinedTypesC++.sbs";
				- _subsystem = "PredefinedTypesCpp";
				- _class = "";
				- _name = "void";
				- _id = GUID c6b70728-b655-45a0-abb7-8ea5d3da94be;
			}
			- _abstract = 0;
			- _final = 0;
			- _concurrency = Sequential;
			- _protection = iPublic;
			- _static = 0;
			- _constant = 0;
			- _itsBody = { IBody 
				- _bodyData = "cout<<\"startTacho\"<<endl;
getCount();

";
			}
		}
		{ IPrimitiveOperation 
			- _id = GUID a17735ee-ef75-4b79-8ed7-3dd52fcf934d;
			- _myState = 8192;
			- _name = "stop";
			- _virtual = 0;
			- Args = { IRPYRawContainer 
				- size = 0;
			}
			- _returnType = { IHandle 
				- _m2Class = "IType";
				- _filename = "PredefinedTypesC++.sbs";
				- _subsystem = "PredefinedTypesCpp";
				- _class = "";
				- _name = "void";
				- _id = GUID c6b70728-b655-45a0-abb7-8ea5d3da94be;
			}
			- _abstract = 0;
			- _final = 0;
			- _concurrency = Sequential;
			- _protection = iPublic;
			- _static = 0;
			- _constant = 0;
			- _itsBody = { IBody 
				- _bodyData = "cout<<\"stopTacho\"<<endl;";
			}
		}
		{ IPrimitiveOperation 
			- _id = GUID 00aaee3d-3632-4b55-a84a-aef18f77757e;
			- _myState = 8192;
			- _name = "getSpeed";
			- _virtual = 0;
			- Args = { IRPYRawContainer 
				- size = 0;
			}
			- _returnType = { IHandle 
				- _m2Class = "IType";
				- _filename = "PredefinedTypesC++.sbs";
				- _subsystem = "PredefinedTypesCpp";
				- _class = "";
				- _name = "int";
				- _id = GUID 6024c6ab-fe9e-402e-954f-27aca6d3b5e4;
			}
			- _abstract = 0;
			- _final = 0;
			- _concurrency = Sequential;
			- _protection = iPublic;
			- _static = 0;
			- _constant = 0;
			- _itsBody = { IBody 
				- _bodyData = "int speed = getCount()*(1000/_interval)*60;
cout<<\"getSpeed(): \"<< speed << endl;

return speed;";
			}
		}
		{ IPrimitiveOperation 
			- _id = GUID d63b1c70-4edf-42b6-825e-9b406df3ed36;
			- _myState = 8192;
			- _name = "setInterval";
			- _lastID = 1;
			- _virtual = 0;
			- Args = { IRPYRawContainer 
				- size = 1;
				- value = 
				{ IArgument 
					- _id = GUID 0c444738-9bfb-42aa-b719-791498df9205;
					- _name = "interval";
					- _defaultValue = "";
					- _typeOf = { IHandle 
						- _m2Class = "IType";
						- _filename = "PredefinedTypesC++.sbs";
						- _subsystem = "PredefinedTypesCpp";
						- _class = "";
						- _name = "int";
						- _id = GUID 6024c6ab-fe9e-402e-954f-27aca6d3b5e4;
					}
					- _isOrdered = 0;
					- _argumentDirection = In;
				}
			}
			- _returnType = { IHandle 
				- _m2Class = "IType";
				- _filename = "PredefinedTypesC++.sbs";
				- _subsystem = "PredefinedTypesCpp";
				- _class = "";
				- _name = "void";
				- _id = GUID c6b70728-b655-45a0-abb7-8ea5d3da94be;
			}
			- _abstract = 0;
			- _final = 0;
			- _concurrency = Sequential;
			- _protection = iPublic;
			- _static = 0;
			- _constant = 0;
			- _itsBody = { IBody 
				- _bodyData = "_interval = interval;";
			}
		}
		{ IPrimitiveOperation 
			- _id = GUID 10a3ac91-9b65-4fb1-80fc-0bb7e73eb92a;
			- _myState = 8192;
			- _name = "getInterval";
			- _virtual = 0;
			- Args = { IRPYRawContainer 
				- size = 0;
			}
			- _returnType = { IHandle 
				- _m2Class = "IType";
				- _filename = "PredefinedTypesC++.sbs";
				- _subsystem = "PredefinedTypesCpp";
				- _class = "";
				- _name = "int";
				- _id = GUID 6024c6ab-fe9e-402e-954f-27aca6d3b5e4;
			}
			- _abstract = 0;
			- _final = 0;
			- _concurrency = Sequential;
			- _protection = iPublic;
			- _static = 0;
			- _constant = 0;
			- _itsBody = { IBody 
				- _bodyData = "return _interval;";
			}
		}
		{ IDestructor 
			- _id = GUID a79c58e0-7fe8-4302-af1c-42304d3947c2;
			- _myState = 8192;
			- _virtual = 0;
			- Args = { IRPYRawContainer 
				- size = 0;
			}
			- _returnType = { IHandle 
				- _m2Class = "IType";
				- _filename = "PredefinedTypesC++.sbs";
				- _subsystem = "PredefinedTypesCpp";
				- _class = "";
				- _name = "void";
				- _id = GUID c6b70728-b655-45a0-abb7-8ea5d3da94be;
			}
			- _abstract = 0;
			- _final = 0;
			- _concurrency = Sequential;
			- _protection = iPublic;
			- _static = 0;
			- _constant = 0;
			- _itsBody = { IBody 
				- _bodyData = "cout<<\"Tacho destructor\"<<endl;
stop();";
			}
		}
	}
	- Attrs = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IAttribute 
			- _id = GUID 18a4b66a-fb8e-48ea-9aef-592077636ce9;
			- _name = "_interval";
			- _description = { IDescription 
				- _text = "Tacho read interval (msec)";
			}
			- _defaultValue = "1000";
			- _typeOf = { IHandle 
				- _m2Class = "IType";
				- _filename = "PredefinedTypes.sbs";
				- _subsystem = "PredefinedTypes";
				- _class = "";
				- _name = "RhpInteger";
				- _id = GUID 9503fd72-4374-4a1d-9a70-b60508d8f583;
			}
			- _isOrdered = 0;
			- _protection = iProtected;
			- _static = 0;
			- _isReference = 0;
			- _isConstant = 0;
		}
	}
	- Inheritances = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IGeneralization 
			- _id = GUID 66e5c334-013b-4459-b2c5-67b206b8c1e7;
			- _dependsOn = { INObjectHandle 
				- _m2Class = "IClass";
				- _filename = "Design.sbs";
				- _subsystem = "Design";
				- _class = "";
				- _name = "ITacho";
				- _id = GUID 2ff1f0b3-22fc-47b1-ac27-35617d16a00b;
			}
			- _inheritanceType = iPublic;
			- _isVirtual = 0;
		}
	}
	- _multiplicity = "";
	- StateCharts = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IStateChart 
			- _id = GUID 650fa719-8167-4c83-a268-145a9784e01b;
			- _myState = 10240;
			- _properties = { IPropertyContainer 
				- Subjects = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertySubject 
						- _Name = "Format";
						- Metaclasses = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IPropertyMetaclass 
								- _Name = "DanglingTransition";
								- Properties = { IRPYRawContainer 
									- size = 2;
									- value = 
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "0,0,0";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "2";
										- _Type = Int;
									}
								}
							}
							{ IPropertyMetaclass 
								- _Name = "State";
								- Properties = { IRPYRawContainer 
									- size = 8;
									- value = 
									{ IProperty 
										- _Name = "DefaultSize";
										- _Value = "0,0,96,60";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Fill.FillColor";
										- _Value = "255,255,255";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Font.Font";
										- _Value = "Arial";
										- _Type = String;
									}
									{ IProperty 
										- _Name = "Font.FontColor";
										- _Value = "0,0,0";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Font.Size";
										- _Value = "10";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineColor";
										- _Value = "0,112,0";
										- _Type = Color;
									}
									{ IProperty 
										- _Name = "Line.LineStyle";
										- _Value = "0";
										- _Type = Int;
									}
									{ IProperty 
										- _Name = "Line.LineWidth";
										- _Value = "1";
										- _Type = Int;
									}
								}
							}
						}
					}
				}
			}
			- _name = "statechart_17";
			- _lastID = 5;
			- _lastModifiedTime = "3.13.2012::21:58:3";
			- _graphicChart = { CGIStateChart 
				- _id = GUID 14ae8e94-b600-4b7f-a885-d144b1088c4d;
				- m_type = 0;
				- m_pModelObject = { IHandle 
					- _m2Class = "IStateChart";
					- _id = GUID 650fa719-8167-4c83-a268-145a9784e01b;
				}
				- m_pParent = ;
				- m_name = { CGIText 
					- m_str = "";
					- m_style = "Arial" 10 0 0 0 1 ;
					- m_color = { IColor 
						- m_fgColor = 0;
						- m_bgColor = 0;
						- m_bgFlag = 0;
					}
					- m_position = 1 0 0  ;
					- m_nIdent = 0;
					- m_bImplicitSetRectPoints = 0;
					- m_nOrientationCtrlPt = 8;
				}
				- m_drawBehavior = 4096;
				- m_bIsPreferencesInitialized = 1;
				- elementList = 7;
				{ CGIState 
					- _id = GUID 9571e51c-955b-4027-836a-0e8ba2289551;
					- m_type = 5;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _id = GUID 32569e91-1b6e-41db-b66f-e19f019e2b02;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "ROOT";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 0;
					- m_bIsPreferencesInitialized = 0;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 0 0  0 0  0 0  0 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- nAndLineCount = 0;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_pDefaultComponentRelation = ;
				}
				{ CGIState 
					- _id = GUID a9108f7b-66e9-46a5-ad37-4ee223713056;
					- m_type = 8;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _id = GUID 6d07763d-2d43-42a0-8c76-6c2d241717a1;
					}
					- m_pParent = GUID 9571e51c-955b-4027-836a-0e8ba2289551;
					- m_name = { CGIText 
						- m_str = "idle";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.0875912 0 0 0.0566038 289 115 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 0 0  0 1060  1096 1060  1096 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- nAndLineCount = 0;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_pDefaultComponentRelation = ;
				}
				{ CGITrans 
					- _id = GUID 1685f687-5579-44c9-ad90-5663d60fed8e;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ShowLabels";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 29;
					- m_pModelObject = { IHandle 
						- _m2Class = "ITransition";
						- _id = GUID 0b028cd0-48ea-423e-9381-62924ac1ac38;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 0;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 9571e51c-955b-4027-836a-0e8ba2289551;
					- m_sourceType = 'F';
					- m_pTarget = GUID a9108f7b-66e9-46a5-ad37-4ee223713056;
					- m_targetType = 'T';
					- m_direction = ' ';
					- m_rpn = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 0;
					}
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 1;
					- m_SourcePort = 259 82 ;
					- m_TargetPort = 400 336 ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_bShowName = 1;
				}
				{ CGIState 
					- _id = GUID 304747ee-35ee-48de-b4e2-8420af173cd5;
					- m_type = 8;
					- m_pModelObject = { IHandle 
						- _m2Class = "IState";
						- _id = GUID 373ee950-d805-4a57-b762-f1617067ec02;
					}
					- m_pParent = GUID 9571e51c-955b-4027-836a-0e8ba2289551;
					- m_name = { CGIText 
						- m_str = "reading";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 5;
					}
					- m_drawBehavior = 4104;
					- m_transform = 0.0875912 0 0 0.0566038 292 285 ;
					- m_bIsPreferencesInitialized = 1;
					- m_AdditionalLabel = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 1;
					}
					- m_polygon = 4 0 0  0 1060  1096 1060  1096 0  ;
					- m_nNameFormat = 0;
					- m_nIsNameFormat = 0;
					- nAndLineCount = 0;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_pDefaultComponentRelation = ;
				}
				{ CGITrans 
					- _id = GUID f0b602b0-b49b-48ca-8922-f4ff03a5ea47;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ShowLabels";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 28;
					- m_pModelObject = { IHandle 
						- _m2Class = "ITransition";
						- _id = GUID ce40c214-f9f6-440a-88b2-3bc6431b545f;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 0;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID a9108f7b-66e9-46a5-ad37-4ee223713056;
					- m_sourceType = 'F';
					- m_pTarget = GUID 304747ee-35ee-48de-b4e2-8420af173cd5;
					- m_targetType = 'T';
					- m_direction = ' ';
					- m_rpn = { CGIText 
						- m_str = "evStart/start();";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 0;
					}
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 1;
					- m_SourcePort = 1096 548 ;
					- m_TargetPort = 1050 477 ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_bShowName = 1;
				}
				{ CGITrans 
					- _id = GUID dcec7f4a-6c89-42f3-984c-b12e242c3225;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ShowLabels";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 28;
					- m_pModelObject = { IHandle 
						- _m2Class = "ITransition";
						- _id = GUID bc44e50a-a643-4b0b-b018-e0eb1c1981ab;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 0;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 304747ee-35ee-48de-b4e2-8420af173cd5;
					- m_sourceType = 'F';
					- m_pTarget = GUID a9108f7b-66e9-46a5-ad37-4ee223713056;
					- m_targetType = 'T';
					- m_direction = ' ';
					- m_rpn = { CGIText 
						- m_str = "evStop/stop();";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 0;
					}
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 1;
					- m_SourcePort = 46 601 ;
					- m_TargetPort = 80 477 ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_bShowName = 1;
				}
				{ CGITrans 
					- _id = GUID 03c0a70c-e468-453c-b173-130a4efac6e6;
					- _properties = { IPropertyContainer 
						- Subjects = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IPropertySubject 
								- _Name = "General";
								- Metaclasses = { IRPYRawContainer 
									- size = 1;
									- value = 
									{ IPropertyMetaclass 
										- _Name = "Graphics";
										- Properties = { IRPYRawContainer 
											- size = 1;
											- value = 
											{ IProperty 
												- _Name = "ShowLabels";
												- _Value = "False";
												- _Type = Bool;
											}
										}
									}
								}
							}
						}
					}
					- m_type = 28;
					- m_pModelObject = { IHandle 
						- _m2Class = "ITransition";
						- _id = GUID 4a1f3463-b0ec-4338-a9fc-8cb1d7c21a53;
					}
					- m_pParent = ;
					- m_name = { CGIText 
						- m_str = "";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 8;
					}
					- m_drawBehavior = 0;
					- m_bIsPreferencesInitialized = 1;
					- m_pSource = GUID 304747ee-35ee-48de-b4e2-8420af173cd5;
					- m_sourceType = 'F';
					- m_pTarget = GUID 304747ee-35ee-48de-b4e2-8420af173cd5;
					- m_targetType = 'T';
					- m_direction = ' ';
					- m_rpn = { CGIText 
						- m_str = "tm(getInterval())/getSpeed();";
						- m_style = "Arial" 10 0 0 0 1 ;
						- m_color = { IColor 
							- m_fgColor = 0;
							- m_bgColor = 0;
							- m_bgFlag = 0;
						}
						- m_position = 1 0 0  ;
						- m_nIdent = 0;
						- m_bImplicitSetRectPoints = 0;
						- m_nOrientationCtrlPt = 0;
					}
					- m_anglePoint1 = 0 0 ;
					- m_anglePoint2 = 0 0 ;
					- m_line_style = 1;
					- m_SourcePort = 845 830 ;
					- m_TargetPort = 217 919 ;
					- m_pInheritsFrom = { IHandle 
						- _m2Class = "";
					}
					- m_nInheritanceMask = 0;
					- m_bShowName = 1;
				}
				
				- m_access = 'Z';
				- m_modified = 'N';
				- m_fileVersion = "";
				- m_nModifyDate = 0;
				- m_nCreateDate = 0;
				- m_creator = "";
				- m_bScaleWithZoom = 1;
				- m_arrowStyle = 'S';
				- m_pRoot = GUID 9571e51c-955b-4027-836a-0e8ba2289551;
				- m_currentLeftTop = 0 0 ;
				- m_currentRightBottom = 0 0 ;
				- m_pInheritsFrom = { IHandle 
					- _m2Class = "";
				}
			}
			- _defNumber = 2;
			- Transitions = { IRPYRawContainer 
				- size = 4;
				- value = 
				{ IDefaultDrvdTrans 
					- _id = GUID 0b028cd0-48ea-423e-9381-62924ac1ac38;
					- _myState = 2048;
					- _name = "defaulttransition_0";
					- _itsLabel = { ILabel 
						- _id = GUID 3fb4bcbf-8e6e-4cfa-b428-d017764aa948;
						- _itsTrigger = NULL;
						- _itsGuard = NULL;
						- _itsAction = NULL;
					}
					- _itsTarget = GUID 6d07763d-2d43-42a0-8c76-6c2d241717a1;
					- _staticReaction = 0;
					- _itsSource = ;
					- _ofState = GUID 32569e91-1b6e-41db-b66f-e19f019e2b02;
				}
				{ ITransition 
					- _id = GUID ce40c214-f9f6-440a-88b2-3bc6431b545f;
					- _myState = 2048;
					- _name = "transition_2";
					- _itsLabel = { ILabel 
						- _id = GUID 0dc583ce-6f06-442d-9c2c-0ba6f8308673;
						- _itsTrigger = { IInterfaceItemTrigger 
							- _id = GUID b5230a8b-fb10-4e8c-a9ef-17cc01fa3437;
							- _body = "evStart";
							- _info = "";
							- _itsInterfaceItem = { IHandle 
								- _m2Class = "IEvent";
								- _filename = "Design.sbs";
								- _subsystem = "Design";
								- _class = "";
								- _name = "evStart()";
								- _id = GUID 7270c497-a9b7-4052-a734-7ef19a475871;
							}
						}
						- _itsGuard = NULL;
						- _itsAction = { IAction 
							- _id = GUID 2ef0961f-432f-4c25-b84d-51668cf6b375;
							- _body = "start();";
						}
					}
					- _itsTarget = GUID 373ee950-d805-4a57-b762-f1617067ec02;
					- _staticReaction = 0;
					- _itsSource = GUID 6d07763d-2d43-42a0-8c76-6c2d241717a1;
				}
				{ ITransition 
					- _id = GUID bc44e50a-a643-4b0b-b018-e0eb1c1981ab;
					- _myState = 2048;
					- _name = "transition_3";
					- _itsLabel = { ILabel 
						- _id = GUID bed50b24-26ce-4457-9a7b-6f0799e85f09;
						- _itsTrigger = { IInterfaceItemTrigger 
							- _id = GUID 27b6326d-c5a2-4af2-96fb-c7147b3afacf;
							- _body = "evStop";
							- _info = "";
							- _itsInterfaceItem = { IHandle 
								- _m2Class = "IEvent";
								- _filename = "Design.sbs";
								- _subsystem = "Design";
								- _class = "";
								- _name = "evStop()";
								- _id = GUID cc0f5595-cc33-4e2f-be05-ca9775368842;
							}
						}
						- _itsGuard = NULL;
						- _itsAction = { IAction 
							- _id = GUID 5add439a-85f1-4342-b382-905c1b24ba8b;
							- _body = "stop();";
						}
					}
					- _itsTarget = GUID 6d07763d-2d43-42a0-8c76-6c2d241717a1;
					- _staticReaction = 0;
					- _itsSource = GUID 373ee950-d805-4a57-b762-f1617067ec02;
				}
				{ ITransition 
					- _id = GUID 4a1f3463-b0ec-4338-a9fc-8cb1d7c21a53;
					- _myState = 2048;
					- _name = "transition_4";
					- _itsLabel = { ILabel 
						- _id = GUID 46c1c619-77f2-4bca-b0ef-2571043124eb;
						- _itsTrigger = { ITimeout 
							- _id = GUID 3937cf26-19d2-4259-b4d1-43ce788b1e35;
							- _body = "tm(getInterval())";
							- _info = "";
							- _time = "getInterval()";
						}
						- _itsGuard = NULL;
						- _itsAction = { IAction 
							- _id = GUID 056ef37a-a826-44c3-bb94-d09b50bf6081;
							- _body = "getSpeed();";
						}
					}
					- _itsTarget = GUID 373ee950-d805-4a57-b762-f1617067ec02;
					- _staticReaction = 0;
					- _itsSource = GUID 373ee950-d805-4a57-b762-f1617067ec02;
				}
			}
			- States = { IRPYRawContainer 
				- size = 3;
				- value = 
				{ IState 
					- _id = GUID 32569e91-1b6e-41db-b66f-e19f019e2b02;
					- _parent = ;
					- _defaultTrans = GUID 0b028cd0-48ea-423e-9381-62924ac1ac38;
				}
				{ IState 
					- _id = GUID 6d07763d-2d43-42a0-8c76-6c2d241717a1;
					- _name = "idle";
					- _parent = GUID 32569e91-1b6e-41db-b66f-e19f019e2b02;
					- _defaultTrans = ;
				}
				{ IState 
					- _id = GUID 373ee950-d805-4a57-b762-f1617067ec02;
					- _name = "reading";
					- _parent = GUID 32569e91-1b6e-41db-b66f-e19f019e2b02;
					- _defaultTrans = ;
				}
			}
			- _version = 3.13.2012::22:58:3;
			- _baseVersion = 1.2.1990::0:0:0;
		}
	}
	- _itsStateChart = { IHandle 
		- _m2Class = "IStateChart";
		- _id = GUID 650fa719-8167-4c83-a268-145a9784e01b;
	}
	- _classModifier = Unspecified;
}

