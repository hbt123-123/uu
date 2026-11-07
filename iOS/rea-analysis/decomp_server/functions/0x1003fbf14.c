// rea decompile_all
// name: FUN_1003fbf14
// address: 0x1003fbf14
// body: available
// range: 0x1003fbf14-0x1003fc043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1003fbf14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar5 = (long)puVar3 - extraout_x12;
  if (DAT_100a89288 != -1) {
    _swift_once(&DAT_100a89288,FUN_1003b1eec);
  }
  lVar2 = lVar1;
  FUN_10021bec0(lVar1,&DAT_100b36820);
  __s10Foundation3URLV22appendingPathComponentyACSSF(puVar3,param_1,param_2,lVar2);
  __s10Foundation3URLV22appendingPathComponentyACSSF(lVar5,param_3,param_4);
  pcVar4 = *(code **)(lVar6 + 8);
  lVar6 = lVar1;
  (*pcVar4)(puVar3,lVar1);
  __s10Foundation3URLV4pathSSvg();
  (*pcVar4)(lVar5,lVar1);
  auVar7._8_8_ = lVar6;
  auVar7._0_8_ = puVar3;
  return auVar7;
}

