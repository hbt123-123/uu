// rea decompile_all
// name: FUN_10026dc20
// address: 0x10026dc20
// body: available
// range: 0x10026dc20-0x10026dd3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_10026dc20(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar4 = 0;
  FUN_10026d874(0);
  puVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar4);
  if ((int)puVar5 == 2) {
    uVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar7;
    uVar7 = 2;
  }
  else if ((int)puVar5 == 1) {
    lVar6 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    uVar7 = 1;
  }
  else {
    uVar7 = *param_2;
    uVar2 = param_2[1];
    FUN_100008184(uVar7,uVar2);
    *param_1 = uVar7;
    param_1[1] = uVar2;
    uVar7 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar4,uVar7);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  uVar4 = puVar1[1];
  *puVar5 = *puVar1;
  puVar5[1] = uVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar4 = puVar1[1];
  *puVar5 = *puVar1;
  puVar5[1] = uVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar7 = param_2[1];
  *puVar5 = *param_2;
  puVar5[1] = uVar7;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar7);
  return param_1;
}

