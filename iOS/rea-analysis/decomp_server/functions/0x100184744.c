// rea decompile_all
// name: FUN_100184744
// address: 0x100184744
// body: available
// range: 0x100184744-0x100184883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100184744(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  ID self;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar3 = (long)puVar2 - extraout_x12;
  __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(lVar3,param_1,param_2,1);
  __s10Foundation3URLV016standardizedFileB0ACvg(puVar2);
  pcVar5 = *(code **)(lVar4 + 8);
  lVar4 = lVar1;
  (*pcVar5)(lVar3,lVar1);
  __s10Foundation3URLV4pathSSvg();
  (*pcVar5)(puVar2,lVar1);
  self = *(ID *)(unaff_x20 + 0x38);
  _objc_msgSend(self,"lock");
  _swift_beginAccess(unaff_x20 + 0x40,auStack_78,0x21,0);
  FUN_10006d958(auStack_60,lVar3,lVar4);
  _swift_endAccess(auStack_78);
  _swift_bridgeObjectRelease(local_58);
  _objc_msgSend(self,"unlock");
  return;
}

