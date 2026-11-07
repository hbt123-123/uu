// rea decompile_all
// name: FUN_100607c1c
// address: 0x100607c1c
// body: available
// range: 0x100607c1c-0x100607d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100607c1c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 auStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar5 = *param_1;
  lVar7 = *(long *)(lVar5 + 0x78);
  lVar1 = 0;
  FUN_100608530(0,lVar7);
  lVar9 = *(long *)(lVar1 + -8);
  uVar4 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)auStack_90 - uVar4;
  puVar8 = (undefined8 *)(lVar6 - uVar4);
  lVar5 = *(long *)(lVar5 + 0x80);
  _swift_beginAccess((long)param_1 + lVar5,auStack_78,0,0);
  (**(code **)(lVar9 + 0x10))(puVar8,(long)param_1 + lVar5,lVar1);
  puVar2 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,lVar1);
  if ((int)puVar2 == 1) {
    (**(code **)(lVar9 + 8))(puVar8,lVar1);
  }
  else {
    uVar3 = *param_2;
    *param_2 = *puVar8;
    _swift_release(uVar3);
    (**(code **)(*(long *)(lVar7 + -8) + 0x10))(lVar6,param_3,lVar7);
    _swift_storeEnumTagMultiPayload(lVar6,lVar1,1);
    _swift_beginAccess((long)param_1 + lVar5,auStack_90,0x21,0);
    (**(code **)(lVar9 + 0x28))((long)param_1 + lVar5,lVar6,lVar1);
    _swift_endAccess(auStack_90);
  }
  return;
}

