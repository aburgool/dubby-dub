/**
 * dubby-dub
 *
 * Copyright (C) 2020, Loïc Le Page
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "WebmEncoder.h"
#include "../codecs/audio/OpusCodec.h"
#include "../codecs/audio/VorbisCodec.h"
#include "../codecs/video/Vp8Codec.h"
#include "../codecs/video/Vp9Codec.h"
#include <cstring>

const char* WebmEncoder::getMimeType() const noexcept
{
    return "video/webm";
}

bool WebmEncoder::isVideoCodecAccepted(const char* codecType) const noexcept
{
    return ((std::strcmp(codecType, Vp8Codec::type) == 0) || (std::strcmp(codecType, Vp9Codec::type) == 0));
}

bool WebmEncoder::isAudioCodecAccepted(const char* codecType) const noexcept
{
    return ((std::strcmp(codecType, OpusCodec::type) == 0) || (std::strcmp(codecType, VorbisCodec::type) == 0));
}
