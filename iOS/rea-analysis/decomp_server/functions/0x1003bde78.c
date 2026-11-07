// rea decompile_all
// name: FUN_1003bde78
// address: 0x1003bde78
// body: available
// range: 0x1003bde78-0x1003bdf37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003bde78(long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long local_58 [3];
  
  lVar7 = *param_2;
  _swift_beginAccess(param_2 + 3,local_58,0x20,0);
  lVar3 = param_2[3];
  uVar1 = *(undefined8 *)(lVar7 + 0x50);
  uVar2 = *(undefined8 *)(lVar7 + 0x58);
  uVar8 = *(undefined8 *)(lVar7 + 0x60);
  __sSD6valuesSD6ValuesVyxq__Gvg(lVar3,uVar1,uVar2,uVar8);
  _swift_endAccess(local_58);
  uVar4 = 0;
  local_58[0] = lVar3;
  __sSD6ValuesVMa(0,uVar1,uVar2,uVar8);
  puVar5 = PTR___sSD6ValuesVyxq__GSTsMc_100995770;
  _swift_getWitnessTable(PTR___sSD6ValuesVyxq__GSTsMc_100995770,uVar4);
  plVar6 = local_58;
  __sSaySayxGqd__c7ElementQyd__RszSTRd__lufC(plVar6,uVar2,uVar4,puVar5);
  *param_1 = (long)plVar6;
  return;
}

