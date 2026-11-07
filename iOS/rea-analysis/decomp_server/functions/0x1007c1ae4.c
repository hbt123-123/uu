// rea decompile_all
// name: FUN_1007c1ae4
// address: 0x1007c1ae4
// body: available
// range: 0x1007c1ae4-0x1007c1c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_1007c1ae4(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (param_3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_3 & 0xffffffffffffff8;
    if ((long)param_3 < 0) {
      uVar4 = param_3;
    }
    _swift_bridgeObjectRetain(param_3);
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    _swift_bridgeObjectRelease(param_3);
  }
  if (uVar4 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007c1c30);
      (*pcVar1)();
    }
    if (param_2 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007c1c28);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      uVar2 = 0;
      switchD_1007bf228::caseD_6d(0);
      _swift_arrayInitWithCopy(param_1,(param_3 & 0xffffffffffffff8) + 0x20,uVar4,uVar2);
    }
    else {
      if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007c1c2c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        *param_1 = *(undefined8 *)(param_3 + 0x20);
        lVar6 = uVar4 - 1;
        if (lVar6 != 0) {
          puVar7 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            *param_1 = *puVar7;
            lVar6 = lVar6 + -1;
            puVar7 = puVar7 + 1;
          } while (lVar6 != 0);
        }
      }
      else {
        _swift_bridgeObjectRetain(param_3);
        uVar5 = 0;
        do {
          uVar3 = uVar5;
          FUN_1007d0358(uVar5,param_3);
          param_1[uVar5] = uVar3;
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
        _swift_bridgeObjectRelease(param_3);
      }
    }
  }
  return param_3;
}

