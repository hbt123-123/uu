// rea decompile_all
// name: FUN_10032bef8
// address: 0x10032bef8
// body: available
// range: 0x10032bef8-0x10032bfdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10032bef8(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  lVar1 = 0;
  __sScS12ContinuationV15BufferingPolicyOMa(0,uVar5);
  iVar4 = (int)param_2;
  if (*(int *)(*(long *)(lVar1 + -8) + 0x54) == iVar4) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x30);
  }
  else {
    if (iVar4 == 0x7ffffffe) {
      uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x1c));
      if (0xfffffffe < uVar2) {
        uVar2 = 0xffffffff;
      }
      iVar4 = (int)uVar2 + -1;
      if (iVar4 < 0) {
        iVar4 = -1;
      }
      return (ulong)(iVar4 + 1);
    }
    lVar1 = 0;
    __sScSMa(0,uVar5);
    lVar3 = *(long *)(lVar1 + -8);
    if (*(int *)(lVar3 + 0x54) == iVar4) {
      iVar4 = *(int *)(param_3 + 0x20);
    }
    else {
      lVar1 = 0;
      __sScS12ContinuationVMa(0,uVar5);
      lVar3 = *(long *)(lVar1 + -8);
      iVar4 = *(int *)(param_3 + 0x24);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x30);
    param_1 = param_1 + (long)iVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010032bfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,lVar1);
  return param_1;
}

