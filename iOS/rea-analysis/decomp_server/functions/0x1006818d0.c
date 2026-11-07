// rea decompile_all
// name: thunk_FUN_100686184
// address: 0x1006818d0
// body: available
// range: 0x1006818d0-0x1006818d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 thunk_FUN_100686184(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  bVar1 = *(byte *)((long)unaff_x20 + 0x31);
  if (1 < bVar1) {
    if (bVar1 == 2) {
      uVar2 = *(undefined1 *)(unaff_x20 + 6);
      param_1[3] = PTR___sSbN_1009958c8;
      *(undefined1 *)param_1 = uVar2;
      return param_2;
    }
    if (bVar1 == 4) {
      uVar6 = unaff_x20[1];
      puVar3 = &DAT_100ab9ea0;
      puVar4 = &DAT_10084d528;
    }
    else {
      if (bVar1 != 3) goto LAB_10068625c;
      uVar6 = *unaff_x20;
      puVar3 = &DAT_100ab9e98;
      puVar4 = &DAT_10084d520;
    }
    FUN_100004bb4(puVar3,puVar4);
    param_1[3] = puVar3;
    *param_1 = uVar6;
LAB_100686238:
    _swift_bridgeObjectRetain(uVar6);
    return uVar6;
  }
  if (bVar1 == 0) {
    uVar7 = unaff_x20[4];
    puVar3 = &DAT_100ab9e90;
    ppuVar5 = &PTR__OBJC_CLASS___NSNumber_100a65780;
    goto LAB_100686270;
  }
  if (bVar1 == 1) {
    uVar7 = unaff_x20[2];
    uVar6 = unaff_x20[3];
    param_1[3] = PTR___sSSN_1009957f8;
    *param_1 = uVar7;
    param_1[1] = uVar6;
    goto LAB_100686238;
  }
LAB_10068625c:
  uVar7 = unaff_x20[5];
  puVar3 = &DAT_100ab9e80;
  ppuVar5 = &PTR__OBJC_CLASS___NSNull_100a659f8;
LAB_100686270:
  uVar6 = 0;
  FUN_10004003c(0,puVar3,ppuVar5);
  param_1[3] = uVar6;
  *param_1 = uVar7;
  return uVar7;
}

