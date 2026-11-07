// rea decompile_all
// name: FUN_10026dd3c
// address: 0x10026dd3c
// body: available
// range: 0x10026dd3c-0x10026deaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_10026dd3c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    FUN_1000d27dc(param_1,FUN_10026d874);
    uVar3 = 0;
    FUN_10026d874(0);
    puVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar3);
    if ((int)puVar4 == 2) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      uVar6 = 2;
    }
    else if ((int)puVar4 == 1) {
      lVar5 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
      uVar6 = 1;
    }
    else {
      uVar6 = *param_2;
      uVar2 = param_2[1];
      FUN_100008184(uVar6,uVar2);
      *param_1 = uVar6;
      param_1[1] = uVar2;
      uVar6 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar3,uVar6);
  }
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar4 = *puVar1;
  uVar3 = puVar4[1];
  puVar4[1] = puVar1[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar4 = *puVar1;
  uVar3 = puVar4[1];
  puVar4[1] = puVar1[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar4 = *param_2;
  uVar3 = puVar4[1];
  puVar4[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}

