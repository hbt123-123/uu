// rea decompile_all
// name: FUN_1001ed968
// address: 0x1001ed968
// body: available
// range: 0x1001ed968-0x1001eda9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ed968(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong *unaff_x20;
  
  if (param_1 != 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001eda98);
      (*pcVar4)();
    }
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    uVar3 = (uint)(uVar2 >> 0x20);
    uVar8 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      uVar7 = uVar2 >> 0x30 & 0xff;
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar7 = (long)uVar1 >> 0x20;
        uVar6 = (long)(int)uVar1;
      }
    }
    else if (uVar8 == 2) {
      uVar7 = *(ulong *)(uVar1 + 0x18);
      uVar6 = *(ulong *)(uVar1 + 0x10);
    }
    else {
      uVar7 = 0;
      uVar6 = 0;
    }
    uVar5 = uVar6;
    FUN_1001f82b4(uVar6,uVar7,uVar1,uVar2);
    if (uVar5 < param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001edaa0);
      (*pcVar4)();
    }
    FUN_1001f8250(uVar6,param_1,uVar1,uVar2);
    uVar1 = *unaff_x20;
    uVar2 = unaff_x20[1];
    uVar3 = (uint)(uVar2 >> 0x20);
    uVar8 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      uVar7 = uVar2 >> 0x30 & 0xff;
      if (uVar8 != 0) {
        uVar7 = (long)uVar1 >> 0x20;
      }
    }
    else if (uVar8 == 2) {
      uVar7 = *(ulong *)(uVar1 + 0x18);
    }
    else {
      uVar7 = 0;
    }
    FUN_100008184(uVar1,uVar2);
    FUN_100006cdc(uVar1,uVar2);
    if ((long)uVar7 < (long)uVar6) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001eda9c);
      (*pcVar4)();
    }
    __s10Foundation4DataV15_RepresentationOyACSnySiGcig(uVar6,uVar7,uVar1,uVar2);
    FUN_100006cdc(uVar1,uVar2);
    *unaff_x20 = uVar6;
    unaff_x20[1] = uVar7;
  }
  return;
}

