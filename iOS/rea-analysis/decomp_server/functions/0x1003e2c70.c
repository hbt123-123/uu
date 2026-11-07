// rea decompile_all
// name: FUN_1003e2c70
// address: 0x1003e2c70
// body: available
// range: 0x1003e2c70-0x1003e2d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e2c70(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  long local_48;
  
  lVar7 = *param_2;
  _swift_beginAccess(param_2 + 2,auStack_68,0,0);
  lVar6 = param_2[2];
  uVar1 = *(undefined8 *)(lVar7 + 0x50);
  uVar2 = *(undefined8 *)(lVar7 + 0x58);
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  lVar7 = lVar6;
  _swift_bridgeObjectRetain();
  __sSD4keysSD4KeysVyxq__Gvg();
  _swift_bridgeObjectRelease(lVar6);
  uVar3 = 0;
  local_48 = lVar7;
  __sSD4KeysVMa(0,uVar1,uVar2,uVar8);
  puVar4 = PTR___sSD4KeysVyxq__GSTsMc_100995760;
  _swift_getWitnessTable(PTR___sSD4KeysVyxq__GSTsMc_100995760,uVar3);
  plVar5 = &local_48;
  __sShyShyxGqd__nc7ElementQyd__RszSTRd__lufC(plVar5,uVar1,uVar3,uVar8,puVar4);
  *param_1 = (long)plVar5;
  return;
}

