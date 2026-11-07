// rea decompile_all
// name: FUN_10067c25c
// address: 0x10067c25c
// body: available
// range: 0x10067c25c-0x10067c38b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10067c25c(undefined8 param_1,long param_2,ulong param_3,ulong param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  param_4 = param_4 >> 1;
  uVar2 = param_4 - param_3;
  if (param_4 == param_3) {
    _swift_unknownObjectRelease();
    uVar4 = 0;
  }
  else {
    if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c378);
      (*pcVar3)();
    }
    if ((long)uVar2 < 1) {
      _swift_unknownObjectRelease();
      uVar7 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      if ((param_5 < (long)param_3) || ((long)param_4 <= param_5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c37c);
        (*pcVar3)();
      }
      uVar4 = (uint)*(byte *)(param_2 + param_5) << 0x18;
      if (uVar2 == 1) {
        _swift_unknownObjectRelease();
        uVar7 = 0;
        uVar6 = 0;
        uVar5 = 0;
      }
      else {
        if ((long)param_4 <= param_5 + 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c380);
          (*pcVar3)();
        }
        uVar5 = (uint)*(byte *)(param_2 + param_5 + 1) << 0x10;
        if (uVar2 < 3) {
          _swift_unknownObjectRelease();
          uVar7 = 0;
          uVar6 = 0;
        }
        else {
          lVar1 = param_5 + 2;
          if ((lVar1 < (long)param_3) || ((long)param_4 <= lVar1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c384);
            (*pcVar3)();
          }
          uVar6 = (uint)*(byte *)(param_2 + lVar1) << 8;
          if (uVar2 == 3) {
            _swift_unknownObjectRelease();
            uVar7 = 0;
          }
          else {
            lVar1 = param_5 + 3;
            if (SCARRY8(param_5,3)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c388);
              (*pcVar3)();
            }
            if ((lVar1 < (long)param_3) || ((long)param_4 <= lVar1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10067c38c);
              (*pcVar3)();
            }
            uVar7 = (uint)*(byte *)(param_2 + lVar1);
            _swift_unknownObjectRelease();
          }
        }
      }
    }
    uVar4 = uVar6 | uVar7 | uVar5 | uVar4;
  }
  return uVar4;
}

