// rea decompile_all
// name: FUN_10021ec00
// address: 0x10021ec00
// body: available
// range: 0x10021ec00-0x10021ed77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10021ec00(long param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  long extraout_x8;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_60 [14];
  char local_52;
  byte local_51;
  
  lVar4 = 0;
  __s10Foundation4DataV8IteratorVMa();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    lVar8 = 0;
    if (uVar5 != 0) {
      lVar8 = (long)(int)param_2;
    }
  }
  else {
    lVar8 = 0;
    if (uVar5 == 2) {
      lVar8 = *(long *)(param_2 + 0x10);
    }
  }
  FUN_100008184(param_2,param_3);
  __s10Foundation4DataV8IteratorV_2atAeC_SitcfC(puVar6,param_2,param_3,lVar8);
  FUN_100220338();
  uVar7 = 0;
  while( true ) {
    __sSt4next7ElementQzSgyFTj(&local_52,lVar4,param_2);
    if ((local_51 & 1) != 0) {
      (**(code **)(lVar9 + 8))(puVar6,lVar4);
      if (*(ulong *)(param_1 + 0x10) == uVar7) {
        return 1;
      }
      if (uVar7 < *(ulong *)(param_1 + 0x10)) {
        return 0;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10021ed78);
      (*pcVar3)();
    }
    if (uVar7 == *(ulong *)(param_1 + 0x10)) {
      (**(code **)(lVar9 + 8))(puVar6,lVar4);
      return 1;
    }
    if (*(ulong *)(param_1 + 0x10) <= uVar7) break;
    pcVar1 = (char *)(param_1 + 0x20 + uVar7);
    uVar7 = uVar7 + 1;
    if (local_52 != *pcVar1) {
      (**(code **)(lVar9 + 8))(puVar6,lVar4);
      return 0;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10021ed74);
  (*pcVar3)();
}

