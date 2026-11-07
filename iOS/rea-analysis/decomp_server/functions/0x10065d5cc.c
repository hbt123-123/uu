// rea decompile_all
// name: thunk_FUN_10065d478
// address: 0x10065d5cc
// body: available
// range: 0x10065d5cc-0x10065d5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10065d478(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  uVar7 = unaff_x20[3];
  _swift_bridgeObjectRetain(uVar7);
  uVar4 = uVar1;
  uVar5 = uVar2;
  FUN_10065ca8c(uVar1,uVar2,uVar3,uVar7,10,0);
  if (*(char *)(unaff_x20 + 4) == '\x01') {
    __sSS6appendyySSF(uVar4,uVar5);
    _swift_bridgeObjectRelease(uVar5);
    uVar4 = 0x2d;
    uVar5 = 0xe100000000000000;
  }
  FUN_10065f798(uVar1,uVar2,uVar3,uVar7);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x297374696220,0xe600000000000000);
  _swift_bridgeObjectRetain(uVar5);
  __sSS6appendyySSF(0x2820,0xe200000000000000);
  _swift_bridgeObjectRelease(0xe200000000000000);
  _swift_bridgeObjectRelease(uVar5);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  return;
}

