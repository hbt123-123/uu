// rea decompile_all
// name: FUN_1001ba478
// address: 0x1001ba478
// body: available
// range: 0x1001ba478-0x1001ba537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ba534 to 0x1001bac34 FUN_1001bac34 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ba478(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0xf8);
  _swift_errorRelease();
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  if ((uVar1 & 1) != 0) {
    uVar2 = 0;
    __sScEMa(0);
    uVar3 = uVar2;
    FUN_1001bb8b4();
    _swift_allocError(uVar2,uVar3,0,0);
    __sS2cEycfC(uVar3);
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001001ba4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar4 = (long *)0x4d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1001b9fd8;
  FUN_1001bac34(plVar4,unaff_x22 + 0x10,*(undefined1 *)(unaff_x22 + 0x110));
  return;
}

