// rea decompile_all
// name: FUN_100312808
// address: 0x100312808
// body: available
// range: 0x100312808-0x10031289b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100312808(undefined8 param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar4 = 0;
  __sSqMa(0,uVar3);
  (**(code **)(*(long *)(lVar4 + -8) + 0x18))();
  lVar4 = *(long *)(unaff_x20 + *(int *)(param_2 + 0x24));
  if (!SCARRY8(lVar4,1)) {
    *(long *)(unaff_x20 + *(int *)(param_2 + 0x24)) = lVar4 + 1;
    iVar1 = *(int *)(param_2 + 0x28);
    FUN_100316e44(*(undefined8 *)(unaff_x20 + iVar1));
    *(undefined8 *)(unaff_x20 + iVar1) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10031289c);
  (*pcVar2)();
}

