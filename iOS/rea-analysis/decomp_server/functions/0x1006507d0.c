// rea decompile_all
// name: FUN_1006507d0
// address: 0x1006507d0
// body: available
// range: 0x1006507d0-0x1006508ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006507d0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar5 = *(long *)(lVar2 + -8);
  puVar3 = &stack0xffffffffffffffb0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar3 - (*(long *)(*(long *)(param_2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x68))
            (puVar3,*(undefined4 *)
                     PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_100995bc0,lVar2);
  __sSF7roundedyxs25FloatingPointRoundingRuleOFTj
            (lVar4,puVar3,param_2,*(undefined8 *)(param_3 + 0x10));
  (**(code **)(lVar5 + 8))(puVar3,lVar2);
  FUN_10064f380(lVar4,param_2,param_3);
  if (param_4 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006508ac);
  (*pcVar1)();
}

