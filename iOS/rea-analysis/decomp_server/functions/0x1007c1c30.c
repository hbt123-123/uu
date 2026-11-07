// rea decompile_all
// name: FUN_1007c1c30
// address: 0x1007c1c30
// body: available
// range: 0x1007c1c30-0x1007c1d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1007c1c30(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_3 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_3 & 0xffffffffffffff8;
    if ((long)param_3 < 0) {
      uVar6 = param_3;
    }
    _swift_bridgeObjectRetain(param_3);
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    _swift_bridgeObjectRelease(param_3);
  }
  if (uVar6 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007c1d80);
      (*pcVar1)();
    }
    if (param_2 < (long)uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007c1d78);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      puVar2 = &DAT_100abcdd8;
      FUN_1007b4550(&DAT_100abcdd8);
      _swift_arrayInitWithCopy(param_1,(param_3 & 0xffffffffffffff8) + 0x20,uVar6,puVar2);
    }
    else {
      if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007c1d7c);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar4 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar4;
        lVar8 = uVar6 - 1;
        if (lVar8 != 0) {
          uVar5 = uVar4;
          puVar9 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar4 = *puVar9;
            *param_1 = uVar4;
            _swift_unknownObjectRetain(uVar5);
            lVar8 = lVar8 + -1;
            uVar5 = uVar4;
            puVar9 = puVar9 + 1;
          } while (lVar8 != 0);
        }
        _swift_unknownObjectRetain(uVar4);
      }
      else {
        _swift_bridgeObjectRetain(param_3);
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_1007d054c(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar6 != uVar7);
        _swift_bridgeObjectRelease(param_3);
      }
    }
  }
  return param_3;
}

