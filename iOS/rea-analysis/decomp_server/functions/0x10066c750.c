// rea decompile_all
// name: FUN_10066c750
// address: 0x10066c750
// body: available
// range: 0x10066c750-0x10066c90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined *
FUN_10066c750(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *local_60;
  undefined8 uStack_58;
  
  lVar7 = *(long *)(unaff_x20 + 0x68);
  if (lVar7 == 0) {
    FUN_10066cb9c();
    _swift_allocError(&DAT_1009e5530,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar9 = (ulong)*(byte *)(unaff_x20 + 0x60);
    uVar5 = param_2;
    _swift_bridgeObjectRetain();
    thunk_FUN_1006654ec();
    FUN_10064c630();
    FUN_10064e848(lVar2,uVar8,uVar9,lVar7,*(undefined8 *)(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28),param_1,uVar5,param_3);
    _swift_bridgeObjectRelease(param_4);
    lVar3 = lVar2;
    uVar5 = uVar8;
    FUN_10065f798(lVar2,uVar8,uVar9,lVar7);
    if (SCARRY8(lVar3,7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066c910);
      (*pcVar1)();
    }
    if ((long)(lVar3 + 7U) < 8) {
      _swift_bridgeObjectRelease(lVar7);
      puVar6 = (undefined *)0x0;
      uVar8 = 0xc000000000000000;
    }
    else {
      puVar6 = (undefined *)(lVar3 + 7U >> 3);
      puVar4 = puVar6;
      FUN_10009a308();
      local_60 = puVar4;
      uStack_58 = uVar5;
      FUN_10064c1f8(&local_60,puVar6,lVar2,uVar8,uVar9,lVar7);
      puVar6 = local_60;
      uVar8 = uStack_58;
    }
    puVar4 = puVar6;
    FUN_100665cbc(puVar6,uVar8);
    FUN_100006cdc(puVar6,uVar8);
    if (1 < ((uint)param_2 & 0xff)) {
      puVar6 = &DAT_100ab7e50;
      FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
      _swift_initStaticObject();
      local_60 = puVar6;
      FUN_100628ae0(puVar4);
      puVar6 = local_60;
      puVar4 = local_60;
      thunk_FUN_10066a9a0(local_60);
      _swift_bridgeObjectRelease(puVar6);
    }
  }
  return puVar4;
}

