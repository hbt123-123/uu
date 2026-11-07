// rea decompile_all
// name: FUN_1003be314
// address: 0x1003be314
// body: available
// range: 0x1003be314-0x1003be43f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003be314(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *param_1;
  uVar4 = *(undefined8 *)(lVar3 + 0x58);
  lVar1 = 0;
  local_80 = param_3;
  __sSqMa(0,uVar4);
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_78 + (-8 - extraout_x8);
  lVar7 = *(long *)(lVar3 + 0x50);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar8,param_2,lVar7);
  (**(code **)(lVar5 + 0x10))(puVar6,local_80,lVar1);
  _swift_beginAccess(param_1 + 3,auStack_78,0x21,0);
  uVar2 = 0;
  __sSDMa(0,lVar7,uVar4,*(undefined8 *)(lVar3 + 0x60));
  __sSDyq_Sgxcis(puVar6,lVar8,uVar2);
  _swift_endAccess(auStack_78);
  return;
}

