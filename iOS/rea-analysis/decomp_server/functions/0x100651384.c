// rea decompile_all
// name: FUN_100651384
// address: 0x100651384
// body: available
// range: 0x100651384-0x10065150f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100651384(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar8 = (ulong)(byte)uVar3;
  uVar9 = param_2[3];
  _swift_bridgeObjectRetain(uVar9);
  uVar6 = uVar1;
  uVar7 = uVar2;
  uVar5 = uVar9;
  FUN_100650d48();
  if (uVar5 == 0) {
    FUN_1006433f0(param_2);
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    goto LAB_1006514dc;
  }
  if (*(char *)(unaff_x20 + 0x20) == '\x01') {
    if ((uVar8 & 0xff) == 0) {
      if (uVar6 != 0 || uVar7 != 0) goto LAB_100651498;
      FUN_1006433f0(param_2);
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
    }
    else if ((((uint)uVar8 & 0xff) == 1) || (*(long *)(uVar5 + 0x10) != 0)) {
LAB_100651498:
      FUN_10065eb84();
      _swift_bridgeObjectRelease(uVar5);
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100651510);
        (*pcVar4)();
      }
      uVar8 = (ulong)(byte)uVar3;
      uVar6 = uVar1;
      uVar7 = uVar2;
      uVar5 = uVar9;
    }
    else {
      FUN_1006433f0(param_2);
      uVar8 = 2;
    }
  }
  else {
    FUN_1006433f0(param_2);
  }
  uVar8 = uVar8 & 0xff;
LAB_1006514dc:
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar5;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}

