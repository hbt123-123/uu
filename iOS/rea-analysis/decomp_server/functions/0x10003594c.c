// rea decompile_all
// name: FUN_10003594c
// address: 0x10003594c
// body: available
// range: 0x10003594c-0x100035ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10003594c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100035ad8);
        (*pcVar4)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar9) {
    uVar6 = uVar9;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar6 != 0) {
    FUN_100004bb4(param_5,param_6);
    lVar8 = param_7;
    FUN_100004bb4(param_7,param_8);
    lVar10 = *(long *)(*(long *)(lVar8 + -8) + 0x48);
    uVar7 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
    uVar11 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
    _swift_allocObject(param_5,uVar11 + lVar10 * uVar6,uVar7 | 7);
    puVar5 = param_5;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100035ad0);
      (*pcVar4)();
    }
    lVar8 = (long)puVar5 - uVar11;
    if (lVar8 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100035ad4);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar10 != 0) {
      lVar3 = lVar8 / lVar10;
    }
    *(ulong *)(param_5 + 0x10) = uVar9;
    *(long *)(param_5 + 0x18) = lVar3 << 1;
    puVar5 = param_5;
  }
  FUN_100004bb4(param_7,param_8);
  uVar6 = (ulong)*(byte *)(*(long *)(param_7 + -8) + 0x50);
  uVar6 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  puVar1 = puVar5 + uVar6;
  puVar2 = param_4 + uVar6;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar9,param_7);
  }
  else {
    if ((puVar5 < param_4) || (puVar2 + *(long *)(*(long *)(param_7 + -8) + 0x48) * uVar9 <= puVar1)
       ) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar9);
    }
    else if (puVar5 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}

