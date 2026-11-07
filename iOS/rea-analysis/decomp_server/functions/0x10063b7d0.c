// rea decompile_all
// name: FUN_10063b7d0
// address: 0x10063b7d0
// body: available
// range: 0x10063b7d0-0x10063b9af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10063b920 to 0x100629fb8 thunk_FUN_100629d98 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10063b7d0(undefined *param_1,undefined *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  
  if (0xfffffffffffffffe < *(ulong *)(unaff_x20 + 0x78)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10063b9a0);
    (*pcVar3)();
  }
  lVar4 = *(long *)(unaff_x20 + 0x70);
  *(ulong *)(unaff_x20 + 0x78) = *(ulong *)(unaff_x20 + 0x78) + 1;
  pcVar3 = *(code **)(unaff_x20 + 0x10);
  FUN_10067bccc();
  lVar10 = lVar4;
  (*pcVar3)();
  _swift_bridgeObjectRelease(lVar4);
  if (lVar10 == 0) {
    if ((param_4 & 1) != 0) {
      uVar7 = 0;
      __ss28__ContiguousArrayStorageBaseCMa(0);
      puVar8 = param_1;
      _swift_unknownObjectRetain_n(param_1,2);
      _swift_dynamicCastClass();
      if (puVar8 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar10 = *(long *)(puVar8 + 0x10);
      _swift_release();
      if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10063b9a8);
        (*pcVar3)();
      }
      if (lVar10 == (param_4 >> 1) - param_3) {
        puVar8 = param_1;
        _swift_dynamicCastClass(param_1,uVar7);
        if (puVar8 != (undefined *)0x0) {
          return puVar8;
        }
        _swift_unknownObjectRelease(param_1);
        return PTR___swiftEmptyArrayStorage_100995ea0;
      }
      _swift_unknownObjectRelease();
    }
    thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
    return param_1;
  }
  FUN_100636298(param_2,param_3,param_4,lVar10);
  _swift_bridgeObjectRelease();
  FUN_10063b608();
  if (!SCARRY8(*(long *)(lVar10 + 0x30),*(long *)(param_2 + 0x10))) {
    *(long *)(lVar10 + 0x30) = *(long *)(lVar10 + 0x30) + *(long *)(param_2 + 0x10);
    uVar9 = *(ulong *)(lVar10 + 0x10);
    puVar8 = param_2;
    FUN_1006376cc();
    uVar6 = *(ulong *)(lVar10 + 0x38);
    uVar1 = *(ulong *)(lVar10 + 0x40);
    uVar7 = *(undefined8 *)(lVar10 + 0x18);
    uVar2 = *(undefined8 *)(lVar10 + 0x20);
    puVar5 = puVar8;
    FUN_10067bee4();
    _swift_bridgeObjectRelease(puVar8);
    uVar6 = (ulong)puVar5 ^ uVar6;
    uVar9 = uVar9 ^ uVar1;
    FUN_10063c228(uVar6,uVar9,uVar7,uVar2);
    *(ulong *)(lVar10 + 0x38) = uVar6;
    *(ulong *)(lVar10 + 0x40) = uVar9;
    _swift_release(lVar10);
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10063b9a4);
  (*pcVar3)();
}

