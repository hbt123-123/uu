// rea decompile_all
// name: FUN_1001edaa0
// address: 0x1001edaa0
// body: available
// range: 0x1001edaa0-0x1001edb53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001edaa0(void)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined1 auStack_38 [24];
  
  if (*(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxController) == 0) {
    plVar1 = (long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::scrollbackBuffer);
    _swift_beginAccess(plVar1,auStack_38,0,0);
    lVar3 = *plVar1;
    uVar4 = plVar1[1];
    uVar2 = (uint)(uVar4 >> 0x20);
    uVar5 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if (uVar5 != 0) {
        lVar6 = (long)(int)lVar3;
        lVar7 = lVar3 >> 0x20;
        goto LAB_1001edb30;
      }
      if ((uVar4 & 0xff000000000000) == 0) goto LAB_1001edac0;
LAB_1001edb38:
      FUN_100008184(lVar3,uVar4);
      goto LAB_1001edac8;
    }
    if (uVar5 == 2) {
      lVar6 = *(long *)(lVar3 + 0x10);
      lVar7 = *(long *)(lVar3 + 0x18);
LAB_1001edb30:
      if (lVar6 != lVar7) goto LAB_1001edb38;
    }
  }
LAB_1001edac0:
  lVar3 = 0;
  uVar4 = 0xf000000000000000;
LAB_1001edac8:
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = lVar3;
  return auVar8;
}

