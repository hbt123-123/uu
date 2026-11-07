// rea decompile_all
// name: FUN_10067c38c
// address: 0x10067c38c
// body: available
// range: 0x10067c38c-0x10067c60f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10067c38c(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  puVar4 = &DAT_100ab7e48;
  FUN_100004bb4(&DAT_100ab7e48,&DAT_100848d08);
  puVar5 = &DAT_100ab7e30;
  FUN_100004bb4(&DAT_100ab7e30,&DAT_100848ce8);
  if (puVar4 == puVar5) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c610);
    (*pcVar3)();
  }
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    uVar6 = 0;
  }
  else {
    if (uVar6 <= param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c5e4);
      (*pcVar3)();
    }
    lVar1 = param_1 + 0x20;
    bVar2 = *(byte *)(lVar1 + param_2);
    if (uVar6 == 1) {
      _swift_bridgeObjectRelease(param_1);
      uVar6 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      if (uVar6 <= param_2 + 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c5e8);
        (*pcVar3)();
      }
      uVar7 = (ulong)*(byte *)(lVar1 + param_2 + 1) << 0x30;
      if (uVar6 < 3) {
        _swift_bridgeObjectRelease(param_1);
        uVar6 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
      }
      else {
        if (uVar6 <= param_2 + 2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c5ec);
          (*pcVar3)();
        }
        uVar8 = (ulong)*(byte *)(lVar1 + param_2 + 2) << 0x28;
        if (uVar6 == 3) {
          _swift_bridgeObjectRelease(param_1);
          uVar6 = 0;
          uVar12 = 0;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
        }
        else {
          if (uVar6 <= param_2 + 3) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c5f0);
            (*pcVar3)();
          }
          uVar9 = (ulong)*(byte *)(lVar1 + param_2 + 3) << 0x20;
          if (uVar6 < 5) {
            _swift_bridgeObjectRelease(param_1);
            uVar6 = 0;
            uVar12 = 0;
            uVar11 = 0;
            uVar10 = 0;
          }
          else {
            if (uVar6 <= param_2 + 4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c5f4);
              (*pcVar3)();
            }
            uVar10 = (ulong)*(byte *)(lVar1 + param_2 + 4) << 0x18;
            if (uVar6 == 5) {
              _swift_bridgeObjectRelease(param_1);
              uVar6 = 0;
              uVar12 = 0;
              uVar11 = 0;
            }
            else {
              if (SCARRY8(param_2,5)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c5f8);
                (*pcVar3)();
              }
              if (uVar6 <= param_2 + 5) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c5fc);
                (*pcVar3)();
              }
              uVar11 = (ulong)*(byte *)(lVar1 + param_2 + 5) << 0x10;
              if (uVar6 < 7) {
                _swift_bridgeObjectRelease(param_1);
                uVar6 = 0;
                uVar12 = 0;
              }
              else {
                if (SCARRY8(param_2,6)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c600);
                  (*pcVar3)();
                }
                if (uVar6 <= param_2 + 6) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c604);
                  (*pcVar3)();
                }
                uVar12 = (ulong)*(byte *)(lVar1 + param_2 + 6) << 8;
                if (uVar6 == 7) {
                  _swift_bridgeObjectRelease(param_1);
                  uVar6 = 0;
                }
                else {
                  if (SCARRY8(param_2,7)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c608);
                    (*pcVar3)();
                  }
                  if (uVar6 <= param_2 + 7) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c60c);
                    (*pcVar3)();
                  }
                  uVar6 = (ulong)*(byte *)(lVar1 + param_2 + 7);
                  _swift_bridgeObjectRelease(param_1);
                }
              }
            }
          }
        }
      }
    }
    uVar6 = uVar6 | uVar12 | uVar11 | uVar10 | uVar9 | uVar8 | uVar7 | (ulong)bVar2 << 0x38;
  }
  return uVar6;
}

