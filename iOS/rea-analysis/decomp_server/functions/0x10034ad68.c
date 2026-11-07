// rea decompile_all
// name: FUN_10034ad68
// address: 0x10034ad68
// body: available
// range: 0x10034ad68-0x10034af13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10034ad68(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar8 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar8 != 0) {
    uVar6 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_1002c0b5c(0,uVar6,0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10034af14);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar9 = (undefined8 *)(param_1 + 0x20);
      do {
        uVar5 = *puVar9;
        _SecCertificateCopyData();
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
        uVar4 = *(ulong *)(puVar1 + 0x10);
        uVar3 = uVar4 + 1;
        uVar7 = uVar6;
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
          uVar7 = uVar3;
          FUN_1002c0b5c(1 < *(ulong *)(puVar1 + 0x18),uVar3,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar3;
        *(undefined8 *)(puVar1 + uVar4 * 0x10 + 0x20) = uVar5;
        *(ulong *)(puVar1 + uVar4 * 0x10 + 0x28) = uVar6;
        puVar9 = puVar9 + 1;
        uVar8 = uVar8 - 1;
        uVar6 = uVar7;
      } while (uVar8 != 0);
    }
    else {
      uVar6 = 0;
      do {
        uVar3 = uVar6;
        uVar7 = param_1;
        FUN_1002d3940();
        uVar4 = uVar3;
        _SecCertificateCopyData();
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
        _swift_unknownObjectRelease(uVar3);
        uVar3 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
          FUN_1002c0b5c(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
        }
        uVar6 = uVar6 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
        *(ulong *)(puVar1 + uVar3 * 0x10 + 0x20) = uVar4;
        *(ulong *)(puVar1 + uVar3 * 0x10 + 0x28) = uVar7;
      } while (uVar8 != uVar6);
    }
  }
  return puVar1;
}

