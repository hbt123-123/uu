// rea decompile_all
// name: FUN_1006506c4
// address: 0x1006506c4
// body: available
// range: 0x1006506c4-0x1006507cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006506c4(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  byte local_60;
  
  lVar2 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)&local_80 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar3 - (*(long *)(*(long *)(param_3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x68))
            (lVar3,*(undefined4 *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_100995bc0
             ,lVar2);
  __sSF7roundedyxs25FloatingPointRoundingRuleOFTj
            (lVar4,lVar3,param_3,*(undefined8 *)(param_4 + 0x10));
  (**(code **)(lVar5 + 8))(lVar3,lVar2);
  FUN_10064f16c(&local_80,lVar4,param_3,param_4);
  if (local_68 != 0) {
    param_1[1] = uStack_78;
    *param_1 = local_80;
    *(undefined1 *)(param_1 + 2) = local_70;
    param_1[3] = local_68;
    *(byte *)(param_1 + 4) = local_60 & 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006507d0);
  (*pcVar1)();
}

