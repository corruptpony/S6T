I-Logix-RPY-Archive version 8.1.4 C++ 1367309
{ IProject 
	- _id = GUID c8dd1c1f-a2b7-4e6b-ac4f-4cdd12f10670;
	- _myState = 8192;
	- _properties = { IPropertyContainer 
		- Subjects = { IRPYRawContainer 
			- size = 3;
			- value = 
			{ IPropertySubject 
				- _Name = "Browser";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Settings";
						- Properties = { IRPYRawContainer 
							- size = 1;
							- value = 
							{ IProperty 
								- _Name = "ShowSourceArtifacts";
								- _Value = "False";
								- _Type = Bool;
							}
						}
					}
				}
			}
			{ IPropertySubject 
				- _Name = "CPP_CG";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Class";
						- Properties = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IProperty 
								- _Name = "ImplementationProlog";
								- _Value = "using namespace std;";
								- _Type = MultiLine;
							}
							{ IProperty 
								- _Name = "SpecIncludes";
								- _Value = "";
								- _Type = String;
							}
						}
					}
				}
			}
			{ IPropertySubject 
				- _Name = "ObjectModelGe";
				- Metaclasses = { IRPYRawContainer 
					- size = 1;
					- value = 
					{ IPropertyMetaclass 
						- _Name = "Class";
						- Properties = { IRPYRawContainer 
							- size = 2;
							- value = 
							{ IProperty 
								- _Name = "ShowAttributes";
								- _Value = "All";
								- _Type = Enum;
								- _ExtraTypeInfo = "All,None,Public,Explicit";
							}
							{ IProperty 
								- _Name = "ShowOperations";
								- _Value = "All";
								- _Type = Enum;
								- _ExtraTypeInfo = "All,None,Public,Explicit";
							}
						}
					}
				}
			}
		}
	}
	- _name = "HelloWorldNumero2";
	- Stereotypes = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IHandle 
			- _m2Class = "IStereotype";
			- _filename = "SysML.sbs";
			- _subsystem = "SysML";
			- _class = "";
			- _name = "SysML";
			- _id = GUID 052b8171-a32b-4f45-a829-5585f79f9deb;
		}
	}
	- _lastID = 5;
	- _UserColors = { IRPYRawContainer 
		- size = 16;
		- value = 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 16777215; 
	}
	- _defaultSubsystem = { ISubsystemHandle 
		- _m2Class = "ISubsystem";
		- _filename = "Analyse.sbs";
		- _subsystem = "";
		- _class = "";
		- _name = "Analyse";
		- _id = GUID 0eed10c9-b050-4874-bbb9-7aecbfc8e4dd;
	}
	- _component = { IHandle 
		- _m2Class = "IComponent";
		- _filename = "HelloApp.cmp";
		- _subsystem = "";
		- _class = "";
		- _name = "HelloApp";
		- _id = GUID a1243dea-fb70-40b0-8da4-29e0ce6917f9;
	}
	- Multiplicities = { IRPYRawContainer 
		- size = 4;
		- value = 
		{ IMultiplicityItem 
			- _name = "1";
			- _count = 22;
		}
		{ IMultiplicityItem 
			- _name = "*";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "0,1";
			- _count = -1;
		}
		{ IMultiplicityItem 
			- _name = "1..*";
			- _count = -1;
		}
	}
	- Subsystems = { IRPYRawContainer 
		- size = 5;
		- value = 
		{ ISubsystem 
			- fileName = "Analyse";
			- _id = GUID 0eed10c9-b050-4874-bbb9-7aecbfc8e4dd;
		}
		{ ISubsystem 
			- fileName = "Design";
			- _id = GUID a0b2e9c6-ed76-4d4a-a4f8-0ab04eee642a;
		}
		{ ISubsystem 
			- fileName = "Test";
			- _id = GUID 8e3b0c46-0e6d-4f16-8e06-e24aebfcc0e1;
		}
		{ IProfile 
			- fileName = "SysML";
			- _persistAs = "$OMROOT\\Profiles\\SysML\\SysMLProfile_rpy";
			- _id = GUID d9689b73-885e-44c4-896b-de43defa0a33;
			- _isReference = 1;
		}
		{ IProfile 
			- fileName = "CGCompatibilityPre73Cpp";
			- _id = GUID cd381dde-b3d4-47ff-8af3-32c5339a2b0a;
		}
	}
	- Diagrams = { IRPYRawContainer 
		- size = 0;
	}
	- Components = { IRPYRawContainer 
		- size = 1;
		- value = 
		{ IComponent 
			- fileName = "HelloApp";
			- _id = GUID a1243dea-fb70-40b0-8da4-29e0ce6917f9;
		}
	}
}

