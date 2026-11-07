// rea decompile_all
// name: FUN_1003f0330
// address: 0x1003f0330
// body: available
// range: 0x1003f0330-0x1003f0413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f0330(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  if (uVar1 == uVar2) {
    lVar3 = 0;
    __s8Dispatch0A12TimeIntervalOMa();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    uVar4 = 1;
  }
  else {
    if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1003f040c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    uVar5 = unaff_x20[2];
    if (*(ulong *)(uVar5 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1003f0410);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar3 = 0;
    __s8Dispatch0A12TimeIntervalOMa();
    lVar6 = *(long *)(lVar3 + -8);
    (**(code **)(lVar6 + 0x10))
              (param_1,uVar5 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) +
                       *(long *)(lVar6 + 0x48) * uVar1,lVar3);
    if ((long)uVar2 <= (long)uVar1) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1003f0414);
      (*UNRECOVERED_JUMPTABLE)();
    }
    *unaff_x20 = uVar1 + 1;
    unaff_x20[1] = uVar2;
    unaff_x20[2] = uVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003f0404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar4,1,lVar3);
  return;
}

