// rea decompile_all
// name: FUN_10067c9e0
// address: 0x10067c9e0
// body: available
// range: 0x10067c9e0-0x10067cc77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10067c9e0(undefined8 param_1,long param_2,ulong param_3,ulong param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  param_4 = param_4 >> 1;
  uVar10 = param_4 - param_3;
  if (param_4 == param_3) {
    _swift_unknownObjectRelease();
    uVar3 = 0;
  }
  else {
    if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc44);
      (*pcVar2)();
    }
    if ((long)uVar10 < 1) {
      _swift_unknownObjectRelease();
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      if ((param_5 < (long)param_3) || ((long)param_4 <= param_5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc48);
        (*pcVar2)();
      }
      uVar3 = (ulong)*(byte *)(param_2 + param_5) << 0x38;
      if (uVar10 == 1) {
        _swift_unknownObjectRelease();
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 0;
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
        uVar4 = 0;
      }
      else {
        if ((long)param_4 <= param_5 + 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc4c);
          (*pcVar2)();
        }
        uVar4 = (ulong)*(byte *)(param_2 + param_5 + 1) << 0x30;
        if (uVar10 < 3) {
          _swift_unknownObjectRelease();
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0;
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = 0;
        }
        else {
          lVar1 = param_5 + 2;
          if ((lVar1 < (long)param_3) || ((long)param_4 <= lVar1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc50);
            (*pcVar2)();
          }
          uVar5 = (ulong)*(byte *)(param_2 + lVar1) << 0x28;
          if (uVar10 == 3) {
            _swift_unknownObjectRelease();
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 0;
          }
          else {
            lVar1 = param_5 + 3;
            if (SCARRY8(param_5,3)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc54);
              (*pcVar2)();
            }
            if ((lVar1 < (long)param_3) || ((long)param_4 <= lVar1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc58);
              (*pcVar2)();
            }
            uVar6 = (ulong)*(byte *)(param_2 + lVar1) << 0x20;
            if (uVar10 < 5) {
              _swift_unknownObjectRelease();
              uVar10 = 0;
              uVar9 = 0;
              uVar8 = 0;
              uVar7 = 0;
            }
            else {
              lVar1 = param_5 + 4;
              if (SCARRY8(param_5,4)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc5c);
                (*pcVar2)();
              }
              if ((lVar1 < (long)param_3) || ((long)param_4 <= lVar1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc60);
                (*pcVar2)();
              }
              uVar7 = (ulong)*(byte *)(param_2 + lVar1) << 0x18;
              if (uVar10 == 5) {
                _swift_unknownObjectRelease();
                uVar10 = 0;
                uVar9 = 0;
                uVar8 = 0;
              }
              else {
                lVar1 = param_5 + 5;
                if (SCARRY8(param_5,5)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc64);
                  (*pcVar2)();
                }
                if ((lVar1 < (long)param_3) || ((long)param_4 <= lVar1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc68);
                  (*pcVar2)();
                }
                uVar8 = (ulong)*(byte *)(param_2 + lVar1) << 0x10;
                if (uVar10 < 7) {
                  _swift_unknownObjectRelease();
                  uVar10 = 0;
                  uVar9 = 0;
                }
                else {
                  lVar1 = param_5 + 6;
                  if (SCARRY8(param_5,6)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc6c);
                    (*pcVar2)();
                  }
                  if ((lVar1 < (long)param_3) || ((long)param_4 <= lVar1)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc70);
                    (*pcVar2)();
                  }
                  uVar9 = (ulong)*(byte *)(param_2 + lVar1) << 8;
                  if (uVar10 == 7) {
                    _swift_unknownObjectRelease();
                    uVar10 = 0;
                  }
                  else {
                    lVar1 = param_5 + 7;
                    if (SCARRY8(param_5,7)) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc74);
                      (*pcVar2)();
                    }
                    if ((lVar1 < (long)param_3) || ((long)param_4 <= lVar1)) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067cc78);
                      (*pcVar2)();
                    }
                    uVar10 = (ulong)*(byte *)(param_2 + lVar1);
                    _swift_unknownObjectRelease();
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar3 = uVar9 | uVar10 | uVar8 | uVar7 | uVar6 | uVar5 | uVar4 | uVar3;
  }
  return uVar3;
}

