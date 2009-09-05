/*
  Copyright 1999-2009 ImageMagick Studio LLC, a non-profit organization
  dedicated to making software imaging solutions freely available.
  
  You may not use this file except in compliance with the License.
  obtain a copy of the License at
  
    http://www.wizards-toolkit.org/script/license.php
  
  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  The Wizard's Toolkit memory methods.
*/
#ifndef _WIZARDSTOOLKIT_MEMORY_H
#define _WIZARDSTOOLKIT_MEMORY_H

#if defined(__cplusplus) || defined(c_plusplus)
extern "C" {
#endif

typedef void
  *(*AcquireMemoryHandler)(size_t),
  (*DestroyMemoryHandler)(void *),
  *(*ResizeMemoryHandler)(void *,size_t);

extern WizardExport void
  *AcquireAlignedMemory(const size_t,const size_t),
  *AcquireWizardMemory(const size_t),
  *AcquireQuantumMemory(const size_t,const size_t),
  *CopyWizardMemory(void *,const void *,const size_t),
  DestroyWizardMemory(void),
  GetWizardMemoryMethods(AcquireMemoryHandler *,ResizeMemoryHandler *,
    DestroyMemoryHandler *),
  *RelinquishAlignedMemory(void *),
  *RelinquishWizardMemory(void *),
  *ResetWizardMemory(void *,int,const size_t),
  *ResizeWizardMemory(void *,const size_t),
  *ResizeQuantumMemory(void *,const size_t,const size_t),
  SetWizardMemoryMethods(AcquireMemoryHandler,ResizeMemoryHandler,
    DestroyMemoryHandler);

#if defined(__cplusplus) || defined(c_plusplus)
}
#endif

#endif
