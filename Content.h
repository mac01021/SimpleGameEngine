//
//  Content.h
//  SimpleGameEngine
//
//  Created by C0deH4cker on 12/13/13.
//  Copyright (c) 2013 C0deH4cker. All rights reserved.
//

#pragma once

#include <string>

/**
 Allows easy loading of assets from a central resources directory.
 */
namespace sge {
	class Content {
	public:
		Content(std::string baseDir=".");
		
		/** Loads an asset of type T from the resources directory
		 @param T The type of resource contained in the file
		 @param filename The name of the file to load
		 @returns A pointer to a newly created instance of the loaded resource
		 */
		template <typename T>
		T* load(std::string filename) {
			return new T(dir + filename);
		}
		
	private:
		std::string dir;
	};
}