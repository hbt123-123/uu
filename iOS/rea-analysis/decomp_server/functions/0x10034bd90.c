// rea decompile_all
// name: FUN_10034bd90
// address: 0x10034bd90
// body: available
// range: 0x10034bd90-0x10034be6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034bd90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(ulong *)(lVar7 + 0x10);
  if (uVar4 != 0) {
    uVar5 = 0;
    lVar6 = lVar7 + 0x20;
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10034be70);
        (*pcVar3)();
      }
      FUN_1000b142c(lVar6,auStack_88);
      lVar2 = lStack_68;
      uVar1 = local_70;
      FUN_10003f030(auStack_88,local_70);
      (**(code **)(lVar2 + 8))(param_1,param_2,param_3,uVar1,lVar2);
      if (unaff_x21 != 0) {
        FUN_10003f094(auStack_88);
        return;
      }
      uVar5 = uVar5 + 1;
      FUN_10003f094(auStack_88);
      lVar6 = lVar6 + 0x28;
    } while (uVar4 != uVar5);
  }
  return;
}

