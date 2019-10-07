﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{
  class AWS_SNOWBALL_API GetSoftwareUpdatesResult
  {
  public:
    GetSoftwareUpdatesResult();
    GetSoftwareUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSoftwareUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline const Aws::String& GetUpdatesURI() const{ return m_updatesURI; }

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline void SetUpdatesURI(const Aws::String& value) { m_updatesURI = value; }

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline void SetUpdatesURI(Aws::String&& value) { m_updatesURI = std::move(value); }

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline void SetUpdatesURI(const char* value) { m_updatesURI.assign(value); }

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline GetSoftwareUpdatesResult& WithUpdatesURI(const Aws::String& value) { SetUpdatesURI(value); return *this;}

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline GetSoftwareUpdatesResult& WithUpdatesURI(Aws::String&& value) { SetUpdatesURI(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline GetSoftwareUpdatesResult& WithUpdatesURI(const char* value) { SetUpdatesURI(value); return *this;}

  private:

    Aws::String m_updatesURI;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
