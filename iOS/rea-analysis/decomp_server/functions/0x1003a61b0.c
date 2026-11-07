// rea decompile_all
// name: FUN_1003a61b0
// address: 0x1003a61b0
// body: available
// range: 0x1003a61b0-0x1003a62a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a61b0(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined1 *puVar6;
  
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1003a5bc8();
  puVar1 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,param_2);
  if ((int)puVar1 == 1) {
    uVar2 = 0;
    FUN_100275594(0);
    uVar5 = 0xb;
  }
  else {
    puVar3 = &DAT_100a7c630;
    FUN_100004bb4(&DAT_100a7c630,&DAT_1008103d8);
    _swift_bridgeObjectRelease(*(undefined8 *)(puVar6 + (long)*(int *)(puVar3 + 0x30) + 8));
    uVar2 = *(undefined8 *)(puVar6 + *(int *)(puVar3 + 0x40));
    param_1[1] = *(undefined8 *)((long)(puVar6 + *(int *)(puVar3 + 0x40)) + 8);
    *param_1 = uVar2;
    uVar2 = 0;
    FUN_100275594(0);
    uVar5 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar2,uVar5);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(puVar6,lVar4);
  return;
}

