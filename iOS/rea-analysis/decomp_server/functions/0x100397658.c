// rea decompile_all
// name: FUN_100397658
// address: 0x100397658
// body: available
// range: 0x100397658-0x10039770f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100397658(undefined8 param_1,long param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  lVar2 = *(long *)(lVar5 + 0x10);
  if (lVar2 == 0) {
    lVar2 = 0;
    FUN_100397620();
    iVar1 = *(int *)(lVar2 + 0x18);
    lVar4 = 0;
    __s8Dispatch0A12TimeIntervalOMa();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x10);
    lVar2 = (long)unaff_x20 + (long)iVar1;
  }
  else {
    lVar4 = unaff_x20[1];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10039770c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (param_2 < 2) {
      param_2 = 1;
    }
    lVar2 = lVar2 + -1;
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = (param_2 + -1) / lVar4;
    }
    if (lVar3 <= lVar2) {
      lVar2 = lVar3;
    }
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100397710);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar4 = 0;
    __s8Dispatch0A12TimeIntervalOMa();
    lVar3 = *(long *)(lVar4 + -8);
    lVar2 = lVar5 + ((ulong)*(byte *)(lVar3 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)) +
            *(long *)(lVar3 + 0x48) * lVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000100397704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar2,lVar4);
  return;
}

