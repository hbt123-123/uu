// rea decompile_all
// name: FUN_100605f9c
// address: 0x100605f9c
// body: available
// range: 0x100605f9c-0x1006060e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10060606c to 0x1007dcc94 _$ss23withCheckedContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5NeverOGXEtYalF (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006060e0 to 0x10032a88c FUN_10032a88c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100605f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = 0xf;
  __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xf,0,0,0x12,0,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss23withCheckedContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5NeverOGXEtYalFTu_100996090
                                     + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10031f9b4;
    __ss23withCheckedContinuation9isolation8function_xScA_pSgYi_SSyScCyxs5NeverOGXEtYalF
              (plVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000a19a0;
  FUN_10032a88c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

