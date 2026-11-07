// rea decompile_all
// name: FUN_10032bfec
// address: 0x10032bfec
// body: available
// range: 0x10032bfec-0x10032c0cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032bfec(long param_1,ulong param_2,int param_3,long param_4)

{
  int iVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_4 + 0x10);
  lVar2 = 0;
  __sScS12ContinuationV15BufferingPolicyOMa(0,uVar4);
  if (*(int *)(*(long *)(lVar2 + -8) + 0x54) == param_3) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  }
  else {
    if (param_3 == 0x7ffffffe) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x1c)) = param_2 & 0xffffffff;
      return;
    }
    lVar2 = 0;
    __sScSMa(0,uVar4);
    lVar3 = *(long *)(lVar2 + -8);
    if (*(int *)(lVar3 + 0x54) == param_3) {
      iVar1 = *(int *)(param_4 + 0x20);
    }
    else {
      lVar2 = 0;
      __sScS12ContinuationVMa(0,uVar4);
      lVar3 = *(long *)(lVar2 + -8);
      iVar1 = *(int *)(param_4 + 0x24);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x38);
    param_1 = param_1 + iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010032c0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,lVar2);
  return;
}

