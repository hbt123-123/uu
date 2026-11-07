// rea decompile_all
// name: FUN_10066c47c
// address: 0x10066c47c
// body: available
// range: 0x10066c47c-0x10066c5a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10066c47c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  ulong local_50;
  undefined8 uStack_48;
  
  _swift_bridgeObjectRetain();
  thunk_FUN_1006654ec();
  FUN_10064c630();
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar7 = (ulong)*(byte *)(unaff_x20 + 0x40);
  FUN_10064e848(lVar2,uVar8,uVar7,uVar6,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),param_1,param_2,param_3);
  _swift_bridgeObjectRelease(param_4);
  lVar3 = lVar2;
  uVar5 = uVar8;
  FUN_10065f798(lVar2,uVar8,uVar7,uVar6);
  if (!SCARRY8(lVar3,7)) {
    if ((long)(lVar3 + 7U) < 8) {
      _swift_bridgeObjectRelease(uVar6);
      uVar7 = 0;
      uVar8 = 0xc000000000000000;
    }
    else {
      uVar9 = lVar3 + 7U >> 3;
      uVar4 = uVar9;
      FUN_10009a308();
      local_50 = uVar4;
      uStack_48 = uVar5;
      FUN_10064c1f8(&local_50,uVar9,lVar2,uVar8,uVar7,uVar6);
      uVar7 = local_50;
      uVar8 = uStack_48;
    }
    uVar4 = uVar7;
    FUN_100665cbc(uVar7,uVar8);
    FUN_100006cdc(uVar7,uVar8);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066c5a4);
  (*pcVar1)();
}

