// rea decompile_all
// name: FUN_10066c910
// address: 0x10066c910
// body: available
// range: 0x10066c910-0x10066ca77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066c910(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_60;
  undefined8 uStack_58;
  
  lVar6 = *(long *)(unaff_x20 + 0x68);
  if (lVar6 == 0) {
    FUN_10066cb9c();
    _swift_allocError(&DAT_1009e5530,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar8 = (ulong)*(byte *)(unaff_x20 + 0x60);
    _swift_bridgeObjectRetain();
    thunk_FUN_1006654ec();
    FUN_10064c630();
    FUN_10064e848(lVar2,uVar7,uVar8,lVar6,*(undefined8 *)(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28),param_1,param_2,param_3);
    _swift_bridgeObjectRelease(param_4);
    lVar3 = lVar2;
    uVar5 = uVar7;
    FUN_10065f798(lVar2,uVar7,uVar8,lVar6);
    if (SCARRY8(lVar3,7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ca78);
      (*pcVar1)();
    }
    if ((long)(lVar3 + 7U) < 8) {
      _swift_bridgeObjectRelease(lVar6);
      uVar8 = 0;
      uVar7 = 0xc000000000000000;
    }
    else {
      uVar9 = lVar3 + 7U >> 3;
      uVar4 = uVar9;
      FUN_10009a308();
      local_60 = uVar4;
      uStack_58 = uVar5;
      FUN_10064c1f8(&local_60,uVar9,lVar2,uVar7,uVar8,lVar6);
      uVar8 = local_60;
      uVar7 = uStack_58;
    }
    FUN_100665cbc(uVar8,uVar7);
    FUN_100006cdc(uVar8,uVar7);
  }
  return;
}

