// rea decompile_all
// name: FUN_10032b99c
// address: 0x10032b99c
// body: available
// range: 0x10032b99c-0x10032baa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10032b99c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    lVar5 = 0;
    __sScS12ContinuationV15BufferingPolicyOMa(0,uVar7);
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    if (*plVar2 == 0) {
      lVar5 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar5;
    }
    else {
      lVar5 = plVar2[1];
      *plVar1 = *plVar2;
      plVar1[1] = lVar5;
      _swift_retain();
    }
    iVar4 = *(int *)(param_3 + 0x20);
    lVar5 = 0;
    __sScSMa(0,uVar7);
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))
              ((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar5);
    iVar4 = *(int *)(param_3 + 0x24);
    lVar5 = 0;
    __sScS12ContinuationVMa(0,uVar7);
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))
              ((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar5);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

