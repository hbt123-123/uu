// rea decompile_all
// name: FUN_10033babc
// address: 0x10033babc
// body: available
// range: 0x10033babc-0x10033bc27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033babc(undefined8 param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x21;
  code *pcVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auStack_68 [24];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar6 = *(long *)(unaff_x20 + 0x48);
  FUN_10003f030(unaff_x20 + 0x28,uVar8);
  (**(code **)(lVar6 + 8))(param_1,uVar8,lVar6);
  if (unaff_x21 == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x18);
    uVar8 = *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x10);
    _os_unfair_lock_lock(uVar8);
    puVar5 = auStack_68;
    _swift_beginAccess(lVar6 + 0x18,puVar5,0,0);
    plVar9 = *(long **)(lVar6 + 0x18);
    pcVar7 = *(code **)(*plVar9 + 0x80);
    plVar2 = plVar9;
    _swift_retain();
    (*pcVar7)();
    plVar3 = plVar2;
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
    puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (plVar3 != (long *)0x0) {
      FUN_1002bb634();
      _swift_bridgeObjectRelease(plVar3);
    }
    FUN_1002bba74(0x2d746e65746e6f43,0xec00000065707954,plVar2,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    puVar4 = puVar1;
    FUN_1002bc258(puVar1);
    _swift_bridgeObjectRelease(puVar1);
    __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvs(puVar4);
    _swift_release(plVar9);
    _os_unfair_lock_unlock(uVar8);
  }
  return;
}

