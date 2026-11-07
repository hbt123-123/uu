// rea decompile_all
// name: FUN_10063bc3c
// address: 0x10063bc3c
// body: available
// range: 0x10063bc3c-0x10063bed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10063be3c to 0x100629fb8 thunk_FUN_100629d98 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063bc3c(undefined *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  
  if (0xfffffffffffffffe < *(ulong *)(unaff_x20 + 0x78)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10063beb8);
    (*pcVar3)();
  }
  *(ulong *)(unaff_x20 + 0x78) = *(ulong *)(unaff_x20 + 0x78) + 1;
  puVar4 = param_1;
  FUN_10063b608();
  puVar6 = param_1;
  if ((param_4 & 1) != 0) {
    uVar9 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar5 = param_1;
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_dynamicCastClass();
    if (puVar5 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar11 = *(long *)(puVar5 + 0x10);
    _swift_release();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10063bec0);
      (*pcVar3)();
    }
    if (lVar11 == (param_4 >> 1) - param_3) {
      _swift_dynamicCastClass(param_1,uVar9);
      if (puVar6 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      goto LAB_10063bd10;
    }
    _swift_unknownObjectRelease();
  }
  thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
LAB_10063bd10:
  if (SCARRY8(*(long *)(puVar4 + 0x30),*(long *)(puVar6 + 0x10))) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10063bebc);
    (*pcVar3)();
  }
  *(long *)(puVar4 + 0x30) = *(long *)(puVar4 + 0x30) + *(long *)(puVar6 + 0x10);
  uVar10 = *(ulong *)(puVar4 + 0x10);
  puVar5 = puVar6;
  FUN_1006376cc();
  _swift_release(puVar6);
  uVar7 = *(ulong *)(puVar4 + 0x38);
  uVar1 = *(ulong *)(puVar4 + 0x40);
  uVar9 = *(undefined8 *)(puVar4 + 0x18);
  uVar2 = *(undefined8 *)(puVar4 + 0x20);
  puVar6 = puVar5;
  FUN_10067bee4();
  _swift_bridgeObjectRelease(puVar5);
  uVar7 = (ulong)puVar6 ^ uVar7;
  uVar10 = uVar10 ^ uVar1;
  FUN_10063c228(uVar7,uVar10,uVar9,uVar2);
  *(ulong *)(puVar4 + 0x38) = uVar7;
  *(ulong *)(puVar4 + 0x40) = uVar10;
  _swift_release(puVar4);
  pcVar3 = *(code **)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x70);
  FUN_10067bccc(lVar11,*(undefined8 *)(unaff_x20 + 0x78));
  lVar8 = lVar11;
  (*pcVar3)();
  _swift_bridgeObjectRelease(lVar11);
  if (lVar8 == 0) {
    if ((param_4 & 1) != 0) {
      uVar9 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar4 = param_1;
      _swift_unknownObjectRetain_n(param_1,2);
      _swift_dynamicCastClass();
      if (puVar4 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar11 = *(long *)(puVar4 + 0x10);
      _swift_release();
      if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10063becc);
        (*pcVar3)();
      }
      if (lVar11 == (param_4 >> 1) - param_3) {
        puVar4 = param_1;
        _swift_dynamicCastClass(param_1,uVar9);
        if (puVar4 != (undefined *)0x0) {
          return;
        }
        _swift_unknownObjectRelease(param_1);
        return;
      }
      _swift_unknownObjectRelease();
    }
    thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
    return;
  }
  FUN_100636298(param_2,param_3,param_4,lVar8);
  _swift_bridgeObjectRelease(lVar8);
  return;
}

