
// Projectname: amos-ss16-proj5
//
// Created on 03.06.2016.
// Copyright (c) 2016 de.fau.cs.osr.amos2016.gruppe5
//
// This file is part of the AMOS Project 2016 @ FAU
// (Friedrich-Alexander University Erlangen-Nürnberg)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public
// License along with this program. If not, see
// <http://www.gnu.org/licenses/>.
//

//local
#include "frame_detection_data.h"

std::vector<Element> FrameDetectionData::GetElementsOfType(ObjectType type){

    std::vector<Element> result = all_elements_.at(type);

    return result;

}

void FrameDetectionData::AddElementsOfType(ObjectType type, std::vector<Element> elements){

    std::map<ObjectType, std::vector<Element> >::iterator map_iterator;

    map_iterator = all_elements_.find(type);

    // insert the new elements only if elements of the type do not exist so far
    if(map_iterator == all_elements_.end()){

        all_elements_.insert(std::pair<ObjectType, std::vector<Element> > (type, elements));

    }

}
