// rea decompile_all
// name: FUN_10035c6d0
// address: 0x10035c6d0
// body: available
// range: 0x10035c6d0-0x10035c7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10035c6d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  bVar2 = (int)puVar3 != 1;
  if (bVar2) {
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    puVar5 = &DAT_100a887a8;
    FUN_100004bb4(&DAT_100a887a8,&DAT_10081c960);
  }
  else {
    lVar4 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
    puVar5 = &DAT_100a887b0;
    FUN_100004bb4(&DAT_100a887b0,&DAT_10081c968);
  }
  iVar1 = *(int *)(puVar5 + 0x30);
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar2);
  return param_1;
}

