// rea decompile_all
// name: FUN_10035c298
// address: 0x10035c298
// body: available
// range: 0x10035c298-0x10035c3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10035c298(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    bVar4 = (int)plVar5 != 1;
    if (bVar4) {
      lVar6 = *param_2;
      lVar1 = param_2[1];
      FUN_100008184(lVar6,lVar1);
      *param_1 = lVar6;
      param_1[1] = lVar1;
      puVar7 = &DAT_100a887a8;
      FUN_100004bb4(&DAT_100a887a8,&DAT_10081c960);
      iVar3 = *(int *)(puVar7 + 0x30);
      lVar6 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))
                ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar6);
    }
    else {
      lVar6 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
      puVar7 = &DAT_100a887b0;
      FUN_100004bb4(&DAT_100a887b0,&DAT_10081c968);
      iVar3 = *(int *)(puVar7 + 0x30);
      lVar6 = 0;
      __s10Foundation10URLRequestVMa();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))
                ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar6);
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,!bVar4);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar8 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar6 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

