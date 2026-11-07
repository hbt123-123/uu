// rea decompile_all
// name: FUN_10032bdec
// address: 0x10032bdec
// body: available
// range: 0x10032bdec-0x10032beeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10032bdec(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  lVar4 = 0;
  __sScS12ContinuationV15BufferingPolicyOMa(0,uVar7);
  (**(code **)(*(long *)(lVar4 + -8) + 0x28))(param_1,param_2,lVar4);
  plVar1 = (long *)(param_1 + *(int *)(param_3 + 0x1c));
  plVar2 = (long *)(param_2 + *(int *)(param_3 + 0x1c));
  lVar4 = *plVar2;
  if (*plVar1 == 0) {
    if (lVar4 != 0) {
      lVar5 = plVar2[1];
      *plVar1 = lVar4;
      plVar1[1] = lVar5;
      goto LAB_10032be84;
    }
  }
  else {
    if (lVar4 != 0) {
      lVar6 = plVar2[1];
      lVar5 = plVar1[1];
      *plVar1 = lVar4;
      plVar1[1] = lVar6;
      _swift_release(lVar5);
      goto LAB_10032be84;
    }
    _swift_release(plVar1[1]);
  }
  lVar4 = *plVar2;
  plVar1[1] = plVar2[1];
  *plVar1 = lVar4;
LAB_10032be84:
  iVar3 = *(int *)(param_3 + 0x20);
  lVar4 = 0;
  __sScSMa(0,uVar7);
  (**(code **)(*(long *)(lVar4 + -8) + 0x28))(param_1 + iVar3,param_2 + iVar3,lVar4);
  iVar3 = *(int *)(param_3 + 0x24);
  lVar4 = 0;
  __sScS12ContinuationVMa(0,uVar7);
  (**(code **)(*(long *)(lVar4 + -8) + 0x28))(param_1 + iVar3,param_2 + iVar3,lVar4);
  return param_1;
}

