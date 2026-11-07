// rea decompile_all
// name: FUN_1002bca80
// address: 0x1002bca80
// body: available
// range: 0x1002bca80-0x1002bcac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002bca80(undefined8 *param_1,ulong *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  long *unaff_x20;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar5 = *param_2;
  if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1002bcac4);
    (*pcVar4)();
  }
  if (uVar5 < *(ulong *)(*unaff_x20 + 0x10)) {
    lVar1 = *unaff_x20 + uVar5 * 0x20;
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    param_1[1] = *(undefined8 *)(lVar1 + 0x28);
    *param_1 = uVar6;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    auVar7._8_8_ = param_1;
    auVar7._0_8_ = FUN_100008290;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1002bcac8);
  (*pcVar4)();
}

