// rea decompile_all
// name: FUN_1003bdb68
// address: 0x1003bdb68
// body: available
// range: 0x1003bdb68-0x1003bdcab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bdb68(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar7 = *param_1;
  lVar3 = *(long *)(lVar7 + 0x58);
  lVar1 = 0;
  __sSqMa(0,lVar3);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  lVar5 = *(long *)(lVar7 + 0x50);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar6,param_2,lVar5);
  lVar1 = *(long *)(lVar3 + -8);
  (**(code **)(lVar1 + 0x10))(puVar4,param_3,lVar3);
  (**(code **)(lVar1 + 0x38))(puVar4,0,1,lVar3);
  _swift_beginAccess(param_1 + 3,auStack_78,0x21,0);
  uVar2 = 0;
  __sSDMa(0,lVar5,lVar3,*(undefined8 *)(lVar7 + 0x60));
  __sSDyq_Sgxcis(puVar4,lVar6,uVar2);
  _swift_endAccess(auStack_78);
  return;
}

