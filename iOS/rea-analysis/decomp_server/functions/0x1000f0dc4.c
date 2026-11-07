// rea decompile_all
// name: FUN_1000f0dc4
// address: 0x1000f0dc4
// body: available
// range: 0x1000f0dc4-0x1000f0f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f0dc4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar5 = (long)puVar3 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  FUN_1003b2010();
  (**(code **)(lVar6 + 0x10))(lVar5 - extraout_x12_00,lVar2,lVar1);
  if (DAT_100a73bb0 != -1) {
    _swift_once(&DAT_100a73bb0,FUN_10019b250);
  }
  __s10Foundation3URLV22appendingPathComponentyACSSF(puVar3,DAT_100b36258,DAT_100b36260);
  __s10Foundation3URLV22appendingPathComponentyACSSF(lVar5,0x73746e657645,0xe600000000000000);
  pcVar7 = *(code **)(lVar6 + 8);
  lVar2 = lVar1;
  (*pcVar7)(puVar3,lVar1);
  __s10Foundation3URLV4pathSSvg();
  (*pcVar7)(lVar5,lVar1);
  uVar4 = 0;
  FUN_1003ab6d0(0);
  FUN_1003ab62c(param_1,0xd000000000000039,0x8000000100889360,puVar3,lVar2,uVar4);
  _swift_bridgeObjectRelease(lVar2);
  (*pcVar7)(lVar5 - extraout_x12_00,lVar1);
  return;
}

