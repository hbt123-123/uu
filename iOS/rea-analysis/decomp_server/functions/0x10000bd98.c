// rea decompile_all
// name: FUN_10000bd98
// address: 0x10000bd98
// body: available
// range: 0x10000bd98-0x10000c1cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10000bd98(long param_1,ulong param_2,code *param_3,undefined8 param_4,ulong param_5,
             ulong param_6,undefined *param_7,undefined8 param_8)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x21;
  ulong uVar11;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10000c160);
    (*pcVar2)();
  }
  uVar10 = param_5 >> 0xe;
  uVar11 = param_6 >> 0xe;
  if ((param_1 != 0) &&
     (uVar5 = param_5, puVar8 = PTR___swiftEmptyArrayStorage_100995ea0, uVar10 != uVar11)) {
LAB_10000bdfc:
    uVar10 = uVar5 >> 0xe;
    uVar3 = uVar5;
    uVar4 = uVar5;
    if (uVar10 != uVar11) {
      do {
        uVar5 = uVar3;
        uVar9 = param_5;
        __sSsySJSS5IndexVcig(uVar5,param_5,param_6,param_7,param_8);
        uVar3 = 0;
        (*param_3)();
        if (unaff_x21 != 0) {
          _swift_bridgeObjectRelease(puVar8);
          _swift_bridgeObjectRelease(param_8);
          _swift_bridgeObjectRelease(uVar9);
          return param_7;
        }
        _swift_bridgeObjectRelease(uVar9);
        if ((uVar3 & 1) == 0) {
          __sSs5index5afterSS5IndexVAD_tF(uVar5,param_5,param_6,param_7,param_8);
          uVar3 = uVar5;
          uVar5 = uVar4;
        }
        else {
          if ((uVar4 >> 0xe != uVar10) || ((param_2 & 1) == 0)) goto LAB_10000bf00;
          __sSs5index5afterSS5IndexVAD_tF(uVar5,param_5,param_6,param_7,param_8);
          uVar3 = uVar5;
        }
        uVar10 = uVar3 >> 0xe;
        uVar4 = uVar5;
        if (uVar10 == uVar11) break;
      } while( true );
    }
    goto LAB_10000c0a4;
  }
  if ((uVar10 == uVar11) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_8);
    return PTR___swiftEmptyArrayStorage_100995ea0;
  }
  if (uVar11 < uVar10) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10000c164);
    (*pcVar2)();
  }
  uVar11 = param_5;
  uVar5 = param_6;
  __sSsySsSnySS5IndexVGcig();
  puVar6 = (undefined *)0x0;
  FUN_100033d08(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
  uVar10 = *(ulong *)(puVar6 + 0x10);
  puVar8 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar10) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_100033d08(puVar8,uVar10 + 1,1,puVar6);
  }
  *(ulong *)(puVar8 + 0x10) = uVar10 + 1;
  *(ulong *)(puVar8 + uVar10 * 0x20 + 0x20) = param_5;
  *(ulong *)(puVar8 + uVar10 * 0x20 + 0x28) = param_6;
  *(ulong *)(puVar8 + uVar10 * 0x20 + 0x30) = uVar11;
  *(ulong *)(puVar8 + uVar10 * 0x20 + 0x38) = uVar5;
LAB_10000c0b8:
  _swift_bridgeObjectRelease(param_8);
  return puVar8;
LAB_10000bf00:
  if (uVar10 < uVar4 >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10000c1cc);
    (*pcVar2)();
  }
  uVar10 = uVar5;
  uVar3 = param_5;
  uVar9 = param_6;
  __sSsySsSnySS5IndexVGcig();
  puVar6 = puVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar7 = puVar8;
  if (((ulong)puVar6 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    FUN_100033d08(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
  }
  uVar1 = *(ulong *)(puVar7 + 0x10);
  puVar8 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    FUN_100033d08(puVar8,uVar1 + 1,1,puVar7);
  }
  *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
  *(ulong *)(puVar8 + uVar1 * 0x20 + 0x20) = uVar4;
  *(ulong *)(puVar8 + uVar1 * 0x20 + 0x28) = uVar10;
  *(ulong *)(puVar8 + uVar1 * 0x20 + 0x30) = uVar3;
  *(ulong *)(puVar8 + uVar1 * 0x20 + 0x38) = uVar9;
  __sSs5index5afterSS5IndexVAD_tF(uVar5,param_5,param_6,param_7,param_8);
  if (*(long *)(puVar8 + 0x10) == param_1) goto LAB_10000c0a4;
  goto LAB_10000bdfc;
LAB_10000c0a4:
  if ((uVar5 >> 0xe != uVar11) || ((param_2 & 1) == 0)) {
    if (uVar5 >> 0xe <= uVar11) {
      uVar10 = param_6;
      __sSsySsSnySS5IndexVGcig();
      _swift_bridgeObjectRelease(param_8);
      puVar6 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100033d08(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar11 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar11) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100033d08(puVar8,uVar11 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar11 + 1;
      *(ulong *)(puVar8 + uVar11 * 0x20 + 0x20) = uVar5;
      *(ulong *)(puVar8 + uVar11 * 0x20 + 0x28) = param_6;
      *(ulong *)(puVar8 + uVar11 * 0x20 + 0x30) = param_5;
      *(ulong *)(puVar8 + uVar11 * 0x20 + 0x38) = uVar10;
      return puVar8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10000c188);
    (*pcVar2)();
  }
  goto LAB_10000c0b8;
}

