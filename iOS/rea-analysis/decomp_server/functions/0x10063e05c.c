// rea decompile_all
// name: FUN_10063e05c
// address: 0x10063e05c
// body: available
// range: 0x10063e05c-0x10063e2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10063e05c(undefined *param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar4 = *(ulong *)(unaff_x20 + 0xa0) + 1;
  if (0xfffffffffffffffe < *(ulong *)(unaff_x20 + 0xa0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063e2a8);
    (*pcVar1)();
  }
  *(ulong *)(unaff_x20 + 0xa0) = uVar4;
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa8);
  if ((uVar4 & 1) == 0) {
    lVar5 = 0;
    do {
      lVar9 = lVar5 + 1;
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10063e2a4);
        (*pcVar1)();
      }
      lVar5 = lVar5 + 1;
      uVar6 = (uint)uVar4;
      uVar4 = uVar4 >> 1;
    } while ((uVar6 >> 1 & 1) == 0);
  }
  else {
    lVar9 = 0;
  }
  _swift_bridgeObjectRetain(uVar8);
  FUN_10063d80c(lVar9);
  uVar7 = uVar8;
  FUN_10063610c(uVar8,lVar9);
  _swift_bridgeObjectRelease(lVar9);
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar7;
  _swift_bridgeObjectRelease(uVar8);
  if ((param_4 & 1) != 0) {
    uVar8 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar2 = param_1;
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_dynamicCastClass();
    if (puVar2 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar9 = *(long *)(puVar2 + 0x10);
    _swift_release();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10063e2ac);
      (*pcVar1)();
    }
    if (lVar9 == (param_4 >> 1) - param_3) {
      puVar2 = param_1;
      _swift_dynamicCastClass(param_1,uVar8);
      if (puVar2 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      goto LAB_10063e1a4;
    }
    _swift_unknownObjectRelease();
  }
  thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
  puVar2 = param_1;
LAB_10063e1a4:
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa8);
  _swift_bridgeObjectRetain(uVar8);
  puVar3 = puVar2;
  FUN_10063610c(puVar2,uVar8);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(uVar8);
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  puVar2 = puVar3;
  _swift_bridgeObjectRetain();
  (*pcVar1)();
  _swift_bridgeObjectRelease(puVar3);
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063e2b8);
    (*pcVar1)();
  }
  _swift_bridgeObjectRelease(puVar3);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa8);
  _swift_bridgeObjectRetain(uVar8);
  puVar3 = puVar2;
  FUN_10063610c(puVar2,uVar8);
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(uVar8);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar8 = uVar7;
  _swift_bridgeObjectRetain();
  if ((param_5 & 1) == 0) {
    FUN_10063610c();
  }
  else {
    FUN_1006363a8();
  }
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar8;
  _swift_bridgeObjectRelease(uVar7);
  return puVar3;
}

