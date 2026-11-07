// rea decompile_all
// name: FUN_10017fa44
// address: 0x10017fa44
// body: available
// range: 0x10017fa44-0x10017fb4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017fa44(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x49);
  uVar3 = 0x8000000100896ff0;
  uVar2 = 0x1000000000000047;
  __sSS6appendyySSF(0x1000000000000047,0x8000000100896ff0);
  __s10Foundation3URLV25deletingLastPathComponentACyF(lVar4);
  __s10Foundation3URLV4pathSSvg();
  (**(code **)(lVar5 + 8))(lVar4,lVar1);
  __sSS6appendyySSF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

