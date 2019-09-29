//
// Aspia Project
// Copyright (C) 2019 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef CLIENT__FILE_REQUEST_PRODUCER_H
#define CLIENT__FILE_REQUEST_PRODUCER_H

#include "proto/file_transfer.pb.h"

namespace client {

class FileRequestProducer
{
public:
    virtual ~FileRequestProducer() = default;

    virtual void onLocalReply(const proto::FileReply& reply) = 0;
    virtual void onRemoteReply(const proto::FileReply& reply) = 0;
};

} // namespace client

#endif // CLIENT__FILE_REQUEST_PRODUCER_H