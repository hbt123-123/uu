// rea decompile_all
// name: FUN_100707504
// address: 0x100707504
// body: available
// range: 0x100707504-0x100707823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100707820 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100707504(int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  FILE *pFVar11;
  size_t sVar12;
  void *pvVar13;
  size_t sVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  char acStack_88 [32];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100b2c708 == (undefined *)0x0 || param_1 != 0) {
    if (PTR___availability_version_check_1009954a8 != (undefined *)0x0) {
      DAT_100b2c708 = PTR___availability_version_check_1009954a8;
    }
    if (DAT_100b2c708 == (undefined *)0x0 || param_1 != 0) {
      puVar1 = (undefined8 *)0xfffffffffffffffe;
      _dlsym(0xfffffffffffffffe,"kCFAllocatorNull");
      if (puVar1 != (undefined8 *)0x0) {
        uVar20 = *puVar1;
        pcVar2 = (code *)0xfffffffffffffffe;
        _dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
        if (pcVar2 != (code *)0x0) {
          pcVar3 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
          pcVar4 = (code *)0xfffffffffffffffe;
          _dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
          if (pcVar3 != (code *)0x0 || pcVar4 != (code *)0x0) {
            pcVar5 = (code *)0xfffffffffffffffe;
            _dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy");
            if (pcVar5 != (code *)0x0) {
              pcVar6 = (code *)0xfffffffffffffffe;
              _dlsym(0xfffffffffffffffe,"CFDictionaryGetValue");
              if (pcVar6 != (code *)0x0) {
                pcVar7 = (code *)0xfffffffffffffffe;
                _dlsym(0xfffffffffffffffe,"CFGetTypeID");
                if (pcVar7 != (code *)0x0) {
                  pcVar8 = (code *)0xfffffffffffffffe;
                  _dlsym(0xfffffffffffffffe,"CFStringGetTypeID");
                  if (pcVar8 != (code *)0x0) {
                    pcVar9 = (code *)0xfffffffffffffffe;
                    _dlsym(0xfffffffffffffffe,"CFStringGetCString");
                    if (pcVar9 != (code *)0x0) {
                      pcVar10 = (code *)0xfffffffffffffffe;
                      _dlsym(0xfffffffffffffffe,"CFRelease");
                      if ((pcVar10 != (code *)0x0) &&
                         (pFVar11 = _fopen("/System/Library/CoreServices/SystemVersion.plist","r"),
                         pFVar11 != (FILE *)0x0)) {
                        _fseek(pFVar11,0,2);
                        sVar12 = _ftell(pFVar11);
                        if ((long)sVar12 < 0) {
                          pvVar13 = (void *)0x0;
                        }
                        else {
                          _rewind(pFVar11);
                          pvVar13 = _malloc(sVar12);
                          if ((pvVar13 != (void *)0x0) &&
                             (sVar14 = _fread(pvVar13,1,sVar12,pFVar11), sVar14 == sVar12)) {
                            lVar15 = 0;
                            (*pcVar2)(0,pvVar13,sVar12,uVar20);
                            if (lVar15 != 0) {
                              lVar16 = 0;
                              if (pcVar3 == (code *)0x0) {
                                (*pcVar4)(0,lVar15,0,0);
                              }
                              else {
                                (*pcVar3)();
                              }
                              if (lVar16 != 0) {
                                lVar17 = 0;
                                (*pcVar5)(0,"ProductVersion",0x600,uVar20);
                                if (lVar17 != 0) {
                                  lVar18 = lVar16;
                                  (*pcVar6)(lVar16,lVar17);
                                  (*pcVar10)(lVar17);
                                  if (lVar18 != 0) {
                                    lVar17 = lVar18;
                                    (*pcVar7)();
                                    lVar19 = lVar17;
                                    (*pcVar8)();
                                    if ((lVar17 == lVar19) &&
                                       ((*pcVar9)(lVar18,acStack_88,0x20,0x8000100),
                                       (int)lVar18 != 0)) {
                                      _sscanf(acStack_88,"%d.%d.%d");
                                    }
                                  }
                                }
                                (*pcVar10)(lVar16);
                              }
                              (*pcVar10)(lVar15);
                            }
                          }
                        }
                        _free(pvVar13);
                        _fclose(pFVar11);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

