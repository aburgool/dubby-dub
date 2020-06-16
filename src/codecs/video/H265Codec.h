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
#pragma once

#include "../BitrateOrQualityCodec.h"

class H265Codec final : public BitrateOrQualityCodec
{
  public:
    static constexpr const char* type = "h265";

    static void forceSoftwareEncoding(bool force) noexcept;

    const char* getType() const noexcept final
    {
        return H265Codec::type;
    }

    const char* getMimeType() const noexcept final;
    void configureElement(const Glib::ustring& factoryName, const Glib::RefPtr<Gst::Element>& element) const final;
};