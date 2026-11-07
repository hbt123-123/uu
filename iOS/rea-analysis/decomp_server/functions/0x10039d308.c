// rea decompile_all
// name: FUN_10039d308
// address: 0x10039d308
// body: available
// range: 0x10039d308-0x10039d473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_10039d308(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar5 + 0x40));
  puVar2 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar4 = (long)puVar2 - extraout_x12;
  FUN_10040625c(lVar4,1);
  pcVar6 = *(code **)(lVar5 + 8);
  (*pcVar6)(lVar4,lVar1);
  __s10Foundation3URLV22appendingPathComponentyACSSF(puVar2,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  FUN_1003f2468(lVar4,1);
  lVar5 = lVar1;
  (*pcVar6)(puVar2,lVar1);
  __s10Foundation3URLV4pathSSvg();
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg();
  _swift_bridgeObjectRelease(lVar5);
  puVar3 = puVar2 + 0x20;
  __s6Darwin4openys5Int32VSPys4Int8VG_ADtF(puVar3,0);
  _swift_release(puVar2);
  FUN_10039d474();
  _swift_allocObject();
  FUN_10039cf34(puVar3,param_4 & 1,puVar2);
  (*pcVar6)(param_1,lVar1);
  (*pcVar6)(lVar4,lVar1);
  return puVar3;
}

